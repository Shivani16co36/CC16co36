#include<iostream>
//#include<typeinfo>
using namespace std;

int main()
{
//str[10]={a,1,2,3,4,r};
int i;

char a[5];
cout<<"Enter the array of characters:\n";
for(i=0;i<5;i++)
{
cin>>a[i];
}
cout<<endl;
//int x;
/*for(j=0;j<10;j++)
{

t=typeid(array1[j]).name();
if(t==i)
cout<<"integer";
else if(t==Ss)
cout<<"string";
} */

for(i=0;i<5;i++)
{
  if(a[i]=='0' || a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8' || a[i]=='9' )
  cout<<a[i]<<" is an integer\n";

  else
  cout<<a[i]<<" is a char\n";
}
}
