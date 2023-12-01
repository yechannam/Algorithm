#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s)
{
	size_t first = 0, i = 0;
	for (; s[first] == ' '; first++)
		;
	if (s.size() <= 0)
		return s;

	while (1)
	{
		if (s[first] >= 'a' && s[first] <= 'z')
		{
			s[first] = s[first] - 32;
			// cout << "change!" << s[first] << endl;
		}
		i = first + 1;
		for (; i < s.size() && s[i] != ' '; i++)
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		for (; s[i] == ' '; i++)
			;
		first = i;
		if (i >= s.size())
			break;
	}
	return s;
}

int main()
{
	string test = " people   aDFollowed 1me ";
	cout << solution(test) << endl;
}