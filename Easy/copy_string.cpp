/*
Given two strings, copy one string to other using recursion. We basically need to write our own recursive version of strcpy in C/C++

Examples: 

Input : s1 = "hello"
        s2 = "geeksforgeeks"
Output : s2 = "hello"

Input :  s1 = "geeksforgeeks"
         s2 = ""
Output : s2 = "geeksforgeeks"
*/
#include <bits/stdc++.h>
using namespace std;
void mycopy(char s1[] , char s2[],int index=0)
{
    s2[index] = s1[index];
    if(s1[index] == '\0')
    {
        return;
    }
    mycopy(s1,s2,index+1);
}
int main() {
	
    char s1[100] = "GeekforGeeks";
    char s2[100] = " ";
    mycopy(s1,s2);
    cout<<s2<<endl;
   
	return 0;
}
