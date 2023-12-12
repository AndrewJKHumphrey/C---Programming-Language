/*
Exercise 5.5: Using an if–else statement, write your own version of the program to
generate the letter grade from a numeric grade.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    vector<string> letters = {"F", "D", "C", "B", "A", "A++"};
    vector<int> grades;
    vector<string> graded;
    for(int i = 0; i <= 100; i++) {
        grades.push_back(i);
    }

    for(int grade : grades) {
        //Assume failure until grade says otherwise
        string result = letters[0];
        if(grade > 59) {
            result = letters[(grade - 50) / 10];
            if(grade != 100) {
                int remainder = grade % 10;
                if(remainder > 7) {
                    result += "+";
                } else if(remainder < 3) {
                    result += "-";
                }
            }
        }
        graded.push_back(result);
    }

    int i = 0;
    for(string grade : graded) {
        cout << "Letter | Grade: " << grade << " | " << grades[i] << endl;
        i++;
    }
    return 0;
}