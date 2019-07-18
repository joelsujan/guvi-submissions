#include<iostream>
using namespace std;
int main()
{
int a[50];
int n,k,i,sum=0;
cin>>n>>k;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=1;i<=k;i++)
sum=sum+a[i];
cout<<sum;
return 0;
}
