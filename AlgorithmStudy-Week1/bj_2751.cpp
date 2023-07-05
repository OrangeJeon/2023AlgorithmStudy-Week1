#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


vector<int> heap(vector<int>heapsort)
{
	make_heap(heapsort.begin(), heapsort.end());
	for (auto last = heapsort.end(); last != heapsort.begin(); last--)
	{
		pop_heap(heapsort.begin(), last);

	}
	return heapsort;
}
int main()
{
	int N, temp;
	cin >> N;
	vector<int> target(N);

	for (int i = 0; i < N; i++)
	{
		cin >> target[i];
	}

	vector<int> he_ap = heap(target);

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", he_ap[i]);
	}

	return 0;
}