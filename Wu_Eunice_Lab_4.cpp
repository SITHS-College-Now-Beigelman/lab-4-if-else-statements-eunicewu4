// Eunice Wu
// October 1, 2024
// In Class Lab 4: if Statements

#include <iostream>
#include <string>
using namespace std;

int main () {

char stop; // states a variable that user can input later on and use to stop the loop 

while (stop!='n') // will keep repeating the code unless user answers "n" to redo question at end
{
    string fruit;
    double grams;
    cout << "What is the name of the fruit and number of grams? "; //ask user for fruit and its grams and stores it
    cin >> fruit >> grams;

    // if and else statements that will narrow down the sugar level based on the grams given
    if (grams<10) 
        {cout << fruit << " LOW SUGAR FRUIT";} 
    else if (grams<=14) 
        {cout<< fruit << " MEDIUM SUGAR FRUIT";}
    else {cout<< fruit << " HIGH SUGAR FRUIT";}
    
    cout << "\n" << "do you want to redo? (y/n) "; //ask user if they want to redo
    cin >> stop;
}
    return 0;
}

/* 
What is the name of the fruit and number of grams? grapes 23.37
grapes HIGH SUGAR FRUIT    
do you want to redo? (y/n) y
What is the name of the fruit and number of grams? avocado .99
avocado LOW SUGAR FRUIT    
do you want to redo? (y/n) y
What is the name of the fruit and number of grams? strawberries 7
strawberries LOW SUGAR FRUIT
do you want to redo? (y/n) y
What is the name of the fruit and number of grams? grapefruit 10.6 
grapefruit MEDIUM SUGAR FRUIT
do you want to redo? (y/n) y
What is the name of the fruit and number of grams? orange 14
orange MEDIUM SUGAR FRUIT
do you want to redo? (y/n) n
*/