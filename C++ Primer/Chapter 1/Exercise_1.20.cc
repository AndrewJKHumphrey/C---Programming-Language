#include <iostream>
#include "C:\Projects\Current Projects\C++ Primer Exercises\Source Code\1\Sales_item.h"

int main ()
{   
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_1.20 <infile1.20.txt >outfile1.20.txt 
    Sales_item book;
    while (std::cin >> book) {
        std::cout << book << std::endl;
    }
    return 0;
}

