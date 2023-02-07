#include <stdio.h>
#include <string.h>
#include "helper.h"

int main()
{
    char nums[] = {1, 3, 5, 7, 9, 11, 33, 78, 99, 105};
    printf("Found at index: %d \n", binary_search(nums, 5, sizeof(nums)));
    printf("%d\n", generate_numbers());
    printf("%s\n", generate_string());
    return -1;
}

// Passing an array name sends an array pointer to the initial element, this takes advantage of that
int str_len(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
    {
        n++;
    }
    return n;
}

int binary_search(char nums[], int target, int len)
{
    int low, high, mid;

    low = 0;
    high = len - 1;

    while (low <= high)
    {
        mid = high - (high + low) / 2;
        if (target < nums[mid])
            high = mid - 1;
        else if (target > nums[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int find_index(char nums[], int target)
{
    for (int i = 0; i < sizeof(nums); i++)
    {
        if (nums[i] == target) return i;
    }
    return -1;
}
