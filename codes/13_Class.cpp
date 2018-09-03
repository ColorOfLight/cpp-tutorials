#include <iostream>

using namespace std;

class Rectangle {
  public:
    int width;
    int height;
  
    Rectangle(int w, int h) {
      width = w;
      height = h;
    }

    int getArea() {
      return width * height;
    }
};

int main()
{
  Rectangle rect = Rectangle(10, 20);

  cout << "Width: " << rect.width << endl;
  cout << "Height: " << rect.height << endl;

  rect.width = 100;
  rect.height = 50;

  cout << "Changed Width: " << rect.width << endl;
  cout << "Changed Height: " << rect.height << endl;

  int area = rect.getArea();

  cout << "Area: " << area << endl;

  return 0;
}