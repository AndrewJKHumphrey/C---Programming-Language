int main()
{
    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)

    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i; // d is an int* (& of an int object is int*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)
    auto &g = ci; // g is a const int& that is bound to ci


    a = 42; //a is just an int, valid
    b = 42; //b is just an int, valid
    c = 42; //c is just an int, valid
    d = 42; //d is an int*, invalid
    e = 42; //e is a const int*, invalid
    g = 42; //g is unmodifiable, invlaid

    return 0;
}