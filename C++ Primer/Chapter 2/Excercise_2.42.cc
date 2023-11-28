#include <iostream>
#include <string>
#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"

int main() 
{
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
}


