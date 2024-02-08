## Alien Project

This exercise asked us to create an alien class that has three properties: height, weight, and gender. The first two are ints, while the last is a character (assumed M or F for simplicity). The class has a few basic member functions (getWeight returns weight, getHeight returns height, and getPrestige calculates and returns a prestige value, calculated as height * weight * points, where points = 3 for female aliens and 2 for male). So, the aliens with highest prestige will be tall, heavy females.

In addition, we were asked to overload the ==, !=, <, <=, >, >=, +, and = operators to allow for comparison (via prestige scores), breeding (via +), and cloning (via =).