#include <iostream>

using namespace std; 

int dp0[41];
int dp1[41];

int main()
{
	int N;
	int answer = 0 ;
	cin >> N;

	dp0[0] = 1;
	dp1[0] = 0;
	dp0[1] = 0;
	dp1[1] = 1;

	for (int i = 2; i <= 40; i++)
	{
		dp0[i] = dp0[i - 1] + dp0[i - 2];
		dp1[i] = dp1[i - 1] + dp1[i - 2];
	}
	int tmp;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		cout << dp0[tmp] << " " << dp1[tmp] << endl;
	}
	
	return 0;
}

/*
		0 1
	0 = 1 0
	1 = 0 1
	2 = f(1) + f(0)
		1 1
	3 = f(2) + f(1)
		1 2

*/