#include<iostream>
#include<math.h>
using namespace std;

//Calculate the modulus
int mod(int x,int y)
{
 
 return x-(y*(x/y));

}


int modx(int li,int d1,int d2,int w)
{
  
  return ((li+(d1*w))*(d2-1))/d2;
}

//Draft
int modxx(int li,int d1,int d2,int w)
{
  
  return ((li*(d2-1))-(d1*w)*(d2-1))/d2;
  
}

//Find the next number after li divisible by both d1 and d2
int gcm_lim(int li,int d1,int d2)
{
  int p1=pow(d2,2)*li;
//  cout<<"\np1: "<<(p1);
  int p2=(d2*li);
//  cout<<"\np2: "<<p2;
  int dt1=(d1*pow(d2,2));
//  cout<<"\ndt1: "<<dt1;
  int dt2=(d1*d2);
 // cout<<"\ndt2: "<<dt2;
  return (p1-p2)/(dt1+dt2);
}


int main()
{
 cout<<endl<<gcm_lim(30,6,8);
 cout<<"\nfinished";
}
