#include <iostream>

using namespace std; 

int dp[1000000];

int main()
{
	int N;
	int answer = 0 ;

	cin >> N;

	for (int i = 2; i <= N; i++)
	{
		dp[i] = dp[i - 1] + 1;
		//cout << "-----" << i << "-----" <<endl;
		//cout << "1 : "<< dp[i] << endl;
		if (i % 3 == 0)
		{
			dp[i] = min(dp[i / 3] + 1, dp[i]);
			//cout << "3 : "<< dp[i] << endl;
		}
		if (i % 2 == 0)
		{
			dp[i] = min(dp[i / 2] + 1, dp[i]);
			//cout << "2 : "<< dp[i] << endl;
		}
		//cout << endl << endl;
	}

	cout << dp[N];

	/*
	2 -> 1
	3 -> 1
	4 -> 2 -> 1
	4 -> 3 -> 1
	5 -> 4 -> 2 -> 1
	5 -> 4 -> 3 -> 1
	6 -> 2 -> 1
	
	1 - 0
	2 - 1
	3 - 1
	4 - [3] + 1 = 2
	  - [2] + 1 = 2 
	5 - 3
	9 - [8] + 1
	  - [3] + 1 = 2
	10 - [9] + 1 = 3
	   - [5] + 1 = 4
	*/
}