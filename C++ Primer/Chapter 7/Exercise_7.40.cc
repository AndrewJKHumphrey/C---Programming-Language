/*
I may come back to this and attempt each abstraction, starting with book for now

 Exercise 7.40: Choose one of the following abstractions (or an abstraction of your
 own choosing). Determine what data are needed in the class. Provide an appropriate
 set of constructors. Explain your decisions.
 (a) Book 
 (d) Vehicle
 (b) Date
 (e) Object
 (c) Employee
 (f) Tree
*/

#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

class Book{
    friend ostream &print(ostream&, const Book&);


    public:
    Book() = default; //Default
    Book(string auth, int pc, string isbn): author(auth), pageCount(pc), ISBN(isbn) {} //General info
    Book(string auth, int pc, string isbn, bool pb, bool hc, bool fc): 
        author(auth), pageCount(pc), ISBN(isbn), paperBack(pb), hardCover(hc), fullColor(fc) {} //General Info + Options
    Book(string auth, int pc, string isbn, bool d, bool p): author(auth), pageCount(pc), ISBN(isbn), digital(d), physical(p) {} //General Info + Media type
    Book(string auth, int pc, string isbn): author(auth), pageCount(pc), ISBN(isbn) {} //General info
    Book(string auth, int pc, string isbn, bool a, bool b): author(auth), pageCount(pc), ISBN(isbn), audio(a), braille(b) {} //General info + Accessability
    
    private:
    //Basic book information 
    string author = "John Doe";
    int pageCount = 0;
    string ISBN = "0-000-00000-X";

    //What options does the book come in
    bool paperBack = false;
    bool hardCover = false;
    bool fullColor = false;

    //Type of media the book is found in
    bool digital = false;
    bool physical = false;

    //Accessibility formats
    bool audio = false;
    bool braille = false;
};