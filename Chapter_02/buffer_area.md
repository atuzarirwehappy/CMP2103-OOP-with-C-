## Buffer Analysis

A buffer region is an area created around a geographic feature at a specified distance.

For example, a 1 km buffer around a water point represents all locations that are within 1 km of that water source.

Buffers can be created around points, lines, or polygons and are commonly used in GIS for proximity and spatial analysis.

### Task

Write a program that:

- Takes a specific point coordinate as the center location.
- Creates buffers of different sizes around that point.
- Takes a given set of points.
- Determines which points fall within each buffer.
- Returns the points contained in each buffer region

import std;
using namespace std;
int main(){
double centre_X,centre_Y;//center of the buffer
int number_of_points;//points around the buffer region
cout << "Enter the center point(x,y): ";
cin >> centre_X >> centre_Y;
cout << "Enter the number of points: ";
cin >> number_of_points;

vector<double> X,Y;//VECTOR TO STORE THE COORDINATES

//coordinates entry
for(int i = 0; i < number_of_points ; i++){
    double X_coordinate, Y_coordinate;
    cout << "Enter the coordinates for point "<< i+1 << ":";
    cin >> X_coordinate >> Y_coordinate;
    X.push_back(X_coordinate);//pushing to the vector
    Y.push_back(Y_coordinate);
}
for(int i = 0; i < number_of_points ; i++){//FOR VERY CLEAR DISPLAY OF COORDINATES
    cout << "Point " << i+1 << ": (" << X[i] << "," << Y[i] << ")" << endl;
}
double buffer_size;
cout << "Enter the buffer size: ";
cin >> buffer_size;
cout << "The point(s) inside the buffer are : ";
//checking each point
for(int i = 0; i < number_of_points ; i++){
    double distance = sqrt(pow(X[i]-centre_X,2)+pow(Y[i]-centre_Y,2));
    if(distance <= buffer_size){
        cout << "(" << X[i] << "," << Y[i] << ")" << endl;
    }
}
    return 0;  
}
