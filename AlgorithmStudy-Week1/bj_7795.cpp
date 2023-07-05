#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, first, second;
vector<int> First, Second;

int main()
{
	scanf("%d", &N);

	while (N--)
	{
		scanf("%d%d", &first, &second);

		First = vector<int>(first);
		Second = vector<int>(second);

		for (int i = 0; i < first; i++)
			scanf("%d", &First[i]);
		for (int j = 0; j < second; j++)
			scanf("%d", &Second[j]);
		sort(First.begin(), First.end());
		sort(Second.begin(), Second.end());

		int point1 = 0, point2 = 0;
		for (int i = 0; i < first; i++)
		{
			while ((point2 < second) && (First[i] > Second[point2]))
				point2++;
			point1 += point2;
		}
		printf("%d\n", point1);
	}
	return 0;
}