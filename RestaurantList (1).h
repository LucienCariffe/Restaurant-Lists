#ifndef RESTAURANTLIST_H
#define RESTAURANTLIST_H

#include "RestaurantNode.h"

class RestaurantList
{
public:
    // Constructors
    RestaurantList();
    RestaurantList(const RestaurantList &copy);

    // Destructor
    ~RestaurantList();

    // Member functions
    void addMeal(string name, float rating, string mealname, string mealtype, float price);
    float highestPrice() const;
    void changePrice(string mealname, float newPrice);
    void userMeal();
    void print() const;

private:
    RestaurantNode *head;
};

#endif
