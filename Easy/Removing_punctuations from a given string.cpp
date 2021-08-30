/*
Given a string, remove the punctuation from the string if the given character is a punctuation character as classified by the current C locale. The default C locale classifies these characters as punctuation: 

!"#$%&'()*+,-./:;?@[\]^_`{|}~ 
Examples: 
 

Input : %welcome' to @geeksforgeek<s
Output : welcome to geeksforgeeks

Input : Hello!!!, he said ---and went.
Output : Hello he said and went
*/
#include <iostream>
using namespace std;
string solve(string str)
{
    int n = str.size();
    string res = "";
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >='A'&& str[i] <= 'Z')
        {
            res += str[i];
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            res += str[i];
        }
        else if(str[i]= ' ')
        {
            res+=' ';
        }
        else
        {
            continue;
        }
    }
    return res;
}
int main() {
	string s = "%welcome' to @geeksforgeek<s";

	cout<<solve(s)<<endl;
	return 0;
}
