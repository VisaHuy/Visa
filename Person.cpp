#include <iostream>
#include <string>
using namespace std;

class Person {
	// Write you code here
    public:
        string firstName;
        string lastName;
        int securityNumber;
    Person(string firstName, string lastName, int securityNumber){
        this -> firstName = firstName;;
        this -> lastName = lastName;
        this -> securityNumber = securityNumber;
    }

    void setFirstName(string firstName){
        
        this -> firstName = firstName;
        
    };
    string toString() {
        return "First Name: " + firstName + ", Last Name: " + lastName + ", Security Number: " + to_string(securityNumber);
    }
};


int main() {
    Person ronan("ronan", "ogor", 4785);
    Person person2("Visa", "Huy", 2604);

    ronan.setFirstName("ronano");
    std::cout << ronan.toString() << std::endl;

    person2.setFirstName("rio");
    cout << person2.toString()<< endl;

    return 0;
}