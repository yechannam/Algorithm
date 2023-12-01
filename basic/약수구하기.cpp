#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	vector<int> vec;
	int N, K;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vec.reserve(100000);
	cin >> N >> K;
	for (int i = sqrt(N); i >= 2; i--)
	{
		if (N % i == 0)
		{
			vec.insert(vec.begin(), i);
			if (i != N / i)
				vec.push_back(N / i);
		}
	}
	vec.insert(vec.begin(), 1);
	vec.push_back(N);

	cout << vec[K - 1] << "\n";
	return 0;
}