/* This code solves tower of Hanoi problem. 
   In this problem we have to move  All the discs from tower 'from'
   to tower 'to' .
   Rules are as follow:
   1. Move one disc at a time.
   2. Only a smaller disc can come on top of other disc
 */
#include<iostream>
#include"stack.cpp"
using namespace std;

/* function to move */
void move ( stack& one  ,stack& two  ,stack& three  ,int n )
{
	stack current = one ;
	if ( n==1 )
	{
		int temp =  one.pop();
		three.push("",temp);
	}
	else
	{
		move(one , three  , two , n-1 );
		int tempnum =one.pop();
		three.push("" , tempnum);
		move( two , one , three , n-1);
	}

}

int main( int argc , char* arg[])
{
	/*Three towers */
	stack from , temp , to ; 
	/* Number of Discs*/
	int nDisc; 
	cout<<"Enter the number of discs : ";
	cin>>nDisc; 
	if ( nDisc==0)
	{
		cout<<"Number of disc cannot be 0!\n";
		return 0;
	}
	/** Creating Initial state of 'from' tower*/
	else 
	{
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~Initial State ~~~~~~~~~~~~~~~~~~~~~~~~\n";
		for ( int i=nDisc ; i>=1 ; i--)
			from.push("",i);
		
		cout<<"Initial from stack: \n";
		from.printId();
		cout<<"---------------\n";
		cout<<"Initial to stack : \n";
		to.printId();
		cout<<"---------------\n";
		move ( from , temp ,to  ,nDisc  );
		
		cout<<"Final from stack: \n";
		from.printId();
		cout<<"---------------\n";
		cout<<"Final to stack : \n";
		to.printId();
		cout<<"---------------\n";

		return 0;
	}
}












