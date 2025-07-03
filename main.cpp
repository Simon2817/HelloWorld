#include <iostream>

// 冒泡排序
void bubble_sort(int array[], int n)
{
	for (int i = 0; i < n-1; i ++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

void sort_test()
{
	int n = 5;
	int array[] = {2, 10, -22, 33, 7};
	std::cout << "原始数组：";
	for (auto item : array)
	{
		std::cout << item << “ ”;
	}
	std::endl;

	bubble_sort(array, n);

	std::cout << "冒泡排序后：";
	for (auto item : array)
	{
		std::cout << item << " ";
	}
	std::endl;
}

// ubuntu 完成了add方法
int add(int a, int b)
{
	return a + b;
}

int main()
{
	// win-simon 对main函数做了注释
	std::cout << "Hello word!" << std::endl;
	
	sort_test();
	return 0;
}
