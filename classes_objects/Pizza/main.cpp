#include <iostream>
#include "Pizza.h"
using namespace std;

void printPizzaInfo(const Pizza& p);

int main()
{

    Pizza pizza1("Meat Lover, Large", 12, 16);
    pizza1.addTopping("sausage");
    pizza1.addTopping("pepperoni");
    pizza1.addTopping("ground beef");
    pizza1.addTopping("bacon");
    printPizzaInfo(pizza1);

    Pizza pizza2("Vegetarian, Medium", 10, 10);
    pizza2.addTopping("spinach");
    pizza2.addTopping("green peppers");
    pizza2.addTopping("olives");
    pizza2.addTopping("mushrooms");
    printPizzaInfo(pizza2);

    return 0;
}

void printPizzaInfo(const Pizza& p)
{
     cout << "The " << p.getName() << " pizza has diameter "
          << p.getDiameter() << " inches and costs $" << p.getCost() << "." << endl;
     p.printToppings();

}