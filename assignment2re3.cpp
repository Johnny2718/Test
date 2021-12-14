#include <iostream>
using namespace std;
int main()
{
   char a;
   int line=0;
   int k=0;
      while(cin.get(a),line>=0,k>=0)
      {

         if (a == 'Q')
         {
            k=-1;
         }
         else if (a != '\n')
         {
            line++;
         }
   }
   cout << "there are " << line << " lines in your input";
}
