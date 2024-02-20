/*
Exercise 7.11: Add constructors to your Sales_data class and write a program to
 use each of the constructors.
*/

#include <iostream>
#include <vector>
#include <string> 
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

//Also, these are currently defined here so I can track changes I made to the classes as I go through exercises
//If this was for an actual project, this would be in a header file instead



struct Sales_data {
    //Added values
    Sales_data() = default;
    Sales_data(const std::string &s): bookNum(s) {}
    Sales_data(const std::string &s, unsigned n, double p): bookNum(s), units_sold(n), revenue(p*n) {}
    Sales_data(std::istream &is);

    //Previous values
    std::string isbn() const { return bookNum; };
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    std::string bookNum = "0-000-00000-X";    
    unsigned units_sold = 0;
    double revenue = 0.0;
    std::string revenueUSD = "$" + std::to_string(revenue);
};

struct Person {
    string name = "";
    string Name() const { return name; }; //Made these const since we are unlikely to be updating the values when seeking the info
    string address = "";
    string Address() const { return address; }; //If something needs to update the value, we would have a different function for that
   
    void updateAddress(string update) { address = update; }; 
    //This technically suffices, but it isn't a good function in this state
    //It is merely to show that we can make the address() function return a const, while still being able to update the address
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // add the members of rhs into
    revenue += rhs.revenue; // the members of ‘‘this’’ object
    return *this; // return the object on which the function was called
}

//Must have forgot to add this prior to 7.10
//Looking back, only isbn and combine were added in 7.2
//Print uses this, so that feels a bit odd
double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

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
}

ostream &print(ostream &os, const Sales_data &item)
{
    double price = 0;
    os << item.bookNum << item.units_sold << price << item.revenue << item.avg_price();
    //No newline since we don't want formatting headaches, let the calling code work that out

    //Within this function, all that is being done is printing off the object's values
    //const is used here to help ensure nothing is being changed prior to printing
    return os;
}

istream &read(istream &is, Person &person)
{
    double price = 0;
    is >> person.name >> person.address;
    return is;
}

ostream &print(ostream &os, const Person &person)
{
    double price = 0;
    os << person.name << person.address;
    return os;
}

Sales_data::Sales_data(std::istream &is) 
{
    read(is, *this);
}

int main()
{
    Sales_data book1 = Sales_data("978-3-16-148410-0"); //bookNum
    Sales_data book2 = Sales_data("978-3-16-148410-1", 1000, 10.00); //bookNum, units_sold, revenue (price * units_sold)
    Sales_data book3 = Sales_data(cin);

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