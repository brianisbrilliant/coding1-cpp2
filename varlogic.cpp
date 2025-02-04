#include <iostream>     // this sends and receives text from the console.
#include <string>       // allows us to use the string variable type
using namespace std;        //adds a lot of bloat, but keeps us from typing "std::" all the time.


// this is where the program starts running
int main() {
    cout << "This is the start of Week 3's lecture on \n";
    cout << "\tVariables and Logic!\n";

    // an if statement is a test.
    // if the test is true, the code block runs.
    // if the test is false, or NOT true, the code block does NOT run.
    // if(test) { code block }
    if (true) {
        cout << "This line of code will always run\n";
    } // end of if(true)

    if (false) {
        cout << "This line of code will never run\n";
    } // end of if(false)

    if (1 + 1 == 2) {
        cout << "Thank goodness! Math still makes sense.\n";
    } // end of if(1+1)

    if (2 + 2 == 6) {
        cout << "This is bad science.\n";
    } // end of if(2+2)

    // Let's talk about variables
    // integers, floats, doubles, characters, strings, and booleans

    // an integer is a whole number, positive or negative, between -2bil and 2bil

    // when creating a variable, specify type, name, and optionally, value. (always assign a value)
    // we are creating a new variable of the type "int", with name "playerScore",
    // with a value of 4550.
    int playerScore = 4550;

    // declaring (and defining) the variable, type int, name = playerTwoScore;
    int playerTwoScore = 0;
    // constant variables cannot change their value and must be defined at creation
    const float EARTH_GRAVITY = -9.81f;     // acceleration in meters/second  

    cout << "Player 1 score = " << playerScore << ".\n";
    cout << "Player 2 score = " << playerTwoScore << ".\n";
    cout << "Earth's gravity is " << EARTH_GRAVITY << " meters/second.\n";

    




} // this is the end of main()