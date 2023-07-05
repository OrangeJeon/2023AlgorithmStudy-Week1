#include<iostream>
#include<queue>
using namespace std;


int main()
{
	int N, k;
	cin >> N;
	cin >> k;

	queue<int> q;

	for (int i = 1; i <= N; i++)
		q.push(i);

	printf("<");

	while (q.size() > 1)
	{
		for (int i = 1; i < k; i++)
		{
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		printf("%d, ", q.front());
		q.pop();
	}
	printf("%d>\n", q.front());
	return 0;
}