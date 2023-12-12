/*
Exercise 5.6: Rewrite your grading program to use the conditional operator (§ 4.7,
p. 151) in place of the if–else statement.
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
        int remainder = grade % 10 ;
        string result;
        (grade > 59) ? result = letters[(grade - 50) / 10], 
            (grade != 100) ?
                (remainder > 7) ? result += "+" : 
                    (remainder < 3) ? result += "-" : "" : "" : result = letters[0]; //else of the last, then second, then first conditional
        graded.push_back(result);
    }

    int i = 0;
    for(string grade : graded) {
        cout << "Letter | Grade: " << grade << " | " << grades[i] << endl;
        i++;
    }
    return 0;
}
