#include "Mischbehaelter.h"
#include <iostream>

#include <stdlib.h>
#include <unistd.h>

using namespace std;


Mischbehaelter::Mischbehaelter()
{
	cout<<"Mischbehaelter wurde erstellt"<<endl;
}
void Mischbehaelter::mischen(int mixtime)
{
	cout<<"\nmischen: ";
	for(int i=0;i<mixtime;i++)
	{
		cout<<"#"<<flush;
		sleep(1);
	}
	cout<<endl;
}

//
void Mischbehaelter::stampfen(int stompTime)
{
	cout<<"\nstampfen: ";
	for(int i=0;i<stompTime;i++)
	{
		cout<<"#" << flush;
		sleep(1);
	}
	cout<<endl;
}

