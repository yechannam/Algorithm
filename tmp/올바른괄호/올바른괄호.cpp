#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
	int answer = 0;

	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
			answer++;
		else if (s[i] == ')')
			answer--;

		if (answer < 0)
			return false;
	}

	return !answer;
}

int main(int a, char **v)
{
	cout << solution(v[1]) << endl;
}