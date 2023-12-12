/*
Exercise 4.19: Given that ptr points to an int, that vec is a vector<int>, and that
ival is an int, explain the behavior of each of these expressions. Which, if any, are
likely to be incorrect? Why? How might each be corrected?
(a) ptr != 0 && *ptr++ (b) ival++ && ival
(c) vec[ival++] <= vec[ival]
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int i = 100;
    int *ptr = &i; 
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    int ival = 1;

    //Checks if the pointer is not equal to 0, then checks if the *(ptr + 1), which in this case appears to point to ival, is non zero 
    cout << "ptr: " << ptr << endl; //Should point to i
    cout << "*ptr: " << *ptr << endl;
    cout << "i: " << i << endl;
    /*
    ptr: 007CFCB8
    *ptr: 100
    i: 100
    */
    if(ptr != 0 && *ptr++) {
        cout << "\nTESTING 1" << endl;
        cout << "\nptr: " << ptr << endl; 
        cout << "*ptr: " << *ptr << endl; 
        cout << "i: " << i << endl;
        /*
        ptr: 007CFCBC This value was incremented
        *ptr: 10 Which changed where the pointer was pointing, which is why it is not equal to i nor i + 1
        i: 100
        */
    }
    
    //tests if ival is nonzero, then increments it. Then tests if ival is nonzero
    cout << "\nival: " << ival << endl;
    if(ival++ && ival){
        cout << "\nTESTING 2" << endl;
        cout << "\nival: " << ival << endl;
        /* 
            ival: 1

            TESTING 2

            ival: 2 ival was incremented after the nonzero check
            
            ival: 2

            We know this because if we set ival to 0, then this happens
            ival: 0 if(ival) happens, then the ival++ happens
                    Leading to no testing message   
            ival: 1 but ival was incremented
        */
    }

    cout << "\nival: " << ival << endl;

    if(vec[ival++] <= vec[ival]) {
        cout << "\nTESTING 3" << endl; 

        /*
        ival: 2

        TESTING 3 <- since this printed, this means the current ival was used, then incremented 
                    leading to v[2] then v[3] to be compared against each other.... is what I thought at first
                    I removed the = from <= and it was no longer true, so it must incremented first, then looked up the vector element
                    When I used ==, it was true again, this tells me that the ival was incremented first, then used as a index value

        ival: 3 <- ival was incremented
        */
    }
    
    cout << "\nival: " << ival << endl;

    return 0;
}