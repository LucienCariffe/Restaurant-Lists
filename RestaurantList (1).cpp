#include "RestaurantList.h"

// Constructor
RestaurantList::RestaurantList() {
    head = NULL;
}

// Copy constructor
RestaurantList::RestaurantList(const RestaurantList &copy) {
    head = NULL;
    RestaurantNode *current = copy.head;
    while (current != NULL) {
        addMeal(current->getName(), current->getRating(), current->getMealName(), current->getMealType(), current->getPrice());
        current = current->getNext();
    }
}

// Destructor
RestaurantList::~RestaurantList() {
    RestaurantNode *current = head;
    while (current != NULL) {
        RestaurantNode *temp = current;
        current = current->getNext();
        delete temp;
    }
}

// Add a meal (RestaurantNode) to the linked list
void RestaurantList::addMeal(string name, float rating, string mealname, string mealtype, float price)
{
   // Insert new node
   RestaurantNode *ptr = new RestaurantNode(name,rating,mealname,mealtype,price);
   ptr->setNext(head);
   head = ptr;
}






// Search the linked list for the most expensive meal
float RestaurantList::highestPrice() const {
    if (head == NULL) {
        return 0.0;
    } else {
        float maxPrice = head->getPrice();
        RestaurantNode *current = head;
        while (current != NULL) {
            if (current->getPrice() > maxPrice) {
                maxPrice = current->getPrice();
            }
            current = current->getNext();
        }
        return maxPrice;
    }
}

void RestaurantList::changePrice(string mealname, float newPrice) {
    cout << "input which meal you would like to change >> ";
    cin >> mealname;
    cout << "input new price please >> ";
    cin >> newPrice;
    RestaurantNode *current = head;
    bool found = false;
    while (current != NULL) {
        if (current->getMealName() == mealname) {
            current->setPrice(newPrice);
            cout << "Price for " << mealname << " has been updated to $" << newPrice << endl;
            found = true;
        }
        current = current->getNext();
    }
    if (!found) {
        cout << "Meal not found in the list." << endl;
    }
}
void RestaurantList::userMeal() {
    string name, mealname, mealtype;
    float rating, price;

    cout << "Enter restaurant name: ";
    cin >> name;
    cout << "Enter rating: ";
    cin >> rating;
    cout << "Enter meal name: ";
    cin >> mealname;
    cout << "Enter meal type: ";
    cin >> mealtype;
    cout << "Enter price: ";
    cin >> price;

    RestaurantNode *newNode = new RestaurantNode(name, rating, mealname, mealtype, price);

    if (head == NULL) {
        head = newNode;
    } else {
        RestaurantNode *current = head;
        while (current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(newNode);
        newNode->setPrev(current);
    }

    cout << "Meal added successfully!\n";
}

// Print all the nodes that are in the linked list
void RestaurantList::print() const {
    RestaurantNode *current = head;
    while (current != NULL) {
        current->print();
        current = current->getNext();
    }
}
