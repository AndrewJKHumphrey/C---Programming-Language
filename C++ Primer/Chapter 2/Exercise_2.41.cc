#include <iostream>

struct Sales_data {
    std::string bookNo = "0-000-00000-X";
    double price = Price(units_sold, revenue);
    unsigned units_sold = 0;
    double revenue = 0;

    double Sales_data::Price(unsigned units, double revenue) {
        double avgPrice = revenue / units;
        return avgPrice;
    }
};


int main()
{
    //Excercise_1.20
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command, make sure to change directories to the cc file's exe 
    //Excercise_2.41 <infile2.41a.txt >outfile2.41a.txt
    /*
    Sales_data book;
    while (std::cin >> book.bookNo >> book.units_sold >> book.price) {
        book.revenue = book.units_sold * book.price;
        std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << book.price << " " << std::endl;
    }
    */

    /*
    //Excercise_1.21
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_2.41 <infile2.41b.txt >outfile2.41b.txt 
    Sales_data sum, book1, book2;
    // write ISBN, number of copies sold, total revenue, and average price
    while (std::cin >> book1.bookNo >> book1.units_sold >> book1.price) {
        std::cin >> book2.bookNo >> book2.units_sold >> book2.price;
        //Check to ensure the two books have the same ISBN values before adding
        if(book1.bookNo == book2.bookNo) {
            sum.bookNo = book1.bookNo;
            sum.price = (book1.price + book2.price) / 2;
            sum.units_sold = book1.units_sold + book2.units_sold;
            sum.revenue = sum.units_sold * sum.price;
            std::cout << sum.bookNo << " " << sum.units_sold << " " << sum.revenue << " " << sum.price << " " << std::endl;
        }
        else
        {
            book1.revenue = book1.units_sold * book1.price;
            std::cout << book1.bookNo << " " << book1.units_sold << " " << book1.revenue << " " << book1.price << " " << std::endl;
            
            book2.revenue = book2.units_sold * book2.price;
            std::cout << book2.bookNo << " " << book2.units_sold << " " << book2.revenue << " " << book2.price << " " << std::endl;
        }
    }
    */

    /*
    //Exercise_1.22
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_2.41 <infile2.41c.txt >outfile2.41c.txt 
    Sales_data sum, book;
    while (std::cin >> book.bookNo >> book.units_sold >> book.price) {
        if(book.bookNo == sum.bookNo){
            //sum += book;
            sum.units_sold += book.units_sold;
            sum.revenue = sum.units_sold * sum.price;

        } else {
            //sum = book;
            sum.bookNo = book.bookNo;
            sum.units_sold = book.units_sold;
            sum.revenue = sum.units_sold * sum.price;
        }
    }

    sum.price = sum.revenue / sum.units_sold;
    std::cout << sum.bookNo << " " << sum.units_sold << " " << sum.revenue << " " << sum.price << " " << std::endl;
    */

   /*
    //Exercise_1.23
    //You need to make an infile.txt with the trasnaction info for a book in the format 0-201-70353-X 4 99.96 24.99
    //Then run the below command
    //Exercise_2.41 <infile2.41d.txt >outfile2.41d.txt 
    Sales_data currentbook, book;
    if(std::cin >> book.bookNo >> book.units_sold >> book.price) {
        int count = 1;
        while (std::cin >> currentbook.bookNo >> currentbook.units_sold >> currentbook.price) {
            //std::cout << "CB: " << currentbook.bookNo << " | BK: " << book.bookNo << std::endl;

            if(currentbook.bookNo == book.bookNo) {
                count++;
            } else {
                std::cout << currentbook.bookNo << " appeared " << count << " times " << std::endl;
                book.bookNo = currentbook.bookNo;
                book.price = currentbook.price;
                book.revenue = currentbook.revenue;
                book.units_sold = currentbook.units_sold;

                count = 1;
            }
        }
        std::cout << currentbook.bookNo << " appeared " << count << " times " << std::endl;
    }
    */

   //Exercise_1.25
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (std::cin >> total.bookNo >> total.units_sold >> total.price) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.price) {
        // if we’re still processing the same book
            if (total.bookNo == trans.bookNo) {
                total.revenue += trans.revenue;
                total.units_sold += trans.units_sold;
            }
            else {
            // print results for the previous book
            std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.price << std::endl;
            total = trans; // total now refers to the next book
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.price << std::endl; // print the last transaction
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }

    return 0;
}