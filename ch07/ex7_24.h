#include<string>

class Screen{
  public:
    using pos = std::string::size_type;

    Screen() = default;

    Screen(pos ht, pos wd): height(ht), width(wd),
    contents(ht * wd, ' '){}

    Screen(pos ht, pos wd, char c): height(ht), width(wd),
    contents(ht * wd, c){}

    // implicitly inline
    char get() const{return contents[cursor];}

    // explicitly inline
    char get(pos ht, pos wd) const;


  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

char Screen::get(pos r, pos c) const{ // declared as inline in the class
  pos row = r * width; // compute row location
  return contents[row + c]; // return character at the given column
}
