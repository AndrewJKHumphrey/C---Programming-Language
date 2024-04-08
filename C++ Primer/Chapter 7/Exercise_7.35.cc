/*
   Exercise 7.35: Explain the following code, indicating which definition of Type or
    initVal is used for each use of those names. Say how you would fix any errors.
    typedef string Type;
    Type initVal();
    class Exercise {
        public:
        typedef double Type;
        Type setVal(Type);
        Type initVal();
        private:
        int val;
    };
    Type Exercise::setVal(Type parm) {
        val = parm + initVal();
        return val;
    }

*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

typedef double Type; //This needs to be seen by the rest of the code
class Exercise {
    public:
    //typedef double Type;
    Type setVal(Type);
    Type initVal();
    Type displayVal();
    private:
    int val;
};

//This should return a value of some sort, so added a function to prevent errors
Type Exercise::initVal() {
    return 100;
};
Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
};
Type Exercise::displayVal()
{
    return val;
}

int main()
{
    Exercise ex = Exercise();
    cout << ex.initVal() << endl; //100
    ex.setVal(200);
    cout << ex.displayVal() << endl; //300

    return 0;
}