#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
#include <vector>
using std::cout, std::cin, std::endl, std::string, std::vector;

int main() 
{
/*     string hexdigits = "0123456789ABCDEF";
    cout << "Enter numbers 00-15"
    <<" seperated by spaces. Hit Enter when Finished: "
    << endl;

    string result;
    string::size_type n;

    while(cin >> n) {
        if(n < hexdigits.size()){
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: " << result << endl; */

    /*
*/
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
        mid = beg + (end - beg)/2;
        cout << "Mid: " << *mid << endl;
        i++;
    }

    cout << "Found " << sought << endl;
    return 0;
}