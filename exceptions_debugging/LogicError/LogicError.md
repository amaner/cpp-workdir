# Logic Error

Obviously, the best way to fix a logic error is to simply not make a logic error. But, in a critical application, we need to make sure we think defensively and endeavor to write our code so that it handles errors as gracefully as possible.

In this example, we were asked to generate a logic_error by trying to resize a vector to beyond its allowable limit. In the first go, it crashed and exited. By handling the error, the code was able to continue.