#include <iostream>

using namespace std;

#include "Triangle.h"

int main() {
  Triangle trianguloUno(Point(0, 0), Point(50, 30), Point(25, 10));
  cout << "Perimeter: " <<trianguloUno.perimeter() << endl;
  cout << "Area: " << trianguloUno.area() << endl;
}