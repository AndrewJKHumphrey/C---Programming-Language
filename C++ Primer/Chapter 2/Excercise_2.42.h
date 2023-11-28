#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
    std::string bookNum = "0-000-00000-X";
    double price = 0;
    unsigned units_sold = 0;
    double revenueValue = 0;
};
#endif