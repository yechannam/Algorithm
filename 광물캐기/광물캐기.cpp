#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int solution(vector<int> picks, vector<string> minerals)
{
	int answer = 0;

	vector<pair<vector<string>, int>> orderMinerals;
	auto iter = minerals.begin();
	for (int i = 0; i < (picks[0] + picks[1] + picks[2]) * 5, iter != minerals.end(); i++, iter++)
	{
		if (i / 4 == 0 && i != 0)
		{
				}
	}
	return answer;
}