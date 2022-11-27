#include<iostream>
using namespace std;
main()
{
   int sum =0,n,m,a;
   cout<<"enter any no. = ";
   cin>>n;
  m=n;
   while(n>0)
   {
      a=n%10;
      sum=sum+a;
      n=n/10;
    }
    cout<<"sum of "<<m<<" digit is = "<<sum;
}
