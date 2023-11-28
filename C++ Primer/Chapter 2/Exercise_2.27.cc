#include <iostream>

int main()
{
    //int i = -1, &r = 0; //Invalid since the reference is not a const, so it must reference a value/variable. Replace the 0 with i, it would be valid
    
    int i2 = 1;
    int *const p2 = &i2; //Valid as long as the types match between i2 and p2. p2 will always point to vaalue i2

    const int i3 = -1, &r3 = 0; //Valid since the reference is now a const

    const int i4 = 1;
    const int *const p4 = &i4; //Valid even if i3 were to be a non-constant value. p4 is a constant pointer that points to a const object

    int i5 = 1;
    const int *p5 = &i5; //Valid, p5 is a pointer that points to a const int

    //const int &const r6; //Reference must be initialized with a value

    const int i7 = i3, &r7 = i2; //Valid
    
    return 0;
}
