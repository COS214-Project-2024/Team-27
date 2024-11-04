#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>
using namespace std ;

class Citizen{
private:
  string name;
  int ID;
  int age;
  double income;
  int satisfaction;
  bool isEmployed;

  // Static member to track the last assigned ID
    static int lastAssignedID;

public:
    Citizen();

    // Setters
    void setName(const std::string& name);
    void setAge(int age);
    void setIncome(double income);
    void setSatisfaction(int satisfaction);
    void setEmploymentStatus(bool isEmployed);
    bool getEmployment();
double getIncome();
    // Display details
    void display() const;

};



#endif