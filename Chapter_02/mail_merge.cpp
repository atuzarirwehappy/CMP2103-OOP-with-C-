// Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University 
// Admissions Board has approved your application for admission to the 
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic 
// institution dedicated to academic excellence and innovation. Please ensure 
// that you report to the Academic Registrar's office with your original 
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,


// John Doe
// Registra

import std;
using namespace std;
int main() {
    //text variables to store the information
    string first_name, last_name, program, academic_year;

    // student information
    cout << "Enter your first name: ";
    getline(cin, first_name);

    cout << "Enter your last name: ";
    getline(cin, last_name);

    cout << "Enter your study program: ";
    getline(cin, program);

    cout << "Enter the academic year: ";
    getline(cin, academic_year);
    //autodate
    auto now = chrono::system_clock::now();
    cout << "Date : " << format("{:%d %B %Y}",now) << endl;


    // acceptance letter printout

cout << "To: " << first_name << " " << last_name << endl;
cout <<  "Dear " << first_name << endl;

cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University" << endl; 
cout << "Admissions Board has approved your application for admission to the "<< academic_year << "academic year." << endl;
cout << "You have been offered a place for the following course"<< endl;
cout << "PROGRAM: " << program << endl;
cout << "As a student of Makerere University, you will be part of a historic" << endl;
 cout << "institution dedicated to academic excellence and innovation. Please ensure "<< endl;
cout << "that you report to the Academic Registrar's office with your original"<< endl; 
cout << "academic documents for verification during the orientation week."<< endl;
cout << "We look forward to welcoming you to the Makerere University."<< endl;
cout << "Yours sincerely,"<< endl;
cout << "John Doe"<< endl;
cout << "Registra" << endl;

    return 0;
}
