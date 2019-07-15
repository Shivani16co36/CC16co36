#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
//str[10]={a,1,2,3,4,r};
int j;
char t,i,f,Ss;

char array1[10];
cout<<"Enter the array of characters";
for(j=0;j<10;j++)
{
cin>>array1[j];
}
//int x;
for(j=0;j<10;j++)
{

t=typeid(array1[j]).name();
if(t==i)
cout<<"integer";
else if(t==f)
cout<<"float";
else if(t==Ss)
cout<<"string";

}
