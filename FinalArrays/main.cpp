#include<iostream>
#include<cstdlib>
#include<ctime>


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
/*
	const int size = 10;
	int arr[size]{};
	int a = 0, b = 10;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b + 1 - a) + a;
		std::cout << arr[i] << "\t";
	}
	std::cout << "\n";
	int n;
	std::cout << "Enter the N ->";
	std::cin >> n;
	while (n <= 1 or n > size)
	{
		std::cout << "Error! N more then size of array!";
		std::cout << " Enter the N ->";
		std::cin >> n;
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			if (arr[j] > arr[j + 1]) std::swap(arr[j], arr[j + 1]);
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << "\n\n";

	const int size = 31;
	int arr[size]{};
	int a = -30, b = -5;
	int sum = 0, n,t=0;
   	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b + 1 - a) + a;
		std::cout << arr[i] << ", ";
	} 

	std::cout << "\b\b.\n";
	std::cout << "Enter the N ->";
	std::cin >> n;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		if (arr[i] < n) t++;
	}
	std::cout << "\n";
	std::cout <<"Average temperature -> "<<sum/double(size)<<". Days whith minimum temperature -> "<<t<<"\n";
	std::cout << "\n\n";
*/
	const int size = 20;
	int arr[size]{};
	int a = 0, b = 99;
	int n,m;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b + 1 - a) + a;
		//std::cout << arr[i] << "\t";
	}

	std::cout << "\n";
	std::cout << "Enter the range from N to M ->";
	std::cin >> n>>m;
	for (int i = 0; i <size; i++)
		 std::cout <<i+1<<" - "<< arr[i]<< (arr[i]>=n and arr[i] <= m ? "\t!" : " ") << "\n";
		
	std::cout << "\n\n";
	
	


	return 0;
}