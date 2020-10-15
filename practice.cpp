#include <iostream>
using namespace std;

int main() 
	   {
	       int t;
	       cin>>t;
	       while(t--)
	       {
	       int a,b,c,d;
	       int count=0;
	       cin>>a>>b;
	       c=a+b;
	      int arr[10];
	      arr[0]=6;
	      arr[1]=2;
	      arr[2]=5;
	      arr[3]=5;
	      arr[4]=4;
	      arr[5]=5;
	      arr[6]=6;
	      arr[7]=3;
	      arr[8]=7;
	      arr[9]=6;
	      while(c>0)
	      {
	          d=c%10;
	          count=count+arr[d];
	          c=c/10;
	          
	      }
	   cout<<count<<endl;
	       }
	return 0;
}
