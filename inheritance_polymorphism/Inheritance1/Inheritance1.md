# Inheritance, Parts 1 & 2 (together)

Earlier, we listed the three primary principles of OOP:
    * Encapsulation
    * Inheritance
    * Polymorphism

So far, we've only discussed the first in any detail. This section will deal with the second.

* Inheritance
    * A form of software reuse
    * Methods and data are inherited from a **base class** by **derived class(es)**
* The **protected** access specifier
    * Between public and private
    * A derived class has access to protected members of the base class
        * As if they were public
    * But classes and functions outside of the inheritance hierarchy have no access to protected members
        * As if they were private
    * protected is one of (at least?) three access specifiers: private, protected, public

In the first portion of this section, we create a base class Animal. In the second portion, we will create a derived class.

Base class: Animal

| **Animal** |
| ---------- |
| - name : string |
| - weight : double |
| + Animal(name : string, weight : double) |
| + getName() : string |
| + setName(name : string) : void |
| + getWeight() : double |
| + setWeight(weight : double) : void |
| + makeNoise() : string |

Derived class: Dog

| **Dog : Animal** |
| ---------------- |
| + Dog(name : string, weight : double, breed : string) |
| + getBreed() : string |
| + digHole() : void |
| + chaseCat() : void |