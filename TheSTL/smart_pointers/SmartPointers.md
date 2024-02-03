## Smart Pointers

* **Smart Pointers** (also called **Managed Pointers**)
    * Introduced in C++ 11
    * Syntactically similar to raw pointers
    * Manage their own memory (no need to use delete)
    * included in the < memory > library
* Three types
    * **unique_ptr**: sole owner of allocated memory
        * No two unique_ptrs can point to the same allocated memory
        * Most common type
    * **shared_ptr**: shares ownership of allocated memory
        * Multiple shared_ptrs can point to the same allocated memory
        * A count is maintained - when it reaches 0, the memory is deallocated
    * **weak_ptr**: doesn't own memory to which it points
        * Used in special circumstances