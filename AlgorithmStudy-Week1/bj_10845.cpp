#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int N, x;

	queue<int> q;
	string str;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> x;
			q.push(x);
		}
		else if (str == "pop")
		{
			if (q.empty())
				printf("%d\n", -1);
			else
			{
				printf("%d\n", q.front());
				q.pop();
			}
		}
		else if(str=="size")
		{
			printf("%d\n", q.size());
		}
		else if (str=="empty")
		{
			if (q.empty())
			{
				printf("%d\n", 1);
			}
			else
			{
				printf("%d\n", 0);
			}
		}
		else if (str=="front")
		{
			if (q.empty())
				printf("%d\n", -1);
			else
			{
				printf("%d\n", q.front());
			}
		}
		else if (str=="back")
		{
			if (q.empty())
				printf("%d\n", -1);
			else
			{
				printf("%d\n", q.back());
			}
		}
	}
	return 0; 
}