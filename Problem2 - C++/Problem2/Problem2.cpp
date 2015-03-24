// Problem2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a0 = 0;
	int a1 = 1;
	int sum = 0;
	int N = 4000000;
	do{
		int tmp1 = a1;
		a1 = a1 + a0;
		cout << a1 << endl;
		a0 = tmp1;
		if (a1 % 2 == 0){
			sum += a1;
		}
	} while (a1 < N);
	cout << "Sum of even fib's less than " << N << endl;
	cout << sum << endl;
	cin.get();
	return 0;
}