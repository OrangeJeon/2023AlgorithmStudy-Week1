#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> Sort;
int main()
{
	int N;

	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cin >> N;

	int temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		Sort.push_back(temp);
	}

	sort(Sort.begin(), Sort.end());

	for (int j = 0; j < N; j++)
	{
		cout << Sort[j] << '\n';

	}

	return 0;
}