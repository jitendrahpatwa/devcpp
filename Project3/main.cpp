#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

class Employee 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string empname; 
  
    // Member Functions() 
    void printEmpname() 
    { 
       std::cout << "Employee name is: " << empname; 
    } 
}; 

int main(int argc, char** argv) {
	std::cout << "Hello world!\n";
	// Declare an object of class geeks 
    Employee obj1; 
  
    // accessing data member 
    obj1.empname = "Dev C++"; 
  
    // accessing member function 
    obj1.printEmpname(); 
    return 0; 
}
