#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    std::cout << "\n--------------------\n\n";

	Array<int> arr(5);
	arr[3] = 2;
	arr[0] = 1;
	/*Array<int>* ptr = &arr;
	*ptr = arr;
	arr = arr;
	std::cout << (*ptr)[3] << std::endl;*/
    std::cout << arr[4] << std::endl;
	std::cout << arr[3] << std::endl;
	arr[3] = 7;
	std::cout << arr[3] << std::endl;
	try{
		arr[7];
	}
	catch (std::exception& e){ std::cout << e.what() << std::endl; }

    std::cout << "\n--------------------\n\n";

    const Array<int> arr2(5);
    std::cout << arr2[3] << std::endl;
    //arr2[3] = 7;
    try{
		arr[7];
	}
	catch (std::exception& e){ std::cout << e.what() << std::endl; }

    return 0;
}