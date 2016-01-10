#include"stack.h"
#include<string>
#include<iostream>
using namespace std; 

stack::stack()
{
	size=0;
	mNextStack=NULL;
}

stack::~stack()
{}

void stack::push( const std::string& str, const int& nid )
{
	mList.addToHead(str , nid);
	size++;
}

int  stack::pop()
{
	node* head = mList.getHead();
	if(head==NULL)
		{
			cout<<"Nothing to pop . Stack is empty.\n";
		}
	else
	{ 
		int tempId = head->id; 
		cout<<"Popped : Name - "<<head->name<<" Id - "<<head->id<<endl;
		mList.setHead(head->next);
		size--; 
		return (tempId); 
	}
}

int stack::getSize()
{
	return size;
}

void stack::printId()
{
	mList.printId();
}

void stack::printName()
{
	mList.printName();
}