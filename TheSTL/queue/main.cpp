#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{

    string strArray[6] = { "John", "Sally", "Bob", "Sam", "Ali", "Karen"};
    queue <string> strQueue;

    // just quickly illustrating the front to back nature of a queue
    // we push the strings onto the queue, then print them out and
    // remove each until the queue is empty
    for (string str : strArray)
    {
        strQueue.push(str); // enqueue
    }
    while (!strQueue.empty())
    {
        cout << strQueue.front() << endl;
        strQueue.pop(); // dequeue
    }


    return 0;
}