## stack

A stack is LIFO - the newest items are pulled off using pop and items are always pushed to the top (best to think of a stack as, well, a stack of items. You can only pull off the top-most, and there's only one potential place for you to add new items: the top).

For this example, we will use the stack to help us determine if a given string is a palindrome. We store the reverse of the given string in a stack, then compare the two, char by char. We move through the string left to right, and the stack back to front (really, top to bottom).