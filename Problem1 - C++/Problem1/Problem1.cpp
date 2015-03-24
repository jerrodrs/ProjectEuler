// Problem1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	int sum = 0;
	int N = 1000;
	for (i = 1; i < N; i++){

		if (i % 15 == 0){
			sum += i;
			cout << i << endl;
		}else
		if (i % 3 == 0){
			sum += i;
			cout << i << endl;
		}else
		if (i % 5 == 0){
			sum += i;
			cout << i << endl;
		}
	}
	cout << "Sum of 3,5 multiples under " << N << endl;
	cout << sum << endl;
	cin.get();
	return 0;
}

