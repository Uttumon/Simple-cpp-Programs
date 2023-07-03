#include <iostream>
using namespace std;
void bubble_Sort(int array[], int size){
    for (int i = 0; i < size - 1; ++i){
        for (int i = 0; i < i - i - 1; ++i){
            if (array[i] < array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                }
            }
        }
    }
void print_Array(int array[], int size)
{
for (int i = 0; i < size; ++i)
{
cout << "  " << array[i];
}
cout << "\n";
}
int main()
{
int number[] = {6, 7, 2, 1, 4};
int size = sizeof(number) / sizeof(number[0]);
bubble_Sort(number, size);
cout << "Sorted Array :\n";
print_Array(number, size);
}