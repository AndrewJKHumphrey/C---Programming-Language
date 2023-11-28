#include <iostream>
#include "C:\Projects\Current Projects\C++ Primer Exercises\Source Code\1\Sales_item.h"

int main ()
{   
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_1.23 <infile1.23.txt >outfile1.23.txt 
    Sales_item currentbook, book;
    if(std::cin >> currentbook) {
        int count = 1;
        while (std::cin >> book) {
            if(currentbook.isbn() == book.isbn()) {
                count++;
            } else {
                std::cout << currentbook.isbn() << " appeared " << count << " times " << std::endl;
                currentbook = book;
                count = 1;
            }
        }
        std::cout << currentbook.isbn() << " appeared " << count << " times " << std::endl;
    }
    return 0;
    /*Exercise 1.24
    Technically these are grouped together, but only in runs. 

    If you had 1 1 1 1 1 2 2 2 1 1 1 

    It would count the first group of 1s then the 2s then the 1s but not group the second set of 1s 
    This is likely due to the fact the file is not being enumerate through for each item
    The If statment will reset the count once it finds a different value
    I think this is fine for now, but may need to resvist this to make it better*/
}