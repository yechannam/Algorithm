#include <iostream>

using namespace std;

long long arr[1005];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 4;
	cin >> N;

	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		if (arr[i] >= 10007)
			arr[i] %= 10007;
		//cout << arr[i] << endl;
	}

	cout << arr[N] % 10007 << endl;
	/*
	1 
	*/
}