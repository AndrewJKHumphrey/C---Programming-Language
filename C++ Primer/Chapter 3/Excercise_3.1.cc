#include "C:\Projects\Current Projects\C++ Programming Language\C++ Primer\Chapter 2\Excercise_2.42.h"
#include <iostream> 
using std::cout, std::cin, std::endl; 


int main()
{
    //Excercise 1.9
    int value = 50;
    while (value <= 100) {
        cout << "Value is " << value << " currently" << endl;
        ++value;
    }
    //Exercise 1.10
    int value2 = 10;
    while (value2 >= 0) {
        cout << value2 << endl;
        --value2;
    }
    //Exercise 1.11
    int v1, v2, upper, lower;
    cout << "Enter two numbers: ";
    cin >> v1 >> v2;

    //If the first number is bigger, then count down to the lower second value
    if (v1 > v2) {
        while (v1 >= v2) {
            cout << v1 << endl;
            --v1;
        }
    }
    //If the second number is bigger, then count up to the higher second value 
    else {
        while (v1 <= v2) {
            cout << v1 << endl;
            ++v1;
        }
    }

    Sales_data data1, data2;
    std::cin >> data1.bookNum >> data1.units_sold >> data1.price;
    std::cin >> data2.bookNum >> data2.units_sold >> data2.price;

    data1.revenueValue = data1.price * data1.units_sold;
    data2.revenueValue = data2.price * data2.units_sold;

    //std::cout << "Book Number: " << data1.bookNum << "\nUnits Sold: " << data1.units_sold << "\nPrice: " << data1.price << "\nRevenue: " << data1.revenueValue << std::endl;
    //std::cout << "Book Number: " << data2.bookNum << "\nUnits Sold: " << data2.units_sold << "\nPrice: " << data2.price << "\nRevenue: " << data2.revenueValue << std::endl;
    
    if(data1.bookNum == data2.bookNum) {
        unsigned totalCount = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenueValue + data2.revenueValue;
        std::cout << "Book Number: " << data1.bookNum << "\nUnits Sold: " << totalCount << "\nPrice: " << data1.price << "\nRevenue: " << totalRevenue << "\nAverage Price: ";
        if(totalCount > 0){
            std::cout << totalRevenue/totalCount << std::endl;
            return 0;
        } else {
            std::cout << "N/A" << std::endl;
            return -1;
        }
    } else {
        std::cout << "Book numbers do not match" << std::endl;
        return -1;
    }



    //Excercise_1.20
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command, make sure to change directories to the cc file's exe 
    //Excercise_2.41 <infile2.41a.txt >outfile2.41a.txt
    /*
    Sales_data book;
    while (cin >> book.bookNum >> book.units_sold >> book.price) {
        book.revenue = book.units_sold * book.price;
        cout << book.bookNum << " " << book.units_sold << " " << book.revenue << " " << book.price << " " << endl;
    }
    */

   /*
    //Excercise_1.21
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_2.41 <infile2.41b.txt >outfile2.41b.txt 
    Sales_data sum, book1, book2;
    // write ISBN, number of copies sold, total revenue, and average price
    while (cin >> book1.bookNum >> book1.units_sold >> book1.price) {
        cin >> book2.bookNum >> book2.units_sold >> book2.price;
        //Check to ensure the two books have the same ISBN values before adding
        if(book1.bookNum == book2.bookNum) {
            sum.bookNum = book1.bookNum;
            sum.price = (book1.price + book2.price) / 2;
            sum.units_sold = book1.units_sold + book2.units_sold;
            sum.revenueValue = sum.units_sold * sum.price;
            cout << sum.bookNum << " " << sum.units_sold << " " << sum.revenueValue << " " << sum.price << " " << endl;
        }
        else
        {
            book1.revenueValue = book1.units_sold * book1.price;
            cout << book1.bookNum << " " << book1.units_sold << " " << book1.revenueValue << " " << book1.price << " " << endl;
            
            book2.revenueValue = book2.units_sold * book2.price;
            cout << book2.bookNum << " " << book2.units_sold << " " << book2.revenueValue << " " << book2.price << " " << endl;
        }
    }
    */

    /*
    //Exercise_1.22
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_2.41 <infile2.41c.txt >outfile2.41c.txt 
    Sales_data sum, book;
    while (cin >> book.bookNum >> book.units_sold >> book.price) {
        if(book.bookNum == sum.bookNum){
            //sum += book;
            sum.units_sold += book.units_sold;
            sum.revenueValue = sum.units_sold * sum.price;

        } else {
            //sum = book;
            sum.bookNum = book.bookNum;
            sum.units_sold = book.units_sold;
            sum.revenueValue = sum.units_sold * sum.price;
        }
    }

    sum.price = sum.revenueValue / sum.units_sold;
    cout << sum.bookNum << " " << sum.units_sold << " " << sum.revenueValue << " " << sum.price << " " << endl;
    */

   
    //Exercise_1.23
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_2.41 <infile2.41d.txt >outfile2.41d.txt 
    Sales_data currentbook, book;
    if(cin >> book.bookNum >> book.units_sold >> book.price) {
        int count = 1;
        while (cin >> currentbook.bookNum >> currentbook.units_sold >> currentbook.price) {
            //std::cout << "CB: " << currentbook.bookNo << " | BK: " << book.bookNo << std::endl;

            if(currentbook.bookNum == book.bookNum) {
                count++;
            } else {
                cout << currentbook.bookNum << " appeared " << count << " times " << endl;
                book.bookNum = currentbook.bookNum;
                book.price = currentbook.price;
                book.revenueValue = currentbook.revenueValue;
                book.units_sold = currentbook.units_sold;

                count = 1;
            }
        }
        cout << currentbook.bookNum << " appeared " << count << " times " << endl;
    }
    

    //Exercise_1.25
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (cin >> total.bookNum >> total.units_sold >> total.price) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (cin >> trans.bookNum >> trans.units_sold >> trans.price) {
        // if we’re still processing the same book
            if (total.bookNum == trans.bookNum) {
                total.revenueValue += trans.revenueValue;
                total.units_sold += trans.units_sold;
            }
            else {
            // print results for the previous book
            cout << total.bookNum << " " << total.units_sold << " " << total.revenueValue << " " << total.price << endl;
            total = trans; // total now refers to the next book
            }
        }
        cout << total.bookNum << " " << total.units_sold << " " << total.revenueValue << " " << total.price << endl; // print the last transaction
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << endl;
        return -1; // indicate failure
    }

    return 0;
}