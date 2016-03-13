// ACM11_Sum_of_Different_Primes.cpp : 定義主控台應用程式的進入點。
// assume that n<1120 and k<14
 
#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int primecount=0;


int main(int argc, char* argv[])
{
	//k n

	// 1. find all prime that less than n
	// 2 4
	int kmax=15,Nmax=1120;
	int n,k,count=0,index=0,tmp=0;
	int *prime;
	
	//n = 24;
	cout<<"please intput n:" <<endl;
	cin >> n;
	cout<<"please intput k:" <<endl;
	cin >> k;	

	for(int i=n;i>1;i--)
	{
		for(int j=2;j<i;j++)
		{
			if( (i%j) == 0 )
			{
				count++;
			}
		}
		if(count==0)
		{
			//cout<< i <<endl;
			primecount++;
		}
		count=0;
	}
	//cout<< primecount <<endl;


	prime = new int[primecount];/////
	for(int i=n;i>1;i--)
	{
		for(int j=2;j<i;j++)
		{
			if( (i%j) == 0 )
			{
				count++;
			}
		}
		if(count==0)
		{
			prime[index]=i;
			index++;
		}
		count=0;
	}

	for(int i=0;i<primecount;i++)
	{
		cout<< prime[i] <<endl;
	}

	tmp=24; count=0;

	// n=24 k =3

	for(int i=0;i<primecount;i++)
	{
		//tmp = prime[i];
		for(int j=i+1;j<k;j++)
		{
			tmp  = tmp - prime[j];
		}
	}


	system("pause");
	return 0;
}

