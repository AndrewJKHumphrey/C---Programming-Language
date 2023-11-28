#include <iostream>
#include <string>

int main() 
{
    return 0;
}

struct Sales_data {
    std::string bookNum = "0-000-00000-X";
    unsigned units_sold = 0;
    double revenueValue = 0.0;
    std::string revenueUSD = "$" + std::to_string(revenueValue);
};
