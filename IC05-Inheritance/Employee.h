//*********************************************************************
// Author:		 Computer Science, Pacific University
// Date:		   4/10/2023
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//*********************************************************************

#pragma once

#include <iostream>

using namespace std;

class Employee {
public:
  Employee(string name = "", string ssn = "");
  string getName() const;
  string getSSN() const;
  void print(std::ostream& rcOutStream) const;

private:
  string mName, mSSN;
};