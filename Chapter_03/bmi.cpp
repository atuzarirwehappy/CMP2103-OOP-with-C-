// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal
import std;
using namespace std;
int main(){
double weight,height;
cout << "Enter weight in pounds: ";
cin >> weight;
cout << "Enter height in inches: ";
cin >> height;
//conversion to standard units
 weight = weight * 0.45359237;
height = height * 0.0254;
double BMI = weight / pow(height,2);
cout << fixed << setprecision(2);
cout << "BMI is " << BMI << endl;
if(BMI < 18.5){
    cout << "Underweight" << endl;
}
else if(BMI > 18.5 && BMI < 24.9){
    cout << "Normal" << endl;
}
else if(BMI > 25.0 && BMI < 29.9){
    cout << "Overweight" << endl;
}
else
    cout << "Obese" << endl;
    return 0;
}
