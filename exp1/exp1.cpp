#include<iostream>
#include<string>
//include<typeinfo>
using namespace std;
int main()
{
//str[10]={a,1,2,3,4,r};
int i,n;
string s, a[n];
cout<<"Enter number of elements: ";
cin>>n;


cout<<"Enter the expression:\n";
for(i=0;i<n;i++)
{
cin>>s;
a[i]=s;
}
cout<<endl;

for(i=0;i<n;i++)
{
  if(a[i]=='0' || a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8' || a[i]=='9' )
  cout<<a[i]<<" is an integer\n";

  else if(a[i]=='+' || a[i]=='-' || a[i]=='=' || a[i]=='*' || a[i]=='/' || a[i]=='%' || a[i]=='<' || a[i]=='>' )
  cout<<a[i]<<" is an operator\n";


  else if(a[i]==';' || a[i]=='{' || a[i]=='}' || a[i]=='(' || a[i]==')' || a[i]==' ' || a[i]=='[' || a[i]==']' || a[i]=='/')
  cout<<a[i]<<" is a delimiter\n";

  else if(s=='if')
  cout<<"Keyword\n";
  else
  {
  cout<<a[i]<<" is a identifier\n";
  }
}
}
