#include <iostream>
#include "C:\Projects\Current Projects\C++ Primer Exercises\Source Code\1\Sales_item.h"

int main ()
{   
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_1.21 <infile1.21.txt >outfile1.21.txt 
    Sales_item sum, book1, book2;
    // write ISBN, number of copies sold, total revenue, and average price
    while (std::cin >> book1) {
        std::cin >> book2;
        //Check to ensure the two books have the same ISBN values before adding
        if(book1.isbn() == book2.isbn()) {
            sum = book1 + book2; 
            std::cout << sum << std::endl;
        }
        else
        {
            std::cout << book1 << std::endl;
            std::cout << book2 << std::endl;
        }
    }
    return 0;
}