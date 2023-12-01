#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
	int answer = 0;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	auto itB = (B.end() - 1);
	auto itA = A.begin();
	for (; itA != A.end(); itA++, itB--)
	{
		answer += *itA * *itB;
	}

	return answer;
}

int main()
{
	vector<int> vec1 = {1, 2};
	vector<int> vec2 = {3, 4};

	cout << solution(vec1, vec2) << endl;
}