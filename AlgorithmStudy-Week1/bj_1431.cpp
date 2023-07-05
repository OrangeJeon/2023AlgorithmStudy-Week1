#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
#define number_max 1001
#define string_max 51

int compare(string A, string B)
{
	int asize = A.size(), bsize = B.size();
	if (asize != bsize)
		return asize < bsize;

	int asum = 0, bsum = 0;

	for (int i = 0; i < asize; i++)
	{
		if ('0' <= A[i] && A[i] <= '9')
			asum += A[i] - '0';
		if ('0' <= B[i] && B[i] <= '9')
			bsum += B[i] - '0';
	}

	if (asum != bsum)
		return asum < bsum;

	return A < B;
}

int main()
{
	int N;
	cin >> N;
	string input[number_max];

	for (int i = 0; i < N; i++)
	{
		cin >> input[i];
	}
	sort(input, input + N, compare);

	for (int j = 0; j < N; j++)
	{
		cout << input[j] << "\n";
	}
	return 0;
}