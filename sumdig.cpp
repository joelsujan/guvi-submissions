#include<iostream>
using namespace std;
int main()
{
int no,count=0;
cin>>no;
while(no>0)
{
no=no/10;
count++;
}
cout<<count;
return 0;
}
