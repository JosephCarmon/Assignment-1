/*
 * Assignment1Class.cpp
 *
 *  Created on: Jan 20, 2021
 *      Author: Joe
 *
 *      Class definition cpp file
 */

//Include the class header file and any other header files you need.
#include "Assignment1.h"
#include <iostream>


//Calculates the GPA for a given person
//  Formula is grade points / Total credits attempted
//
double CALCGPA::CalculateGPA(int iNumberOfCredits, int iGradePoints)
{

   return iGradePoints/iNumberOfCredits;

}

bool CALCGPA::ValidateInteger( int iToValidate)
{

	return isdigit(iToValidate); //Return a o value if the value in not a digit

}

