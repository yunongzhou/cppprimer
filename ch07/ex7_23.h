class Screen{
  public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd),
    contents(ht * wd, c){}

    // implicitly inline
    char get() const{return contents[cursor];}

    // explicitly inline
    inline char get(pos ht, pos wd) const;

    Screen &move(pos r, pos c);

  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline
Screen &Screen::move(pos r, pos c){
  pos row = r * width; // compute the row location
  cursor = row + c; // move cursor to the column within that row
  return *this; // return this object as an lvalue
}

char Screen::get(pos r, pos c) const{ // declared as inline in the class
  pos row = r * width; // compute row location
  return contents[row + c]; // return character at the given column
}
