#include<iostream>
using namespace std;

// you should run this program yourself first to understand it
int line = 0;
char ch;
int main()
{
// if there's any char data unread from the console, the loop will run, and each loop will read a character into ch from the console
// when character 'Q' is read, end the loop
while (cin.get(ch)) {
   if (ch == 'Q')
      break;
   if (ch != '\n')
      continue;
   line++;
}
}