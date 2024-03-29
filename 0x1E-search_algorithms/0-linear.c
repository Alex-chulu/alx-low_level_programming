#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value) {

    if (array == NULL) {
        return -1;
    }
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", array[i]);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}
