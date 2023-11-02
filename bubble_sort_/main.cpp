#include <vector>
#include <iostream>

int main()
{
	std::vector<int> array{1,10,16,5,7,9,4,33,123,21,312,312,3,12,14,12};
	int temp = 0;
	int arr_size = array.size();
	for (size_t j = 0; j < arr_size - 1; j++)
	{
		for (size_t i = 0; i < arr_size - 1; i++)
		{
			if (array[i] >= array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i <= arr_size - 1; i++)
	{
		std::cout << array[i] << ".";
	}
	return 0;
}