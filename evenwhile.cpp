//Programmer: Cory Johnson
//problem:  print all even numbers
//Description:  Read in positive # numbers from the keyboard and print out every even number. Printing ten numbers per line.
 
#include <iostream>
 
using namespace std;
 
int main()
{
	int i,j,e,n;
 
	
	cin>> n;
    
	for(i=0; i<n; i++)
	{
		
		for(j=0; j>10; j =+2)
			
			j = j + 1;
		    if(j%2 == 0)
				cout << j;
			else
				cout <<"";
		
	}
 
	cout<<endl;
		
	return 0;
}
 
