#include <iostream> // allow us to write the text to the terminal from the library ## include a proporoccer to include a library of code stream is a library of code
// preprocessor directive

void PrintIntroduction(  int Difficulty)  // int difficulty is the parameter so the variable can have scope
// | \n new line sequence in strings, a function is a group of staements that is named  and performs a task, must a  stepcify a return type in a function , void to return no data.
{
std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty; // scope
std::cout << " secure server room...\nEnter the correct code to continue... \n\n";


}
// return a boolan value
bool PlayGame(int Difficulty)//  void retrn type //name PlayGame // void means it will return no data functions are a group of staements that perform a task with a name
{
  PrintIntroduction( Difficulty); // scope starts out defined as an int

//std::cout << "You are a secret agent breaking into a secure service room...\n";// name space, scope operator, cout allows output, expression stateme
//std::cout <<  std::endl; // line break
//std::cout << "Enter the correct code to continue...\n\n";  // expression statement a statement that ends with a semi colen



   const  int CodeA = 4; // const variable dont chage
     const int CodeB = 3;
     const int CodeC = 2;

// expression followed by a semi colin is a semi statement
// declaration statements  where we declare somthing

    const  int CodeSum = CodeA + CodeB + CodeC; // sum varable

      const int CodeProduct = CodeA * CodeB * CodeC; // mult variable // declariative staement
// cout= character output  << allows to write characters in terminal, also known as the insertion operator
     std::cout << std::endl; // line break
     std::cout << "+ There are three numbers in the code"; //<< std::endl; only use \\n within a string and not in a variable name
     std::cout <<  "\n+ The codes add  up to: " <<  CodeSum; //<< std::endl;  // print sum // expression staement
     std::cout << "\n+ The codes Multiply to give: " << CodeProduct << std::endl; 
     //std::cout << product << std::endl;  // print product

//  character input extraction from Guess variables

// store player guess
     int GuessA, GuessB, GuessC; 
     std::cin >> GuessA >> GuessB >> GuessC;
     
     

     int GuessSum= GuessA + GuessB + GuessC;

     int GuessProduct = GuessA * GuessB * GuessC;

     // check if the player guess is correct

     if(GuessSum == CodeSum && GuessProduct == CodeProduct) // conditional statement
     {
std::cout << "\n you win!"; // ececutes if condition is met
return true; // no void must contain a retur statement   for all exist paths of the function
     }
     else{
std:: cout << "\n you lose!"; // excutes if condition is not met
return false;

     }


}



int main(){ // int main required in every c++ program //main function
// std short for standard is the name space for the function :: check for code inside the nae space, cout allows to write  to the terminal, << allows output from the terminal, "is a string" whole line is called the expression statement
int LevelDifficulty = 1; //intialize outside while loop 
// chracters like x get converted to 0
     // program will only ask for more cin if input stream is empty
     while(true){ // while the condition is true, execute the function
        bool bLevelComplete= PlayGame(LevelDifficulty); // if the player has completed the level
       std::cin.clear();// clear any errors  //  ignres the erro to prevent endless loop
       std::cin.ignore();// discards the buffer // helps prevent endless loop if a wrong character is is put in

       if (bLevelComplete){
       //increase level difficultu
       ++LevelDifficulty; //increment variable
         
       }
       
     }

     
     
    return 0; //    return 0= program has ru +bn successfully, compiler ignores white space. g++ triplex.cpp -o triplex, ./triplex
// return statement
 
}
// think about where you declare vairables because of scope
// g++
// std::cin >> player game
//cin= character intput
// cout= character output
//insertiion operator= <<
//cin = character input
// >> extration operator = >>
// extract from input stream and assign to  variable: "player guess"
// passing values is passing arguments
// == equality operator
// functions can have parameteors whch get passed s arguments
// && logical and operator
// things must be defined in the  scope