// Problem4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int x){
	string original = to_string(x); 
	string reversed;
	for (string::reverse_iterator it = original.rbegin(); it != original.rend(); ++it){
		reversed += *it; //creates reversed version of string
	}
	
	if (original.compare(reversed) == 0){ //palindrome check
		cout << "Palindrome: " << reversed << endl;
		return true; 
	}
	return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int MIN = 100;
	const int MAX = 999;
	int largestPalindrome = 0;
	for (int i = MIN; i <= MAX; i++){
		for (int j = MIN; j <= i; j++){
			int x = i * j;
			if (isPalindrome(x) && x >= largestPalindrome){
				largestPalindrome = x;
			}
		}

	}
	cout << "Largest is: " << endl;
	cout << largestPalindrome << endl;
	cin.get();
	return 0;
}

