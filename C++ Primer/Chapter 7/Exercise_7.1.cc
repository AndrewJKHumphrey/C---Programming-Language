/*
Exercise 7.1: Write a version of the transaction-processing program from § 1.6 (p. 24)
using the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).

1.6 exercise mentioned above is Exercise 1.25, while the Sales_data class was made for Exercise 2.40
*/

#include <iostream>
#include <vector>
#include <string> 

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
            total += trans; // update the running total
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

//I believe all that we need to do for 7.1 is update the Main, not the class, 7.1.2 seems to go over updating the class
struct Sales_data {
    std::string bookNum = "0-000-00000-X";
    unsigned units_sold = 0;
    double revenueValue = 0.0;
    std::string revenueUSD = "$" + std::to_string(revenueValue);
};