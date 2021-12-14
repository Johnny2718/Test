#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
#include <iostream>
struct student
{
    int age;
    int score;
};

int main()
{
    struct student s={12,23};
    student *p=&s;
    cout<<p->age;
   
}