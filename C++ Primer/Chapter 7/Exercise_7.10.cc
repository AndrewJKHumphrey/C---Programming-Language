/*
Exercise 7.10: What does the condition in the following if statement do?
if (read(read(cin, data1), data2))
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


int main()
{
    Person data1;
    Person data2;
    if (read(read(cin, data1), data2)) {
        cout << "TESTING" << endl;
    } else {
        cout << "testing" << endl;
    }

    //At a glance it looks like it passes cin to read into the first object
    //Then returns an istream to be reused for the second object
    //Since read returns a istream object, it satisfies the parameter type requirement
    //This it is likely checking if both objects are not null

    /*
    Input
    Name1
    Address1
    Name2
    Address2
    Output
    TESTING

    Input
    Name1
    Address1
    ^Z
    Output
    testing
    */
    return 0;
}


