#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double S;
	int n, i, k;
	k = 1;
	while (k <= 20)
	{
		S = 0;
		n = 1;
		while (n <= 25-k)
		{
			S += ((k-n)/(k+n))+1;
			n++;
		}
		k++;
	}
	cout << S << endl;

	k = 1;
	do {
		S = 0;
		n = 1;
		do {
			S += ((k - n) / (k + n)) + 1;
			n++;
		} while (n <= 25 - k);
		k++;
	} while (k <= 20);
	cout << S << endl;

	for (k = 1; k <= 20; k++)
	{
		S = 0;
		for (n = 1; n <= 25 - k; n++)
		{
			S += ((k - n) / (k + n)) + 1;
		}
	}
	cout << S << endl;


	for (k = 20; k >= 1; k--)
	{
		S = 0;
		for (n = (k+5)-k; n >= 1; n--)
		{
			S += ((k - n) / (k + n)) + 1;
		}
	}
	cout << S << endl;
	return 0;
}