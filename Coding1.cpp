// Coding1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// this is a comment
// two forward slashes, and the compiler ignores everything after it.
// #3 make a function that accepts two integers and returns their difference. use main() to call the function send the result to cout.
// #2 in main(), ask the user what their name is, and then say "hello <name>"
// #1 have the computer greet both of you by name.

// WELL DONE!!! SECOND TEST
// #3 Overload the function (by creating a second function) to also accept floats
// #2 use an if statement to check to see if their name was either of you, if so, say "hello creator!"
// #1 create some variables to tell a story.

// WELL DONE! THIRD TEST
// #3 create a function that accepts a string, and returns a string with spaces added between each letter.
    // ask the user for input (what word), run their input through the function, and display the result from main()
    // word --> w o r d
// #2 create an array (or vector) of names and use a for loop to display each of them
// #1 use cin to ask the player what their name is.

// break after this!!



#include <iostream>     // this allows us to send text to and from the console.
#include <string>
using namespace std;    // this allows (tabs are great) us to NOT type "std::" all the GD time.

// for #3
string aestheticer(string input) {
    cout << "Starting aest func.\n";
    string temp = "";
    for (int i = 0; i < input.length(); i++) {
        temp += (input[i] + " ");
        cout << temp << ".\n";
    }
    return temp;
}


int main()              // this is where our program starts. 
{
    bool debug = true;
    if (debug) cout << "starting main.\n";
;    
    // variables are nicknames for data. 
    // variable type is string, variable name is "name", variable value is "Jinx".
    string name = "Jinx";       // from arcane
    // variable type is integer, variable name is health, variable value is 45.
    int health = 45;                // range of 0-100

    cout << "My name is " << name << ".\n";     // #1 task, add "I have <health> health.\n"
    // start here.
    cout << "My health is " << health << ".\n";
    cout << aestheticer("word");

    cout << "Hello World!\n";       // this line sends text to the console.
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
