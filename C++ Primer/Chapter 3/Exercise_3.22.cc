/*
Exercise 3.22: Revise the loop that printed the first paragraph in text to instead
change the elements in text that correspond to the first paragraph to all uppercase.
After you’ve updated text, print its contents.
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    vector<string> text{"Sentance 1", "Sentance 2", "Sentance 3", "Sentance 4"};
    cout << "Before: " << endl;
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        cout << *it << endl;
    }

    cout << "\nAfter: " << endl;
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        string result;
        for(auto c = (*it).begin(); c != (*it).end(); c++) {
            result += toupper(*c);
        }
        *it = result;
        
        cout << *it << endl;
    }
    return 0;
}