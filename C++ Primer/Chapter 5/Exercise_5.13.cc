/*
Exercise 5.13: Each of the programs in the highlighted text on page 184 contains a
common programming error. Identify and correct each error.
(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case ’a’: aCnt++;
        case ’e’: eCnt++;
        default: iouCnt++;
}
(b) unsigned index = some_value();
    switch (index) {
    case 1:
        int ix = get_value();
        ivec[ ix ] = index;
        break;
    default:
        ix = ivec.size()-1;
        ivec[ ix ] = index;
    }
(c) unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
        case 1, 3, 5, 7, 9:
            oddcnt++;
            break;
        case 2, 4, 6, 8, 10:
            evencnt++;
            break;
    }
(d) unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }

*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a': 
            aCnt++;
            break;
        case 'e': 
            eCnt++;
            break;
        default: 
            iouCnt++;
            break;
    }

    unsigned index = some_value();
    vector<int> ivec; //ivec was not initalized 
    switch (index) {
    case 1:
        int ix = get_value();
        ivec[ ix ] = index;
        break;
    default:
        ix = ivec.size()-1;
        ivec[ ix ] = index;
    }

    unsigned evenCnt = 0, oddCnt = 0;
    int num;
    while(cin >> num) {
        int digit = num % 10;
        switch (digit) {
            case 1: case 3: case 5: case 7: case 9:
                oddCnt++;
                break;
            case 2: case 4: case 6: case 8: case 10:
                evenCnt++;
                break;
        }
    }

    const unsigned ival=512, jval=1024, kval=4096; //Only constants can be used as switch conditions
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }
    return 0;
}