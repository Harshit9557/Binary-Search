#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,j=0,l,i;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;)
	{
		l=(n+i)/2;
		if(k==a[l])
		{
			cout<<l<<endl;
     		j++;
			break;
		}
		else if(k>a[l])
			i=l+1;
		else if(k<a[l])
			n=l;					
	}
  	if(j==0)
    	cout<<"Invalid Input"<<endl;
	return 0;		
}
