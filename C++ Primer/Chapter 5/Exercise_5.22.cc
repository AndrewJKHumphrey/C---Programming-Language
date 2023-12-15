/*
Exercise 5.22: The last example in this section that jumped back to begin could be
better written using a loop. Rewrite the code to eliminate the goto.
// backward jump over an initialized variable definition is okay
begin:
    int sz = get_size();
    if (sz <= 0) {
        goto begin;
    }
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    // backward jump over an initialized variable definition is okay
    /*begin:
        vector<int> ivec(20);
        int sz = ivec.size();
        if (sz <= 0) {
            goto begin;
        }
    */
    int sz = -10;
    do {
        cout << "went back to the beginning" << endl;
        sz++; //Using this to replicate get_size() needing to run multiple times
    } while(sz <= 0);

    return 0;
}