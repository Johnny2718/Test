
#include <iostream>
using namespace std;
int y;
int fib(int x)                                            // def function
{ 
    if (x>2)                                             // call the function itself when x>2 and add up (x-1) and (x-2)
    {
    return fib(x - 1) + fib(x - 2);} 
    else if (x==1)                                       // first number is 0                                   
    {return 0;}
    else if (x==2)                                       //second number is 1
    {return 1;}
}

int main()
{
    int x,y;
    int result;
    cout << "number of fibonacci sequence" << endl;
    cin >> x;
    y=x;
    for (int y=x;y>0;y=y-1)                                // print each of the number in the fibonacci sequence( from right to left)
    {   result = fib(y);
        cout << result<<'\t' ;
         }
    return 0;
}