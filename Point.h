class Point{
  public: // Methods
  // Constructor
  Point(double, double);
  // Default Constructor
  Point();
  // Destructor
  ~Point();
  // Getters
  double getX();
  double getY();
  // Setters
  void setX(double);
  void setY(double);
  // Aditionals
  double distance(Point);
  private: // Atributes
  double x, y;
};
// Constructor
Point :: Point(double theX, double theY){
  x = theX;
  y = theY;
}
// Default Constructor
Point :: Point(){
  x = 0;
  y = 0;
}
// Destructor
Point :: ~Point(){
}
// Getters
double Point :: getX(){
  return x;
}
double Point :: getY(){
  return y;
}
// Setters
void Point :: setX(double theX){
  x = theX;
}
void Point :: setY(double theY){
  y = theY;
}
// Aditionals
//double Point :: distance(Point){
//}