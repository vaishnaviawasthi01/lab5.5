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
		
		if((i!=(n-1))*j*(i!=j))
		cout<<' ';
		else
		cout<<'*';
		

		if(j==(n-1))
		cout<<endl;

		}

		return 0;

}		
