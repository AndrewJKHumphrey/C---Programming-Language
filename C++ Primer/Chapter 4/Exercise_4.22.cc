/*
Exercise 4.22: Extend the program that assigned high pass, pass, and fail grades to
also assign low pass for grades between 60 and 75 inclusive. Write two versions: One
version that uses only conditional operators; the other should use one or more if
statements. Which version do you think is easier to understand and why?
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    vector<int> grades = {99, 91, 90, 80, 75, 60, 59, 30};

    //This version, once you get used to reading the format is clearly much less verbose and easier to see everything
    cout << "Version 1" << endl;
    for(auto grade : grades) {
        string finalgrade = (grade > 90) ? "high pass"
                    : (grade <= 75 && grade >= 60) ? "low pass"
                    : (grade < 60) ? "fail" : "pass";

        cout << "Grade: " << grade << " | Result: " << finalgrade << endl;
    }

    cout << "\nVersion 2" << endl;
    for(auto grade : grades) {
        string finalgrade;
        
        if(grade > 90) {
           finalgrade = "high pass";
        }
        else if(grade <= 75 && grade >= 60) {
            finalgrade = "low pass";
        }
        else if(grade < 60){
            finalgrade = "fail";
        }
        else {
            finalgrade = "pass";
        }

        cout << "Grade: " << grade << " | Result: " << finalgrade << endl;
    }

    /*
    Version 1
    Grade: 99 | Result: high pass
    Grade: 91 | Result: high pass
    Grade: 90 | Result: pass
    Grade: 80 | Result: pass
    Grade: 75 | Result: low pass
    Grade: 60 | Result: low pass
    
    Grade: 59 | Result: fail
    Grade: 30 | Result: fail

    Version 2
    Grade: 99 | Result: high pass
    Grade: 91 | Result: high pass
    Grade: 90 | Result: pass
    Grade: 80 | Result: pass
    Grade: 75 | Result: low pass
    Grade: 60 | Result: low pass
    Grade: 59 | Result: fail
    Grade: 30 | Result: fail
    */
    return 0;
}