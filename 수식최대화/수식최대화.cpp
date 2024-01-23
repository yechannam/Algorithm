#include <string>
#include <vector>
#include <iostream>
#include <deque>
using namespace std;

int isOper(const vector<string> vec, char op)
{
	string tmp;
	tmp += op;
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] == tmp)
			return 1;
	}
	return 0;
}

int cul(int n1, int n2, char op)
{
	if (op == '-')
		return n1 - n2;
	if (op == '*')
		return n1 * n2;
	if (op == '+')
		return n1 + n2;
	return 0;
}

long long solution(string expression)
{
	long long answer = 0; //"100-200*300-500+20"
	string tmp;
	vector<string> vec; // -1, -4, -3
	char minus = '-', mul = '*', plus = '+';
	char *order;
	char list[6][3] = {
		{minus, mul, plus},
		{minus, plus, mul},
		{mul, plus, minus},
		{mul, minus, plus},
		{plus, minus, mul},
		{plus, mul, minus}};

	for (size_t i = 0; i < expression.size(); i++)
	{
		if (expression[i] == '-' || expression[i] == '*' || expression[i] == '+')
		{
			vec.push_back(tmp);
			tmp.clear();
			tmp += expression[i];
			vec.push_back(tmp);
			tmp.clear();
		}
		else
		{
			tmp += expression[i];
		}
	}
	vec.push_back(tmp);

	vector<string> dq;
	vector<string> tmpVec = vec;

	for (int k = 0; k < 6; k++)
	{
		order = list[k];
		tmpVec = vec;
		for (int i = 0; i < 3; i++)
		{
			// cout << order[i] << endl;
			while (isOper(tmpVec, order[i]))
			{
				for (auto it = tmpVec.begin(); it != tmpVec.end(); it++)
				{
					if (*(it + 1) == order[i])
					{
						dq.push_back(cul(stoi(q*(it)), stoi(*(it + 2)), order[i]));
						if (tmpVec.size() <= 3)
							break;
						it += 2;
						// cout << "here :" << *it << endl;
					}
					else
						dq.push_back(*it);
				}
				tmpVec = vector<int>(dq.begin(), dq.end());
				for (int j = 0; j < (size_t)tmpVec.size(); j++)
				{
					cout << tmpVec[j] << " ";
				}
				cout << endl;
				dq.clear();
			}
		}
		cout << "-------------------------\n\n";
		// cout << tmpVec.size() << endl;
		int now = *tmpVec.begin() > 0 ? *tmpVec.begin() : *tmpVec.begin() * -1;
		// cout << now << endl;
		answer = now > answer ? now : answer;
	}

	// for (size_t i = 0; i < vec.size(); i++)
	// {
	// 	cout << vec[i] << " ";
	// }

	return answer;
}

int main()
{
	cout << solution("100-200*300-500+20+30+50+60") << endl;
}