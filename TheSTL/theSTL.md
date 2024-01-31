## The STL part 1

* The **Standard Template Library**
    * Also sometimes just called the C++ Standard Library
* Three broad categories of data and functions
    * Containers
        * For storage and organization of data
        * Majority of these are **sequence containers** or **associative containers**
    * Iterators
        * Help move through the containers and find elements
    * Algorithms
        * Function templates - a wide variety of ways to perform operations on containers

* STL Containers
    * Sequence
        * **name** - < header file > - description
        * **array** - < array > - fixed size data structure, similar to built-in array
        * **vector** - < vector > - expandable array
        * **deque** - < deque > - double-ended queue - like a vector, but elements are intended to be added and removed to/from the back and front
        * **forward list** - < forward_list > - a singly linked list - data can be removed or inserted anywhere in the structure
        * **list** - < list > - a doubly linked list - similar to forward_list, but takes up more memory per element while allowing quicker access of some elements, and easier iteration
    * Associative 
        * **map** - < map > - known as a dictionary in some languages, maps keys to elements (key, value pairs) - duplicates not allowed
        * **multimap** - < map > - same as map but allows duplicates
        * **set** - < set > - stores a sorted set of values - duplciates not allowed
        * **multiset** - < set > - same as set but allows duplicates
        * **unordered_set** - < unordered_set > - same as set but not sorted
        * **unordered_map** - < unordered_map > - same as map but not sorted
        * **unordered_multimap** - < unordered_map > - same as multimap but not sorted
    * Adapters
        * **stack** - < stack > - used to adapt containers, such as the deque, to provide LIFO access
        * **queue** - < queue > - adapts the deque to provide FIFO access
        * **priority_queue** - < queue > - adapts the vector by default - like a queue, but retrieves the element with the greatest value, always
