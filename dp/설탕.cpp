#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;
	
	int three = N, i = 0;

	for (i = N / 5; i >= 0; i--)
	{
		three = N - i * 5;
		if (three % 3 == 0)
			break ;
	}
	if (three % 3 != 0)
		cout << -1;
	else
		cout << i + static_cast<int>(three / 3);
	return 0;
}