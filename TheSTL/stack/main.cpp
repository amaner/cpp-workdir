#include <iostream>
#include <stack>
#include <string>
using namespace std;

// store the reverse of a given string
void storeReverse(string origStr, stack<char>& reverseStack);
// check to see if a given string is a palindrome
bool isPalindrome(string origStr);
// print out the results
void printResult(string origStr);

int main()
{

    string strArray[5] = { "racecar", "fudge", "civic", "bob", "dogs"};

    for (string str : strArray)
    {
        printResult(str);
        cout << endl;
    }

    return 0;
} 

void storeReverse(string origStr, stack<char>& reverseStack)
{
    // loop left-to-right through the original string 
    // and store each character in a stack, which is now accessible
    // "top-to-bottom" (LIFO) - i think of the string as being 
    // rotated -90* 
    for (char c : origStr)
    {
        reverseStack.push(c);
    }
}

bool isPalindrome(string origStr)
{
    // a stack in which to store the reverse of the passed string
    stack<char> reverseStack;
    // store its reverse
    storeReverse(origStr, reverseStack);

    bool result = true; // we assume from the start we have a palindrome

    // only proceed if the lengths are equal
    if (origStr.length() == reverseStack.size())
    {
        // loop left-to-right through original string
        for (char c : origStr)
        {
            // set the current comparitor char to be the 
            // current top of the stack (current "last" element)
            char currChar = reverseStack.top();
            // if the two chars are not equal
            if (currChar != c)
            {
                // then we can't have a palindrome - order must
                // be same, back-to-front and front-to-back
                result = false;
                break;
            }
            // pull off top element of the stack, revealing the next
            reverseStack.pop();
        }
    }
    else // lengths weren't equal so orignal can't be a palindrome
    {
        result = false;
    }
    return result;
}

void printResult(string origStr)
{
    cout << "Is " << origStr << " a palindrome?     "
        << boolalpha << isPalindrome(origStr) << endl;
}