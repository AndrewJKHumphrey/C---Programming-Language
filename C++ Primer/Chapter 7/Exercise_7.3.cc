/*
Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p. 256) to use
these members.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // add the members of rhs into
    revenue += rhs.revenue; // the members of ‘‘this’’ object
    return *this; // return the object on which the function was called
}


int main()
{
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (std::cin >> total) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (std::cin >> trans) {
            // if we’re still processing the same book
            if (total.isbn() == trans.isbn())
            total.combine(trans); // update the running total
            else {
                // print results for the previous book
                std::cout << total << std::endl;
                total = trans; // total now refers to the next book
            }
        }
        std::cout << total << std::endl; // print the last transaction
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }
    return 0;
}

struct Sales_data {
    //Revised values
    std::string isbn() const { return bookNum; };
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    //Previous values
    std::string bookNum = "0-000-00000-X";    
    unsigned units_sold = 0;
    double revenue = 0.0;
    std::string revenueUSD = "$" + std::to_string(revenue);
};