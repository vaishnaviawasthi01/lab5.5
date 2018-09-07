//to write a program for arranging stars in box shape(k*l).
//include library
#include <iostream>
using namespace std;
//include function
int main (){
    				//introducing variable
	int k, l;
    //giving commands to take input.
	cout <<"what is the number of rows : ";
    cin >> k;
    cout << "what is the number of columns : ";
    cin >> l;
    //creating outer loop

    for (int i=0; i<k; i++)
    //creating inner loop
    { 
    for (int j=0; j<l;j++)
    {
    cout<< "*";
     }
	cout<<endl;
     }
    //ending.
    return 0;
    }
