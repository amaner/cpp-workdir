#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main()
{

    vector<int> myNums;

    // try to resize the vector to beyond the largest allowable size
    // in debugging mode, a length_error was thrown - so at the second go
    // let's try to catch it
    // myNums.resize(myNums.max_size()+1);

    try
    {
        myNums.resize(myNums.max_size()+1);
    }
    catch(const length_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    // since it was caught, we can still get additonal code to run after
    // this is the key thing here - handling errors is far more graceful
    // than letting the code just crash
    cout << "That was a yuuuuuuge vector." << endl;

    return 0;
}