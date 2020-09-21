#include <iostream> // allow us to write the text to the terminal from the library ## include a proporoccer to include a library of code stream is a library of code
// preprocessor directive

int main(){ // int main required in every c++ program //main function
// std short for standard is the name space for the function :: check for code inside the nae space, cout allows to write  to the terminal, << allows output from the terminal, "is a string" whole line is called the expression statement
std::cout << "You are a secret agent breaking into a secure service room";// name space, scope operator, cout allows output, expression stateme
std::cout <<  std::endl; // line break
std::cout << "Enter the correct code to continue...";  // expression statement a statement that ends with a semi colen



   const  int a = 4; // const variable dont chage
     const int b = 3;
     const int c = 2;

// expression followed by a semi colin is a semi statement
// declaration statements  where we declare somthing

    const  int sum = a+ b +c; // sum varable

      const int product = a*b*c; // mult variable // declariative staement

     std::cout << std::endl; // line break
     std::cout <<  sum << std::endl;  // print sum // expression staement
     std::cout << product << std::endl;  // print product

     
     
    return 0; //    return 0= program has ru +bn successfully, compiler ignores white space. g++ triplex.cpp -o triplex, ./triplex
// return statement

 
}

// g++