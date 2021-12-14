# include <iostream>
using namespace std;
#include<cmath>
struct Cartesian {float x;float y;};
struct Polar {float x;float y;};
Polar cartesian2Polar(Cartesian pos);
int main()
{Cartesian C;
 Polar P;
  cout<<"enter x coordinate"<<endl;
  cin>>C.x;
  cout<<"enter y coordinate"<<endl;
  cin>>C.y;

  P.x=sqrt(pow((C.x),2)+pow((C.y),2));             // find polar coordinates
  P.y=atan((C.y)/(C.x));
  cout<<"the polar coordiantes are "<<P.x<<" and "<<P.y<<"(in rad)"<<endl;
  


  }



