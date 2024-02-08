#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <map>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Dictionary {

    public:
        void addDefinition(string word, string definition);
        string getDefinition(string word) const;
        void printAll() const;
    private:
        map <string, string> dictionary;

};

void Dictionary::addDefinition(string word, string definition)
{
    // add a word-definition pair to the dictionary
    // if word is already in the dictionary, we'll simply
    // modify its definition
    auto it = dictionary.find(word);

    if (it != dictionary.end())
    {
        // already in dictiionary
        // second is the value associated with the given key
        // (and the key is stored in first)
        it->second = definition;
    }
    else
    {
        // as yet undefined
        dictionary[word] = definition;
    }
}

string Dictionary::getDefinition(string word) const
{
    // return a definition, given a word
    // if word not found, return NOT FOUND
    auto it = dictionary.find(word);

    string result = "";

    if (it != dictionary.end())
    {
        // second is the value associated with the given key
        // (and the key is stored in first)
        result = it->second;
    }
    else
    {
        result = "NOT FOUND";
    }
    return result;
}

void Dictionary::printAll() const
{
    // loop through map using iterator and print out contents
    for (auto pair : dictionary)
    {
        cout << pair.first << ": " << pair.second << endl;
    }
}

#endif