
 import std;
using namespace std;

class EmergencyResponse {//parent class
public:
//virtual enables runtime polymorphism
virtual void respond() {//allows the derived class's overidden function to be called at runtime through a base class pointer
cout << "General emergency response." << endl;
    }
};
//derived class overrides the virtual function
class Evacuation : public EmergencyResponse {
public:
void respond() override {
cout << "Evacuating residents from flooded areas." << endl;
}
};

class ReliefDistribution : public EmergencyResponse {
public:
void respond() override {
cout << "Distributing food and clean water."
<< endl;
}
};

class DrainageClearing : public EmergencyResponse {
public:
void respond() override {
cout << "Clearing blocked drainage channels." << endl;
    }
};

int main() {
Evacuation evacuation;
ReliefDistribution relief;
DrainageClearing drainage;

EmergencyResponse* response;//declaration of a base classs pointer
int choice;

cout << "FLOOD EMERGENCY RESPONSE SYSTEM\n";
cout << "1. Evacuate residents\n";
cout << "2. Distribute relief supplies\n";
cout << "3. Clear blocked drainage\n";
cout << "Enter your choice: ";
cin >> choice;

switch (choice) {
case 1:
response = &evacuation;
break;

case 2:
response = &relief;
break;

case 3:
response = &drainage;
break;

default:
cout << "Invalid choice." << endl;
return 0;
}

response->respond();//calls the overridden function at runtime

return 0;
}

