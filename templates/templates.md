# Templates

* **Function templates**
    * Generic functions that can work with a variety of data types
    * Developer writes a placeholder, and the compiler generates the specific version needed
    * Builds on advantages of function overloading (which requires writing multiple versions of the same function)
        * This reduces effort and increases reusability when the same operations and logic are involved

* **Class templates**
    * Allows the entire class to handle different types
    * You must keep the full implementation inside header file (previously we had implementation separate from declaration)
        * It can be in the class declaration
        * It could also use scope resolution syntax below the class declaration as an alternative