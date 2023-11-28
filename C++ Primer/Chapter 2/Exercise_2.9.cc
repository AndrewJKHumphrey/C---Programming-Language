#include <iostream>

int main() 
{
    //A
    //std::cin >> int input_value; //input value was not declared prior resulting in a type name error
    
    int corrected_iv; 
    std::cin >> corrected_iv;
    std::cout << corrected_iv << std::endl;

    //B
    //int i1 = { 3.14 }; //This results in a compiler error due to the lack of a narrowing conversion
    
    //double i1 = { 3.14 };    
    
    int i1 = { (int)3.14}; //Typecast to narrow the value, this causes the value to become a 3
    std::cout << i1 << std::endl;
    
    //C
    //double salary = wage = 9999.99; wage had not been declared and thus is unable to be used

    //If we wanted to keep the original line, the below would work
    //double corrected_w;
    //double salary = corrected_w = 9999.99;
    
    //However, if we define what salary is first, then have wage equal that value, we can have both initialized on a single line
    double salary = 9999.99, corrected_w = salary; 

    std::cout << salary << std::endl;
    std::cout << corrected_w << std::endl;
    
    //D
    int i2 = 3.14; //Does not cause a compiler error, but having a double go into an int causes the value to become 3
    std::cout << i2 << std::endl;

    return 0;
}