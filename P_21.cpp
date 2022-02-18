/*
Implement a class string containing the following functions:

    - Overload + operator to carry out the concatenation of strings.
    - Overload = operator to carry out string copy.
    - Overload <= operator to carry out the comparison of strings.
    - Function to display the length of a string.
    - Function tolower( ) to convert upper case letters to lower case.
    - Function toupper( ) to convert lower case letters to upper case.
*/
#include <iostream>
#include <string.h>
using namespace std;
class strings
{
public:
    char str[50];

    strings() {}      //default constructor
    strings(char s[]) //parameterized constructor
    {
        strcpy(str, s);
    }
    strings operator+(strings a2) //binary member function
    {
        strings a3;
        strcat(str, a2.str);
        strcpy(a3.str, str);
        return a3;
    }
    friend strings operator<=(strings, strings);
    friend strings operator==(strings, strings);
};
strings operator<=(strings S1, strings S2) //For comparison
{
    if (strcmp(S1.str, S2.str)==0)
    {
        cout<<"Both strings are same.";
    }
    else
    {
        cout<<"Both strings are not same.";
    }
}
strings operator==(strings S1, strings S2) //To copy
{

    strcpy(S2.str, S1.str);
    cout<<"Copying first string into second."<<endl<<S1.str<<endl<<S2.str<<endl;
}

void len(strings S1, strings S2) //To find length
{
    cout<<"Length of first string:"<<strlen(S1.str)<<endl;
    cout<<"Length of second string:"<<strlen(S2.str)<<endl;
}
void toupper(strings S1, strings S2) //For upper case
{
    cout<<"Upper case:"<<strupr(S1.str)<<endl<<strupr(S2.str)<<endl;
}
void tolower(strings S1, strings S2) //for lower case
{
    cout<<"Lower case:"<<strlwr(S1.str)<<endl<<strlwr(S2.str)<<endl;
}
int main()
{
    char s1[50];
    cout<<"Enter first string:";
    cin>>s1;
    char s2[50];
    cout<<"Enter second string:";
    cin>>s2;
    strings S1(s1);
    strings S2(s2);
    len(S1, S2);
    toupper(S1, S2);
    tolower(S1, S2);
    S1==S2;              //friend binary function
    strings S3=S1+S2;   //member binary function
    cout<<"Concatenation: "<<S3.str<<endl;
    S1<=S2;
    return 0;
}
