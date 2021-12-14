#include <iostream>
using namespace std;

bool arrayReverse(char* array, int start, int end);

int main()
{
    char array[100] = "robomaster2022";
    int startingPoint=0, endingPoint=5;
    if (arrayReverse(array, startingPoint, endingPoint)) 
    {cout << array << endl;}
    else 
    {cout << "Error, please check the input" << endl;}
    return 0;
}

bool arrayReverse(char* array, int start, int end) {
    if (start > end)                                 // return false if start>end
    return false;
    else
    for(int i=0;i<(end+1)/2;i+=1)                   // reverse the number
    {int x,y;                                       
    x=array[end-i];                                 //x=number that counted from right to left
     y=array[i];                                    //y=number that counted from left to right
    array[i]=x;                                     // each time reverse the position(ie 0,5 and 1,4 and 2,3 )
    array[end-i]=y;
    }
    return true;                                    
}