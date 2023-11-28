
int main() 
{
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;

    int i = 0; //Had to add i 
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    r1 = v2; //Valid
    //p1 = p2; //p2 is a low level const, so p1 cannot hold p2 
    p2 = p1; //p2 is a low level const, but can hold the non const p1
    //p1 = p3; //p1 is non const and thus cannot hold the low level p3
    p2 = p3; //p2 and p3 share low level 
    
    return 0;
}