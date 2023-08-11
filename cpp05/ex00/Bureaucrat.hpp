#pragma once

#include <iostream>
#include <string>


class Bureucrat {
private:
    std::string const _name ;
    int _gradePoints;
public:
   int GradeTooHighException(150);
   int  GradeTooLowException(1);

   void const getName(void);
   std::string setName(std::string name);

    void const getGrade(void);
};

