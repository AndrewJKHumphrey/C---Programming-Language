/*
Exercise 5.15: Explain each of the following loops. Correct any problems you detect.
(a) for (int ix = 0; ix != sz; ++ix) {  }
        if (ix != sz)
            // ...
(b) int ix;
    for (ix != sz; ++ix) {  }
(c) for (int ix = 0; ix != sz; ++ix, ++ sz) {}
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    vector<int> ivec(10);
    auto sz = ivec.size();

    //literates the index value until it reaches the end of the collection
    for (int ix = 0; ix != sz; ++ix) {
        //If this was meant to be within the loop, it is a bit redundant since it has the same condition as the loop
        if (ix != sz) 
            ; //Null Statement
        //If the if statement was meant to be outside of the loop, it will not be able to see ix due to scope, would have to declare it outside of the loop
    }

    int ix; //Would be smart to initialize this here or within the loop
    //Missing the init-statement
    //This loop is supposed to be the same as the one above, but with ix accessible outside of scope
    //The issue is ix was not initalized, so it will start with the default
    for (ix = 0; ix != sz; ++ix) {  
        cout << "test: " << ix << endl;
        /*
        No initialized value, lead to weird results, example below
        test: 4280086
        test: 4280087
        test: 4280088
        test: 4280089
        test: 4280090
        test: 4280091
        test: 4280092
        Even changing the condition to > sz still had weird results, example below
        test: 5788315
        test: 5788316
        test: 5788317
        test: 5788318
        test: 5788319
        Initializing to 0 is the more predictable option
        test: 0
        test: 1
        test: 2
        test: 3
        test: 4
        test: 5
        test: 6
        test: 7
        test: 8
        test: 9
        */
    }

    cout << "Test: " << ix << " | " << sz << endl;
    for (int ix = 0; ix != sz; ++ix, ++sz) {
        //The issue with this loop is it wants to move both ix and sz up by 1 each iteration
        //So, it would never end, should have something within the loop to change that
        if(ix == 42) {
            break;
        }
        cout << "Test: " << ix << " | " << sz << endl;
        /*
        Test: 30 | 40
        Test: 31 | 41
        Test: 32 | 42
        Test: 33 | 43
        Test: 34 | 44
        Test: 35 | 45
        Test: 36 | 46
        Test: 37 | 47
        Test: 38 | 48
        Test: 39 | 49
        Test: 40 | 50
        Test: 41 | 51
        */
    }
    return 0;
}