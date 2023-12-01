#include <iostream>

using namespace std;

int dp[10];
int main()
{
	int T;

	cin >> T;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= 10; i++)
	{
		dp[i] += dp[i - 2];
		dp[i] += dp[i - 3];
		dp[i] += dp[i - 1];
		//cout << i << ": " << dp[i] << endl;
	}

	int tmp;
	for (int i = 0; i < T; i++)
	{
		cin >> tmp;
		cout << dp[tmp] << endl;
	}	
	return 0;
}