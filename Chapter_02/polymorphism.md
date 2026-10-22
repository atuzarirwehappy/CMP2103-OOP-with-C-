
This assignment models a basic interactive Flood Emergency Response System. During flooding, an emergency coordinator may need to evacuate residents, distribute relief supplies, or clear blocked drainage channels. The program allows the user to select an operation at runtime and demonstrates how inheritance and a common virtual function can support different responses.
Problem Statement
Design a C++ program that uses runtime polymorphism to perform emergency-response operations through a common virtual function. The user selects the required operation while the program is running.
Class Design
Base class — EmergencyResponse
Defines the common virtual function virtual void respond(). It provides a shared interface for the response types.
Derived classes
•	Evacuation — overrides respond() for evacuation.
•	ReliefDistribution — overrides respond() for relief supply distribution.
•	DrainageClearing — overrides respond() for drainage clearing.
Class relationship: Each of the three derived classes publicly inherits from EmergencyResponse.
OOP Concepts Demonstrated
•	Inheritance: The operation classes derive from the common parent class, reusing its interface.
•	Virtual function: The base class declares respond() as virtual, enabling dynamic dispatch.
•	Function overriding: Each derived class implements its own version of respond().
•	Base-class pointer: EmergencyResponse* response can point to an object of a derived class.
•	Runtime polymorphism: The call response->respond() invokes the override belonging to the object selected at runtime.
•	Selection using switch: The menu choice determines which derived object the pointer refers to.
Program Flow
1	Display the Flood Emergency Response System menu.
2	Ask the user to enter an operation number.
3	Use the switch statement to select the matching response object.
4	Store that object's address in the base-class pointer response.
5	Call response->respond() to run the selected overridden function.
6	For an unsupported choice, display Invalid choice.
Example Run
FLOOD EMERGENCY RESPONSE SYSTEM
1.	Evacuate residents
2.	Distribute relief supplies
3.	Clear blocked drainage
Enter your choice: 2 Distributing food and clean water.
Building and Running
Source file: polymorphism.cpp
Compile using a C++ compiler compatible with the features used in the source. The shown source uses import std; which requires a compiler and standard-library setup that supports the C++ modules/import form. If your compiler does not support it, use conventional headers such as #include <iostream> as appropriate for the code, then compile and run from your IDE or terminal.
Run the program, enter 1, 2, or 3, and read the response printed to the console.
Scope and Notes
This is an educational demonstration of object-oriented design and runtime polymorphism. The responses are illustrative console messages; the program does not contact emergency services, dispatch teams, or manage real flood operations. The documented output for choice 2 is “Distributing food and clean water.”
Learning Outcome
The assignment shows that a single interface can represent several related operations, while virtual function overriding allows each selected object to behave differently at runtime.
