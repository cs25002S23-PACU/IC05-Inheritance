//*********************************************************************
// File name:	 SalariedEmployee.h
// Author:		 Computer Science, Pacific University
// Date:		   4/10/2023
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//*********************************************************************

#pragma once

#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

class SalariedEmployee : public Employee {
public:
  SalariedEmployee();
  SalariedEmployee(string name, string ssn,
    double annualSalary);

  double getPay() const;
  void addWorkedHours(double hours);

  void print(ostream& rcOut) const;

private:
  double mAnnualSalary;
};