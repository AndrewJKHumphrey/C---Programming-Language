//Syntax Errors: The programmer has made a grammatical error in the C++ language

int main ( { //Missing closing ) 
std::cout << "Read each file." << std::endl: // Used a : instead of ;
std::cout << Update master. << std::endl; //Mising " " around string literal
std::cout << "Write new master." std::endl; //Mising second set of << 
return 0 //Mising the ;
}

//Type errors: Each item of data in C++ has an associated type. T

string error = 10;
int error = "10";

//Declaration errors: Every name used in a C++ program must be declared before it is used.
int v1;
int sum = v1 + v2;

/*Error messages usually contain a line number and a brief description of what the compiler believes we have done wrong. 
It is a good practice to correct errors in the sequence they are reported. 
Often a single error can have a cascading effect and cause a compiler to report more errors than actually are present.
*/