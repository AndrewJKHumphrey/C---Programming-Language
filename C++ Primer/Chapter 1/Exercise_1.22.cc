#include <iostream>
#include "C:\Projects\Current Projects\C++ Primer Exercises\Source Code\1\Sales_item.h"

int main ()
{   
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_1.22 <infile1.22.txt >outfile1.22.txt 
    Sales_item sum, book;
    while (std::cin >> book) {
        if(book.isbn() == sum.isbn()){
            sum += book;
        } else {
            sum = book;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}