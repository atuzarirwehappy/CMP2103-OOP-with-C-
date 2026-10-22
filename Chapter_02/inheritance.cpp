

import std;
using namespace std;

class WetlandSite {  //base class
public:
string wetlandName;
string location;

void enterSiteDetails() {// get wetland details
cout << "Enter wetland name: ";
getline(cin, wetlandName);

cout << "Enter location: ";
getline(cin, location);
}

void displaySiteDetails() {//display wetland details
cout << "\n WETLAND DETAILS \n";
cout << "Wetland Name: " << wetlandName << endl;
cout << "Location: " << location << endl;
}
};

//derived class inheriting from WetlandSite
class Inspection : public WetlandSite {
public:
string encroachment;
double affectedArea;

void enterInspectionDetails() {//get inspection information
cout << "Enter encroachment observed: ";
getline(cin, encroachment);

cout << "Enter affected area in hectares: ";
cin >> affectedArea;
cin.ignore(1000, '\n');
}

void displayInspectionDetails() {//display inspection details
cout << "\n INSPECTION DETAILS \n";
cout << "Encroachment: " << encroachment << endl;
cout << "Affected Area: " << affectedArea << " hectares" << endl;
    }
};

//derived class inheriting from Inspection
class RestorationOperation : public Inspection {
public:
int seedlingsPlanted;

void enterRestorationDetails() {//get restoration details
cout << "Enter number of seedlings planted: ";
cin >> seedlingsPlanted;
}

void displayRestorationDetails() {//display restoration details
cout << "\n RESTORATION DETAILS \n";
cout << "Seedlings Planted: " << seedlingsPlanted << endl;
    }
};

int main() {
RestorationOperation operation;//object for RestorationOperation(used to access the class's functions)

cout << "WETLAND RESTORATION MONITORING SYSTEM\n";
//FUNCTION CALLS
operation.enterSiteDetails();
operation.enterInspectionDetails();
operation.enterRestorationDetails();

operation.displaySiteDetails();
operation.displayInspectionDetails();
operation.displayRestorationDetails();

return 0;
}
//sample run
//WETLAND RESTORATION MONITORING SYSTEM
//Enter wetland name: RUSHERE
//Enter location: KIRUHURA
//Enter encroachment observed: COWS
//Enter affected area in hectares: 100
//Enter number of seedlings planted: 120

 //WETLAND DETAILS 
//Wetland Name: RUSHERE
//Location: KIRUHURA

 //INSPECTION DETAILS 
//Encroachment: COWS
//Affected Area: 100 hectares

 //RESTORATION DETAILS 
//Seedlings Planted: 120
//PS C:\Users\HP\Desktop\C++ YEAR TWO\CMP2103-OOP-with-C--1\Chapter_02> 
