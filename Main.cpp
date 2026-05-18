#include <iostream>

template<typename T>
T* allocateMemory() 
{
    return new T;
}

template<typename T>
void freeMemory(T* ptr) 
{
    delete ptr;
}

int* inArr(int size) 
{
    if (size <= 0) return nullptr;
    return new int[size]();
}

template<typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";
}

void delArr(int*& arr)
{
    delete[] arr;
    arr = nullptr;
}

template<typename ArrType>
inline void ArrPushBack(ArrType*& arr, int arrSize)
{
    arrSize++;
    ArrType* temp = new ArrType[arrSize];
    for (size_t i = 0; i < arrSize - 1; i++)
    {
        temp[i] = arr[i];
    }
    std::swap(arr, temp);
    delete[]temp;

}

int* addEll(int* arr, int& size, int index, int el) 
{
    if (index < 0 || index > size) return arr;

    int* newArr = new int[size + 1];

    for (int i = 0; i < index; ++i) 
    {
        newArr[i] = arr[i];
    }
    newArr[index] = el;
    for (int i = index; i < size; ++i) 
    {
        newArr[i + 1] = arr[i];
    }

    if (arr != nullptr) 
    {
        delete[] arr;
    }

    size++;
    return newArr;
}

int* delEll(int* arr, int& size, int index)
{
    if (index < 0 || index >= size) return arr;

    if (size == 1) 
    {
        delete[] arr;
        size = 0;
        return nullptr;
    }

    int* newArr = new int[size - 1];

    for (int i = 0; i < index; ++i) 
    {
        newArr[i] = arr[i];
    }
    for (int i = index + 1; i < size; ++i) 
    {
        newArr[i - 1] = arr[i];
    }

    delete[] arr;
    size--;
    return newArr;
}

int main()
{
    int* arr = nullptr;
    int size = 0;

    delete[] arr;


	std::cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}