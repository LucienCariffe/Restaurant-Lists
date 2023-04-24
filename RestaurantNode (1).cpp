#include "RestaurantNode.h"

// Default constructor
RestaurantNode::RestaurantNode() 
{
    Name = "";
    Rating = 0.0;
    MealName = "";
    MealType = "";
    Price = 0.0;
    Next = NULL;
    Prev = NULL;
}

// Constructor
RestaurantNode::RestaurantNode(string name, float rating, string mealname, string mealtype, float price) 
{
    Name = name;
    Rating = rating;
    MealName = mealname;
    MealType = mealtype;
    Price = price;
    Next = NULL;
    Prev = NULL;
}

// Copy constructor
RestaurantNode::RestaurantNode(const RestaurantNode &copy) 
{
    Name = copy.Name;
    Rating = copy.Rating;
    MealName = copy.MealName;
    MealType = copy.MealType;
    Price = copy.Price;
    Next = NULL;
    Prev = NULL;
}

// Destructor
RestaurantNode::~RestaurantNode() 
{

}

// getters
string RestaurantNode::getName() const 
{
    return Name;
}

float RestaurantNode::getRating() const 
{
    return Rating;
}

string RestaurantNode::getMealName() const 
{
    return MealName;
}

string RestaurantNode::getMealType() const 
{
    return MealType;
}

float RestaurantNode::getPrice() const 
{
    return Price;
}

RestaurantNode* RestaurantNode::getNext() const 
{
    return Next;
}

RestaurantNode* RestaurantNode::getPrev() const 
{
    return Prev;
}

// setters
void RestaurantNode::setName(string name) 
{
    Name = name;
}

void RestaurantNode::setRating(float rating) 
{
    Rating = rating;
}

void RestaurantNode::setMealName(float mealname) 
{
    MealName = mealname;
}

void RestaurantNode::setMealType(float mealtype) 
{
    MealType = mealtype;
}
void RestaurantNode::setPrice(float price)
{
    Price = price;
}

void RestaurantNode::setNext(RestaurantNode* Next) 
{
    this->Next = Next;
}

void RestaurantNode::setPrev(RestaurantNode* Prev) 
{
    this->Prev = Prev;
}

// print the information in the node
void RestaurantNode::print() const 
{
    cout << "Name: " << Name << endl;
    cout << "Rating: " << Rating << endl;
    cout << "Meal Name: " << MealName << endl;
    cout << "Meal Type: " << MealType << endl;
    cout << "Price: $" << Price << endl;
    
}
