/*
Exercise 7.8: Why does read define its Sales_data parameter as a plain reference
and print define its parameter as a reference to const?
*/

#include <iostream>
#include <vector>
#include <string> 
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

int main()
{
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (read(cin, total)) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (read(cin, total)) {
            // if we’re still processing the same book
            if (total.isbn() == trans.isbn())
                total.combine(trans); // update the running total
            else {
                // print results for the previous book
                print(cout, total);
                total = trans; // total now refers to the next book
            }
        }
        print(cout, total);
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


Sales_data add(const Sales_data &item1, const Sales_data &item2)
{
    Sales_data added = item1;
    added.combine(item2);
    return added;
} 

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNum >> item.units_sold >> price;
    item.revenue = price * item.units_sold; //This is why the Sales_data object cannot be const
    //It is being updated within the function
    return is;
};

ostream &print(ostream &os, const Sales_data &item)
{
    double price = 0;
    os << item.bookNum << item.units_sold << price << item.revenue << item.avg_price();
    //No newline since we don't want formatting headaches, let the calling code work that out

    //Within this function, all that is being done is printing off the object's values
    //const is used here to help ensure nothing is being changed prior to printing
    return os;
};

