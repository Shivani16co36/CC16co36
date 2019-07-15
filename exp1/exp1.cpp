#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
//str[10]={a,1,2,3,4,r};
int i;
std::string t;

char array1[10];
cout<<"Enter the array of characters";
for(i=0;i<10;i++)
{
cin>>array1[i];
}
//int x;
for(i=0;i<10;i++)
{

t=typeid(array1[i]).name();
if(t==array1[i])
cout<<"integer";
else if(t==f)
cout<<"float";
else if(t==Ss)
cout<<"string";

}
