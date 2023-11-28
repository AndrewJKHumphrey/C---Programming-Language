#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
#include <vector>
using std::cout, std::cin, std::endl, std::string, std::vector;

int main() 
{
    vector<string> text{"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N"};
    string sought = "K";

    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg)/2;
    int i = 1;
    while (mid != end && *mid != sought) {
        cout << "Mid: " << *mid << endl;
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2; //This needs the second beg because you are moving the middle point up as you search
        //The end point moves backward by simply setting it to the current mid point when the mid point is less than the sought after value
        //The starting point needs to move forward if the sought after value is greating than the mid point, so have to add the updated beg value
        cout << "Mid: " << *mid << endl;
        i++;
    }

    cout << "Found " << sought << endl;
    return 0;
}