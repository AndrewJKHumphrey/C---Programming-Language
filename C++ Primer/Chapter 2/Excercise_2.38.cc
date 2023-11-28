
int test = 42;

//auto requires the variable to be initialized to determine the type
auto i = test;

//decltype on the other hand does not require the variable to be intiialized to determine the type
decltype(test) j1;
decltype(test) j2 = 23;

//decltype can also make something a reference type by enclosing the variable in a second set of ()
decltype((test)) k;

//It can also be done using an expression, which then requires the value to be initialized unlike the above method
decltype(i = test) l = test; 

//auto i and decltype l both use the assignment of = test, but i is an int while l is a int &
