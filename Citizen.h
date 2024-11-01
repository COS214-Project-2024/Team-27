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

public:
    Citizen();

    // Setters
    void setName(const std::string& name);
    void setID(int ID);
    void setAge(int age);
    void setIncome(double income);
    void setSatisfaction(int satisfaction);
    void setEmploymentStatus(bool isEmployed);

double getincome();
bool getEmploymentStatus();
    // Display details
    void display() const;

};



#endif
