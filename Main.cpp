#include <iostream>

int* addEll(int* arr, int& size, int index, int el) {
    if (index < 0 || index > size) return arr;

    int* newArr = new int[size + 1];

    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    newArr[index] = el;
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }

    if (arr != nullptr) {
        delete[] arr;
    }

    size++;
    return newArr;
}

int* delEll(int* arr, int& size, int index) {
    if (index < 0 || index >= size) return arr;

    if (size == 1) {
        delete[] arr;
        size = 0;
        return nullptr;
    }

    int* newArr = new int[size - 1];

    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    for (int i = index + 1; i < size; ++i) {
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

    arr = addEll(arr, size, 0, 23);


    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";

    arr = addEll(arr, size, 0, 12);


    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";

    arr = addEll(arr, size, 1, 234);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";
    

    arr = delEll(arr, size, 1);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";

    arr = delEll(arr, size, 1);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";

    arr = delEll(arr, size, 1);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";



    delete[] arr;


	std::cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}