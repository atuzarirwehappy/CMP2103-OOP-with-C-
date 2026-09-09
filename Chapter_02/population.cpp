// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.


#include <iostream>
using namespace std;
int main(){
int current_population = 312032486;
int seconds_per_year = 24 * 60 * 60 * 365;
int births = seconds_per_year/7;
int deaths = seconds_per_year/13;
int immigrants = seconds_per_year/45;
for(int year = 1; year <= 5 ;year++){
current_population = current_population + births - deaths +immigrants;
cout << "year "<< year << ":" << current_population << endl;
}

return 0;
}
