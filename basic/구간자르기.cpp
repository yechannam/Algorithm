#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long arr[1001][2];

long long getK(int A, int B, int N)
{
	long long K = 0;
	long long tmp = 0;

	int a, b;
	for (int i = 0; i < N; i++)
	{
		tmp = arr[i][1] - arr[i][0] + 1;
		if (arr[i][1] >= A && arr[i][0] <= B)
		{
			B > arr[i][1] ? B = arr[i][1] : B = B;
			tmp -= B - A + 1;
		}
		K += tmp;
	}
	return K;
}

int main()
{
	long long N, K, A, B;

	cin >> N >> K;

	for (long long i = 0; i < N; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}

	for (A = 0; A <= 1000000; A++)
	{
		cout << A << endl;
		for (B = 0; B <= 1000000; B++)
		{
			cout << B << endl;
			if (K == getK(A, B, N))
				break;
		}
	}

	if (A == 1000000 && B == 1000000)
	{
		cout << "0 0" << endl;
	}
	else
	{
		cout << A << " " << B << endl;
	}
	return 0;
}