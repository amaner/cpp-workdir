# Rethrowing errors

In this exercise we were asked to create a program that does the following:

- main() takes in an integer argument and passes it on to
    - doSomething(), which then passes the argument on to
        - processPositive(), which does the following:
            - if the number is in the range [0, 100), print a positive message, hand control back to doSomething, which then passes control back to main, which prints a positive message
            - if the number is negative, throw an invalid_argument error, which
                - is caught by doSomething, which then
                - rethrows the error back to main, which catches it and prints an error message
            - if the number is > 100, throw an out_of_range error, which 
                - is caught by doSomething, which then
                - rethrows the error back to main, which catches it and prints an error message