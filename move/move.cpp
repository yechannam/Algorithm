#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string s = "-1 -1";
	vector<long long> vec;
	string answer = "";

	size_t start = 0;

	for (size_t i = 0; i < s.size(); i++)
	{
		start = i;
		for (; s[i] != ' ' && i < s.size(); i++)
			;
		// cout << s.substr(start, i - start) << endl;
		vec.push_back(stoi(s.substr(start, i - start + 1)));
	}

	stringstream ss;

	sort(vec.begin(), vec.end());

	ss << *vec.begin() << " " << *(vec.end() - 1);

	answer = ss.str();
	cout << answer;
	return 0;
}