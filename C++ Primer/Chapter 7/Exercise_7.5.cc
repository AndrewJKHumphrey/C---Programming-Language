/*
Exercise 7.5: Provide operations in your Person class to return the name and address. 
Should these functions be const? Explain your choice.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

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

//Also, these are currently defined here so I can track changes I made to the classes as I go through exercises
//If this was for an actual project, this would be in a header file instead
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // add the members of rhs into
    revenue += rhs.revenue; // the members of ‘‘this’’ object
    return *this; // return the object on which the function was called
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

struct Person {
    string name = "";
    std::string name() const { return name; }; //Made these const since we are unlikely to be updating the values when seeking the info
    string address = "";
    std::string address() const { return address; }; //If something needs to update the value, we would have a different function for that
   
    void updateAddress(string update) { address = update; }; 
    //This technically suffices, but it isn't a good function in this state
    //It is merely to show that we can make the address() function return a const, while still being able to update the address
};