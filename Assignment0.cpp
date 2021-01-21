/*
 * Name - Joe Carmon
 * Class CIS227 21/WI
 * Assignment - C++ Review in class example
 * Date - 1/13/21
 *
 * Purpose - Review C++
 *
 *
 *
 */

//includes section
#include <iostream>
#include "ASSIGNMENT1.h"

//namespace declarations
using namespace std;

//Global scope variables and constants section
//Inputs
int iNumberOfCredits, iGradePoints;

//Outputs
double dGPA;

//function definition section
int main()
{

	CALCGPA clGpa;
	CALCGPA clGpa2;
	char cExit;
    bool bCheckedNumberOfCredits = 1;

    //loop once to gather Number of Credits
    do
    {

    	cout << "Enter the Number of Credits"; //Prompt user for number of credits
    	cin >> iNumberOfCredits;               //Get number of credits

    	//function call to validate
    	//bCheckedNumberOfCredits = ValidateInteger(iNumberOfCredits);

    	//Lambda Expresion for validate integer
    	bCheckedNumberOfCredits = [] (int iToValidate) -> bool {
    		return isdigit(iToValidate);
    	};

    	cout << endl << bCheckedNumberOfCredits << endl;

    }
    while (!bCheckedNumberOfCredits); //Execute loop again if entry if not a number


	do
	{

		cout << "Enter the number of Grade Points.";
		cin >> iGradePoints;
		bCheckedNumberOfCredits = clGpa.ValidateInteger(iGradePoints);

		cout << endl << bCheckedNumberOfCredits << endl;

	}
	while(bCheckedNumberOfCredits);

    dGPA = clGpa.CalculateGPA(iNumberOfCredits, iGradePoints);
    double dMajorGPA = clGpa2.CalculateGPA( 210, 1500);

    cout << dGPA;
    cout << dMajorGPA;

    cin >> cExit;

return 0;
}

