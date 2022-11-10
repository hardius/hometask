#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr[i];
	}

	bool IsProgression = true;
	int d1, d2;
	if (N > 1)
	{
		d1 = arr[1] - arr[0];
	}
	else
	{
		return 0;
	}

	for (int i = 1; i < N - 1; ++i)
	{
		d2 = arr[i + 1] - arr[i];
		if (d1 == d2 && d1 != 0)
		{
			d1 = d2;
		}
		else
		{
			IsProgression = false;
			break;
		}
	}

	if (IsProgression)
	{
		return d1;
	}
	else
	{
		return 0;
	}
}
