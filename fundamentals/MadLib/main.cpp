#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string adj1, adj2, adj3;
    string occu1, occu2;
    string place;
    string clothing;
    string hobby;
    string girlName, boyName, manName;

    cout << "Please enter an adjective " << endl;
    getline(cin, adj1);
    cout << "Please enter a girl's name " << endl;
    getline(cin, girlName);
    cout << "Please enter another adjective " << endl;
    getline(cin, adj2);
    cout << "Please enter an occupation " << endl;
    getline(cin, occu1);
    cout << "Please enter a place name " << endl;
    getline(cin, place);
    cout << "Please enter an item of clothing in plural form " << endl;
    getline(cin, clothing);
    cout << "Please enter a hobby " << endl;
    getline(cin, hobby);
    cout << "Please enter another adjective " << endl;
    getline(cin, adj3);
    cout << "Please enter another occupation " << endl;
    getline(cin, occu2);
    cout << "Please enter a boy's name " << endl;
    getline(cin, boyName);
    cout << "Please enter a man's name " << endl;
    getline(cin, manName);
    
    cout << "There once was a " << adj1 << " girl named " << girlName
         << " who was a " << adj2 << " " << occu1 << " in the Kingdom of " 
         << place << ". She loved to wear " << clothing << " and " << hobby
         << ". She wanted to marry the " << adj3 << " " << occu2 << " named "
         << boyName << " but her father, King " << manName << " forbade her "
         << "from seeing him." << endl;



    return 0;
}