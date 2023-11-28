
int main() 
{
    const int v2 = 0; //top level
    int v1 = v2; //Because we can ignore it to copy const v2 to non const v1
    int *p1 = &v1, &r1 = v1; //v1 does not have const, nor do the reference and pointer

    int i = 0;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; 
    //p2 is low level due to const int
    //p3 is low and top due to const int *const
    //low level since reference
    return 0;
}