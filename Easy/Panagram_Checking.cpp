/*
Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.
Examples : The quick brown fox jumps over the lazy dog ” is a Pangram [Contains all the characters from ‘a’ to ‘z’] 
“The quick brown fox jumps over the dog” is not a Pangram [Doesn’t contain all the characters from ‘a’ to ‘z’, as ‘l’, ‘z’, ‘y’ are missing]

Recommended: Please solve it on “PRACTICE ” first, before moving on to the solution. 
 
We create a mark[] array of Boolean type. We iterate through all the characters of our string and whenever we see a character we mark it. Lowercase and Uppercase are considered the same. So ‘A’ and ‘a’ are marked in index 0 and similarly ‘Z’ and ‘z’ are marked in index 25.

After iterating through all the characters we check whether all the characters are marked or not. If not then return false as this is not a pangram else return true. 
*/
#include <iostream>
#include <vector>
using namespace std;
bool checkPangram(string &str)
{
    vector<bool> mark(26,false);
    
    int index;
    
    for(int i = 0; i < str.length(); i++)
    {
        if('A' <= str[i] && str[i] <= 'Z')
        {
            index = str[i]-'A';
        }
        else if('a' <=str[i] && str[i] >= 'z')
        {
            index = str[i] - 'a';
        }
        else
        {
            continue;
        }
        mark[index] = true;
        
    }
    
    for(int i = 0; i < str.length(); i++)
    {
        if(mark[i]==false)
        {
            return false;
        }
    }
    return true;
}
int main() {
	
	string str = "The quick brown fox jumps over the"
                 " lazy dog";
 
    if (checkPangram(str) == true)
        printf(" %s is a pangram", str.c_str());
    else
        printf(" %s is not a pangram", str.c_str());
 
    return 0;
}
