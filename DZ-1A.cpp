#include <iostream>

void foo(int arr[12])
{
    for (int value = 1, index = 0; index < 12; value += 2)
        if (value % 5)
        {
            arr[index] = value;
            index++;
        }

    for (int i = 0; i < 12; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;
}

int main()
{
    int arr[12]{};
    foo(arr);

    return 0;
}