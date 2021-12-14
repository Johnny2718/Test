#include <iostream>
using namespace std;
int replace(char str[4], int len, char a, char b)
{
    int replacement = 0;
    for (int i = 0; i < len; i += 1)  
        if (str[i] == 'a')
        {
            replacement++;                   // record number of replacement
            str[i] = 'b';                    // replace 'a' with 'b'
        }
    cout << "     number of replacement is " << replacement;
    cout << "       the new string is ";
    for (int j = 0; j < 4; j++)              // cout the new str
        cout << str[j];
    return 0;
}

int main()
{
    char str[4] = {'a', 'a', 'd', 'c'};       //def a str
    cout << "the original str is ";
    for (int i = 0; i < 4; i++)              // print out the original str
    {
        cout << str[i];
    }
    replace(str, 4, 'a', 'b');               // call the replace function
}