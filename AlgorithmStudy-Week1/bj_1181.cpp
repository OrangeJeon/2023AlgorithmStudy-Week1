#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main()
{
	int N;
	string word;
	vector<string> Sort;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		if (find(Sort.begin(), Sort.end(), word) == Sort.end())
		{
			Sort.push_back(word);
		}
		
	}
	sort(Sort.begin(), Sort.end(), compare);

	for (int j = 0; j < Sort.size(); j++)
	{
		cout << Sort[j] << '\n';
	}

	return 0;
}