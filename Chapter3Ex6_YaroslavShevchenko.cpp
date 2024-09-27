/*Tite Chapter 3 Exercise 6 - Ingredient Adjuster
File name:Chapter3Exe6_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 09/27/2024
Requirements:

Ingredient Adjuster
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar

• 1 cup of butter

• 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. 
Write a program that asks the user how many cookies he or she wants to make, then displays the number 
of cups of each ingredient needed for the specified number of cookies.


*/

#include <iostream>
using namespace std;

int main()
{
    //To calculate the ingredients needed to produce 1 single cookie
    double sugar = 1.5/48.0;
    double butter = 1.0/48.0;
    double flour = 2.75/48.0;

    //User input
    double amountOfCookies;
    
    //The Output that user will recieve
    double sugarCups;
    double butterCups;
    double flourCups;

    cout << "Enter the number of cookies you would like to produce: ";
    cin >> amountOfCookies;

    sugarCups = sugar * amountOfCookies;
    butterCups = butter * amountOfCookies;
    flourCups = flour * amountOfCookies;

    cout << "In order to make " << amountOfCookies << " cookies, you will need to have:\n" << sugarCups << " cups of sugar\n" <<
        butterCups << " cups of butter\n" << flourCups << " cups of flour";
    
}

