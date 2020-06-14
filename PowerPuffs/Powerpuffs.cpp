#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main()
{
	long long int n,min,temp;
	cin>>n;
	long long int a[3][n];
	for(int i=0;i<2;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	min=a[1][0]/a[0][0];
	for(int i=1;i<n;i++)
	{
		temp=a[1][i]/a[0][i];
		if(temp<min)
			min=temp;
	}
	cout<<min<<endl;
}
