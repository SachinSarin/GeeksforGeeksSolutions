/*
Missing characters to make a string Pangram
Difficulty Level : Basic
Last Updated : 14 Jun, 2021
Pangram is a sentence containing every letter in the English alphabet. Given a string, find all characters that are missing from the string, i.e., the characters that can make the string a Pangram. We need to print output in alphabetic order.

Examples: 

Input : welcome to geeksforgeeks
Output : abdhijnpquvxyz

Input : The quick brown fox jumps
Output : adglvyz
*/
#include <iostream>
#include <vector>
using namespace std;
string checkPangram(string &str)
{
    bool Present[26] = {false};
    
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            Present[str[i]-'A'] = true;
        }
        else if(str[i] >= 'a'&& str[i] <= 'z')
        {
            Present[str[i]-'a'] = true;
        }
    }
    string res = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(Present[i]==false)
        {
            res.push_back((char)(i+'a'));
        }
    }
    return res;
}
int main() {
	
	string str = "The quick brown fox jumps "
                 "over the dog";
 
    cout<<checkPangram(str)<<endl;
    
 
    return 0;
}
