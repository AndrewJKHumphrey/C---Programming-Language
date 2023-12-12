/*
Exercise 4.31: The program in this section used the prefix increment and decrement
operators. Explain why we used prefix and not postfix. What changes would have to
be made to use the postfix versions? Rewrite the program using postfix operators.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    vector<int> prevec(20);
    vector<int>::size_type cnt1 = prevec.size();
    // assign values from size ... 1 to the elements in ivec
    //prefix is used since it increments the value then returns it 
    for(vector<int>::size_type ix = 0; ix != prevec.size(); ++ix, --cnt1){ 
        //cout << ix << " | " << cnt << endl;
        prevec[ix] = cnt1;
    }
    
    for(auto e : prevec) {
        cout << e << " ";
    }
    cout << endl;

    vector<int> postvec(20);
    vector<int>::size_type cnt2 = postvec.size();
    // assign values from size ... 1 to the elements in ivec
    //prefix is used since it increments the value then returns it 
    for(vector<int>::size_type ix = 0; ix != postvec.size(); ix++, cnt2--){ 
        //cout << ix << " | " << cnt << endl;
        postvec[ix] = cnt2;
    }
    
    for(auto e : postvec) {
        cout << e << " ";
    }
    cout << endl;
/*
At this time, it does not seem to be an issue switching between pre or post, I was expecting it run for an added literation due to returning the original value then incrementing
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
*/
    return 0;
}