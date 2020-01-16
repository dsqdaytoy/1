#include <stdio.h>
#include <stdlib.h>

int BinaryFind(int arr[], int size, int to_find)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (to_find < arr[mid])
		{
			right = mid - 1;
		}
		else if (to_find > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int to_find = 7; 
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = BinaryFind(arr, size, to_find);
	
	if (i == -1)
	{
		printf("没找到！\n");
	}
	else
	{
		printf("找到了！下标为：%d\n", i);
	}

	system("pause");
	return 0;
}

