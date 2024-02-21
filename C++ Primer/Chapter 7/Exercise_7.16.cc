/*
    Exercise 7.16: What, if any, are the constraints on where and how often an access specifier 
    may appear inside a class definition?
    What kinds of members should be defined after a public specifier? 
    What kinds should be private?
*/

#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

class Sales_data
{   
    //What, if any, are the constraints on where and how often an access specifier may appear inside a class definition?

    // A class may contain zero or more access specifiers, and there are no restrictions on how often an access specifier may appear. 


    //What kinds of members should be defined after a public specifier? 
    //You would want constructors to be public, so objects could be constructed
    //If a value needs to be displayed, you would need a way to retrieve that property
    //Or if you are okay with outside code sources changing said property, then the property itself can be public
    //Anything you want outside code to be able to make use of, like a function that prints values
    public:
    Sales_data() = default; //I did this already in a previous exercise
    Sales_data(const string &s): bookNum(s) {}
    Sales_data(const string &s, unsigned n, double p): bookNum(s), units_sold(n), revenue(p*n) {}
    Sales_data(std::istream &is);

    //public facing ways to display the data contained within the book object
    string isbn() const { return bookNum; };
    unsigned sales() const { return units_sold; };
    double income() const { return revenue; };

    //public facing function to perform a task
    Sales_data& combine(const Sales_data&);

    //What kinds should be private?
    //Properties you want to ensure remain unchanged by outside code or hidden from outside code
    //Functions that may not need to be accessible by outside code, like a function that obtains a private identifier

    private:
    double avg_price() const { return units_sold ? revenue/units_sold : 0; };
    string bookNum = "0-000-00000-X";    
    unsigned units_sold = 0;
    double revenue = 0.0;

    istream& read(std::istream&, Sales_data&); 
};

Sales_data::Sales_data(std::istream &is) 
{
    read(is, *this);
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream& Sales_data::read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNum >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

double Sales_data::avg_price() const 
{
    if (units_sold)
    {
        return revenue/units_sold;
    }
    else
    {
        return 0;
    }
}

Sales_data add(const Sales_data &item1, const Sales_data &item2)
{
    Sales_data added = item1;
    added.combine(item2);
    return added;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.sales() << " " << item.income();
    //No newline since we don't want formatting headaches, let the calling code work that out

    //Within this function, all that is being done is printing off the object's values
    //const is used here to help ensure nothing is being changed prior to printing
    return os;
}
