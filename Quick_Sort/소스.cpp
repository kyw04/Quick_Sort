#include <iostream>
#define MAX 10
using namespace std;

void quitck_sort(int list[], int n)
{
	int v, t;
	int i, j;
	if (n > 1)
	{
		v = list[n - 1];
		i = -1;
		j = n - 1;
		while (true)
		{
			while (list[++i] < v);
			while (list[--j] > v);
			if (i >= j) break;
			t = list[i];
			list[i] = list[j];
			list[j] = t;
		}
		t = list[i];
		list[i] = list[n - 1];
		list[n - 1] = t;
		quitck_sort(list, i);
		quitck_sort(list + i + 1, n - i - 1);
	}
}
int main()
{
	int arr[MAX] = { 10, 4, 6, 3, 7, 9, 1, 5, 8, 2 };

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	quitck_sort(arr, MAX);

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	return 0;
}