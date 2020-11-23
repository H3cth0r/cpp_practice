#include "Point.h"
#include <math.h>
class Triangle{
  public:
    // Constructor
    Triangle(Point, Point, Point);
    Triangle();
    // Deconstructor
    ~Triangle();
    // Getters
    Point getVertex1();
    Point getVertex2();
    Point getVertex3();
    // Setters
    void setVertex1(Point);
    void setVertex2(Point);
    void setVertex3(Point);
    // Additional
    double perimeter();
    double area();
  private: // Atributes
  Point vertex1, vertex2, vertex3;
};
// Constructor
Triangle :: Triangle(Point ver1, Point ver2, Point ver3){
  vertex1 = ver1;
  vertex2 = ver2;
  vertex3 = ver3;
} // Default Constructor
Triangle :: Triangle(){
  vertex1=Point(0, 1);
  vertex2=Point(50, 30);
  vertex3=Point(25, 10);
}
// Deconstructor
Triangle :: ~Triangle(){
}
// Getters
Point Triangle :: getVertex1(){
  return vertex1;
}
Point Triangle :: getVertex2(){
  return vertex2;
}
Point Triangle :: getVertex3(){
  return vertex3;
}
// Setters
void Triangle :: setVertex1(Point ver1){
  vertex1 = ver1;
}
void Triangle :: setVertex2(Point ver2){
  vertex2 = ver2;
}
void Triangle :: setVertex3(Point ver3){
  vertex3 = ver3;
}
// Additional
double Triangle :: perimeter(){
  double firstLine = sqrt(pow(vertex2.getX() - vertex1.getX(), 2) + pow(vertex2.getY()-vertex1.getY(), 2));
  double secondLine = sqrt(pow(vertex3.getX() - vertex2.getX(), 2) + pow(vertex3.getY()-vertex2.getY(), 2));
  double thirdLine = sqrt(pow(vertex3.getX() - vertex1.getX(), 2) + pow(vertex3.getY()-vertex1.getY(), 2));
  double thePerimeter = firstLine + secondLine + thirdLine;
  return thePerimeter;
}
double Triangle :: area(){
  double area = (vertex1.getX()*(vertex2.getY()-vertex3.getY()) + vertex2.getX()*(vertex3.getY()-vertex1.getY()) + vertex3.getX()*(vertex1.getY()-vertex2.getY())) / 2;
  return abs(area);
}