/*
Exercise 7.15: Add appropriate constructors to your Person class.
*/

#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

class Sales_data
{
    /*     
    These would private: by default within a class due to being defined before the public specifier
    But I am going to put the private: anyways to make things more readable
    double avg_price() const { return units_sold ? revenue/units_sold : 0; };
    string bookNum = "0-000-00000-X";    
    unsigned units_sold = 0;
    double revenue = 0.0;

    istream& read(std::istream&, Sales_data&); 
    */

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

    private:
    double avg_price() const { return units_sold ? revenue/units_sold : 0; };
    string bookNum = "0-000-00000-X";    
    unsigned units_sold = 0;
    double revenue = 0.0;

    istream& read(std::istream&, Sales_data&); 
};

struct Person {
    Person() = default; //I did this already in a previous exercise
    Person(const string &n): name(n) {}
    Person(const string &n, string &a): name(n), address(a) {}
    Person(std::istream &is);

    string name = "";
    string Name() const { return name; };
    string address = "";
    string Address() const { return address; };
    void updateAddress(string update) { address = update; };

    istream& read(std::istream&, Person&);
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

Person::Person(std::istream &is) 
{
    read(is, *this);
}

istream& Person::read(istream &is, Person &person)
{
    double price = 0;
    is >> person.name >> person.address;
    return is;
}

ostream& print(ostream &os, const Person &person)
{
    double price = 0;
    os << person.name << person.address;
    return os;
}

int main()
{
    cout << "STARTING PROGRAM" << "\n";
    cout << "READING FIRST TRANSACTION" << "\n";
    Sales_data total = Sales_data(cin); // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    cout << "READ FIRST TRANSACTION" << "\n";
    if (!total.isbn().empty()) {
        cout << "READING THE REST" << "\n";
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (!total.isbn().empty()) {
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