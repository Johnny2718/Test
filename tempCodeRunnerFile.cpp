#include <iostream>
using namespace std;
int main()
{
    char str[4] = {'a', 'b', 'c','b'};
    cout << str[0]<<endl;
    for (int i = 0; i < 4; i += 1)
       { if (str[i] == 'b')
            str[i] = 'k';}
    cout<< str[3];
}