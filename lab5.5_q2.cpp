//write program for arrange stars in hollow rectangle pattern.
//include library
#include <iostream>
using namespace std;
//include function
int main (){
// introducing variables.
	int a, b;
    	cout<< "what is the desired number of rows?";
    	cin>> a;
    	cout << "what is the desired number of columns?";
    	cin >> b;
//creating rows
	for (int i=0;i<a;i++)
//arrangement of spaces
	{
        for (int k=0;k<i;k++)
	{cout << " ";
	}
//arrangement of stars
         for (int j=0;j<(a-i);j++)
	{cout <<"*";
	}
	cout<<endl;
	}
	return 0;
	}
    

















      
