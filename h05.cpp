/**
    @file h05.cpp
    @author your name here
    @version what semester and meeting
*/
#include <string>
using namespace std;

string STUDENT = "ilo"; // Add your name Blackboard/occ-email ID

#include "h05.h"

// Place your function definitions in this file.
string zipZap(const string& str)
{
    string result;
    size_t i = 0, len = str.length(); // 1.
    if (len < 3) return str; // 2.
    while(i < len - 2) // 3,
    {
        string word = str.substr(i, 3); // 4.
        if (word.at(0) == 'z' && word.at(2) == 'p') // 5.
        {
        result += "zp"; // 5a.
        i += 3; // 5b.
        }
        else
        {
            result += word.at(0); // 6a.
            i++; // 6b.
        }
    }
    result += str.substr(i); // 7. remaining
    return result;
}
int countCode(const string& str)
{
    int result = 0;
    // Loop through the string grabbing a 4-char substring
    for (size_t i = 0, len = str.length(); len > 3 && i < len - 3; i++)
    {
        string word = str.substr(i, 4);
        string front = word.substr(0, 2);
        string back = word.substr(3);
        if (front == "co" && back == "e") result ++;
    }
    
    return result;
}
string everyNth(const string& str, int n)
{
    string result;
    for (size_t i = 0, len = str.size(); i < len; i += n)
        result += str.at(i);

    return result;
}
bool prefixAgain(const string& str, int n)
{
    string prefix = str.substr(0, n);
    for (size_t i = 1, len = str.size(); i < len - (n - 1); i++)
    {
        string word = str.substr(i, n);
        if (word == prefix) return true;
    }
    return false;
}
