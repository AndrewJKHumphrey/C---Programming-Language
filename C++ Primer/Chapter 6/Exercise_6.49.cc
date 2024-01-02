/*
Exercise 6.49: What is a candidate function? What is a viable function?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//Each function below is a candidate function for example, all four could be used potentially
int example() {
    return 1;
}

//But depending on the amount of arguments and type of said arguments, the compile will know which ones will be viable
int example(int i) {
    return 1 + i;
}


int example(int i, int j) {
    return i + j;
}

double example(double a, double b) {
    if(a != 0 && a > b)
        return b / a;
    else if(b != 0)
        return a / b;
    else
        return a * b;
}

string example(int a, string s) {
    if((a % 2) == 0){
        return s + " a is even"; 
    } else {
        return s + " a is odd";
    }
}


int main()
{
    cout << example() << endl; //Example without an argument has only one viable function
    //If we had a one argument example function with a default value, like example(int i = 1)
    //Then we would have an error since both functions could have no arguments, but it would be ambagious 

    cout << example(12) << endl; //Example with an argument has one viable function, example(int i)

    cout << example(12, 34) << endl; //This has two viable arguments, but better matches with example(int i, int j)
    //example(double a, double b) is viable since ints can be promoted to doubles implicitly 

    cout << example(12.34, 56.78) << endl; //This has two viable arguments, but better matches with example(double a, double b)

    //example(12.1, 34) //This however is ambiguous, one double could mean example(double a, double b)
    //But one int could also mean example(int i, int j)

    //This has one viable function, since it has two arguments, but a string cannot be implicitly promoted to int/double
    cout << example(122, "Isn't it crazy that") << endl;


    return 0;
}