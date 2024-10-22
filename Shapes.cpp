#include <iostream>
#include <string>
using namespace std;

class Point2D {
public:
    double x;
    double y;
    Point2D() : x(0), y(0) {} 
    Point2D(double x_val, double y_val) : x(x_val), y(y_val) {}
    
    double isEqual(const Point2D& other){
        return this->x==other.x && this->y==other.y;
     }
};

class Rectangle{
public:
   // TODO
    Point2D buttomLeft;
    double width;
    double height;
    
   
    Rectangle(Point2D buttomLeft, Point2D topRight){

    };

    double piremeter(){
        return 2 * (width + height) ;
    }
    double area(){
         return width * height;
    }

    bool isEqual(const Rectangle& other){
        if(width == width && height == height){
            return true;
        } else {
            return false;
        }
    };
};



int main() {
    Point2D p1(0,0);
    Point2D p2(10,20);

    Rectangle r1(p1, p2);
    Rectangle r2(p1, p2);

    string message = r1.isEqual(r2)? "rectangles are equal" : "rectangles are not equal";
    cout<< message << std::endl;
  

    return 0;
}