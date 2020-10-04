#include <iostream> // allow us to write the text to the terminal from the library ## include a proporoccer to include a library of code stream is a library of code
// preprocessor directive

int main(){ // int main required in every c++ program //main function
// std short for standard is the name space for the function :: check for code inside the nae space, cout allows to write  to the terminal, << allows output from the terminal, "is a string" whole line is called the expression statement
std::cout << "You are a secret agent breaking into a secure service room";// name space, scope operator, cout allows output, expression stateme
std::cout <<  std::endl; // line break
std::cout << "Enter the correct code to continue...";  // expression statement a statement that ends with a semi colen



   const  int CodeA = 4; // const variable dont chage
     const int CodeB = 3;
     const int CodeC = 2;

// expression followed by a semi colin is a semi statement
// declaration statements  where we declare somthing

    const  int CodeSum = CodeA + CodeB + CodeC; // sum varable

      const int CodeProduct = CodeA * CodeB * CodeC; // mult variable // declariative staement
// cout= character output  << allows to write characters in terminal, also known as the insertion operator
     std::cout << std::endl; // line break
     std::cout << "+ There are three numbers in the code" << std::endl;
     std::cout <<  "+ The codes add  up to: " <<  CodeSum << std::endl;  // print sum // expression staement
     std::cout << "+ The codes Multiply to give: " << CodeProduct << std::endl; 
     //std::cout << product << std::endl;  // print product

//  character input extraction from Guess variables
     int GuessA, GuessB, GuessC; 
     std::cin >> GuessA;
     std::cin >> GuessB;
     std::cin >> GuessC;
     

     int GuessSum= GuessA + GuessB + GuessC;

     int GuessProduct = GuessA * GuessB * GuessC;

     if(GuessSum == CodeSum && GuessProduct == CodeProduct) // conditional statement
     {
std::cout << "you win!"; // ececutes if condition is met

     }
     else{
std:: cout << "you lose!"; // excutes if condition is not met

     }

// chracters like x get converted to 0
     // program will only ask for more cin if input stream is empty
     
    return 0; //    return 0= program has ru +bn successfully, compiler ignores white space. g++ triplex.cpp -o triplex, ./triplex
// return statement
 
}

// g++
// std::cin >> player game
//cin= character intput
// cout= character output
//insertiion operator= <<
//cin = character input
// >> extration operator = >>
// extract from input stream and assign to  variable: "player guess"

// == equality operator

// && logical and operator