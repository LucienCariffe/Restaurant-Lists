/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "RestaurantList.h"
#include "RestaurantNode.h"
using namespace std;
char getUserChoice() 
{

    char userChoice = '\0';

    do {
        cout << "\nEnter menu selection: ";
        cin >> userChoice;
        
        if (userChoice < '1' || userChoice > '5')
            cout << "\nError: invalid input. Please try again." << endl;
    } while (userChoice < '1' || userChoice > '5');

    return userChoice;
}
int main()
{
   cout << "Welcome to the Restaurant Menu!" << endl << endl;
   cout << "1. View menu" << endl;
   cout << "2. View highest priced item" << endl;
   cout << "3. Change price of item" << endl;
   cout << "4. Find meal by name" << endl;
   cout << "5. Exit" << endl << endl;
   cout << "Please enter your choice: ";

    RestaurantList menu;
    
    menu.addMeal("Royal", 4.5, "chicken dumplings", "appetizer", 5.50 );
    menu.addMeal("Burger House", 3.75, "Burger","main", 7.50);
    menu.addMeal("Palmers", 4.65, "Chicken Fingers", "main", 8.00);
    menu.addMeal("Shake Shack", 3.75, "fries","side", 3.75);
    menu.highestPrice();
    char userchoice;
    string mealname;
    float newPrice;
   
char userChoice;

    do{
    
    userChoice = getUserChoice();
    
    switch (userChoice) 
    {
        case '1':
        menu.print();
        break;
        
        case '2':
        {
         cout << " the highest priced item is $" << menu.highestPrice();
        break;
        }
        
        case '3':
        menu.changePrice(mealname, newPrice);
        break;
        
        case '4':
        menu.userMeal();
        break;
        
        default:
        break;
    }
    }while(userChoice != '5');
    
    
    
    return 0;
}





