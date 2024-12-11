#pragma once
#include "doctor.h"
#include "security.h"

class Director : public Security, Doctor { // Множественное наследование
private:
    double _timeOfLead;

public:
    Director(std::string name, std::string workTime, std::string itemInHand, double timeOfLead);
    void displayInfo();

};

