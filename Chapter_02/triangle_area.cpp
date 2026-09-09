// Geometry: area of a triangle) Write a program that prompts the user to enter the
// three points (x1, y1), (x2, y2), and (x3, y3) of a triangle and displays its area.
// The formula for computing the area of a triangle is s = (side1 + side2 + side3) / 2
// Area = sqrt(s(s-side1)(s-side2)(s-side3))
// Example: Enter three points for a triangle: 1.5, -3.4, 4.6, 5, 9.5, -3.4 
// The area of the triangle is 33.6
import std;
using namespace std;
int main(){
double x1,x2,x3,y1,y2,y3;
cout << "Enter the three points of the triangle : " << endl;
if(!(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)){//error exit
    return 1;
};

cout << "(" << x1 << ","<< y1 <<")" << "(" <<x2<<","<<y2<<")" << "(" <<x3<<","<<y3<<")" <<endl;
double sidel = sqrt(pow(x1-x2,2)+pow(y1-y2,2));//length calculation using coordinates
double side2 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
double side3 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
double s = (side2 + side3 + sidel)/2;//semiperimeter
double area = sqrt(s*(s-sidel)*(s-side2)*(s-side3));//herons formular
cout << "The area of the triangle is " << area;
return 0;
}
