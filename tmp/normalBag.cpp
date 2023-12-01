#include <iostream>
#include <string>
#include <vector> 

using namespace std;

int N, K;
int W[101] = {0, };
int V[101] = {0, };
int dp[101][100001] = {{0, }, };


int main() {
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		cin >> W[i] >> V[i];

	for (int limit = 1; limit <= K; limit++)
	{
		for (int i = 1; i <= N; i++)
		{
			if (W[i] > limit)
			{
				dp[i][limit] = dp[i - 1][limit];
			}
			else
			{
				dp[i][limit] = max(dp[i - 1][limit], V[i] + dp[i - 1][limit - W[i]]);
			}
		}
	}
	cout << dp[N][K];
	return 0;
}
