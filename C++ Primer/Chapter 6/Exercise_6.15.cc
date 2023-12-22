/*
Exercise 6.15: Explain the rationale for the type of each of find_char’s parameters
In particular, why is s a reference to const but occurs is a plain reference? Why are
these parameters references, but the char parameter c is not? What would happen if
we made s a plain reference? What if we made occurs a reference to const?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

string::size_type find_char(const string s, char c, string::size_type &occurs)
{
    //Changing S to a non reference does not seem to impact the code, likely because we only read from it
    //However, since we do not plan to write to it, making it a const means we leave the string content alone within the function
    //c is a char since that is what we are looking for within string s
    auto ret = s.size(); // position of the first occurrence, if any
    occurs = 0; // set the occurrence count parameter, if this were a const, the value could never be updated
    for (decltype(ret) i = 0; i != s.size(); ++i) {
    if (s[i] == c) {
        if (ret == s.size())
            ret = i; // remember the first occurrence of c
        ++occurs; // increment the occurrence count
    }
    }
return ret; // count is returned implicitly in occurs
}


int main()
{   
    string::size_type o; //How many 'N's are in th string Passed as a reference parameter so we can 'return' multiple values
    string::size_type x = find_char("TESTING THE FUNCTION TODAY", 'N', o); //First instance of 'N' in the string

    cout << o << endl;
    cout << x << endl;
    return 0;
}