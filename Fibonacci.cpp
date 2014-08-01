/*************************************************************************
Fibonacci Series - Recursive Solution

Kelly Manley

June 4, 2014
*************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


int _tmain()
{
	int num;

	cout << "Please enter a positive integer:";
	cin >> num;


    int Fibonacci(int num);
	{
		if(num < 2) 
		{
			return num;
		}

		else
        {
			 
			int result = Fibonacci(num - 1) + Fibonacci(num - 2);   
			return result;
		}

	}  // End of Function

	return 0;
}  // End of Main
