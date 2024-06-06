
// C++ program to find highest power of 2 smaller
// than or equal to n.
#include<bits/stdc++.h>
using namespace std;

int highestPowerof2(int n)
{
int p = (int)log2(n);
return (int)pow(2, p);
}

// Driver code
int main()
{
	int n = 10;
	cout << highestPowerof2(n);
	return 0;
}

