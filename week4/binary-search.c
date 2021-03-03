#include <cs50.h>
#include <stdio.h>

bool search(int n, int array[], int lower, int upper);

int main(void)
{
    int size = 7;
    int array[7] = {1, 2, 3, 6, 12, 24, 48};
    int number = get_int("Enter digit: ");
    printf("%s\n", search(number, array, 0, size - 1) ? "YES" : "NO");
}

bool search(int n, int array[], int lower, int upper){
    if (lower > upper){
        return false;
    }
    if (lower == upper){
        return (n == array[upper]);
    }

    int middle = (lower + upper) / 2;

    if (n > array[middle]){
        return search(n, array, middle + 1, upper);
    }
    if (n < array[middle]){
        return search(n, array, lower, middle - 1);
    }
    return true;
}
