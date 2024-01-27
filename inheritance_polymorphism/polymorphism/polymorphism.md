# Polymorphism and Late Binding

* **Polymorphism**
    * The third of the primary principles of OOP
    * Best demonstrated with pointers and dynamic memory
    * Heavily related to inheritance

We will continue with the Animal & Dog code from the inheritance section, but will modify to illustrate the concept of polymorphism. In this case we make Animal a virtual class (i.e., we can no longer instantiate Animal objects, but we can use Animal's properties and methods in creating other animals) and use pure virtual functions, prototyped in the base class but implemented in the derived classes.

In addition, the instructor assigned as a separate assignment a further extension: adding a derived Cat class to the mix.