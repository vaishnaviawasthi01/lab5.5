#include<iostream>

using namespace std;


int main()
{
	int n;
	cout<<"Enter a number : ";
	cin >> n;
	int a,b;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		if(i>n/2)
		a=n-i-1;
		else
		a=i;
			
		if(j>n/2)
		b=n-j-1;
		else
		b=j;
		
		if(a*b)
		cout<<' ';
		else
		cout<<'*';
		

		if(j==(n-1))
		cout<<endl;

		}

		return 0;

}		
