#ifndef RESTAURANTNODE_H
#define RESTAURANTNODE_H


#include <iostream>
using namespace std;

class RestaurantNode
{
 public:
   // Constructors 
   RestaurantNode();
   RestaurantNode(string name, float rating, string mealname, string mealtype, float price);
   RestaurantNode(const RestaurantNode & copy);
   ~RestaurantNode();

   // getters
   string getName() const;
   float getRating() const;
   string getMealName() const;
   string getMealType() const;
   float getPrice() const;
   RestaurantNode* getNext() const;
   RestaurantNode* getPrev() const;
   
   //setters
   void setName(string name);
   void setRating(float rating);
   void setMealName(float mealname);
   void setMealType(float mealtype);
   void setPrice(float price);
   void setNext(RestaurantNode* Next);
   void setPrev(RestaurantNode* Prev);
   void print() const;

 private:
   string Name;
   float Rating;
   string MealName;
   string MealType;
   float Price;
   RestaurantNode *Next;
   RestaurantNode *Prev;
   
   
};

#endif