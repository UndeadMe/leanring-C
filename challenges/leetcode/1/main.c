// two sum
// https://www.geeksforgeeks.org/length-of-array-in-c/
// https://stackoverflow.com/questions/9726922/how-to-print-the-array
// https://www.youtube.com/watch?v=eE9MnoS0lc0
// https://www.w3schools.com/c/c_arrays_size.php
// https://www.geeksforgeeks.org/how-arrays-are-passed-to-functions-in-cc/

#include <stdio.h>

int twoSum(int nums[], int numsSize, int target) {
    for (int i = 0; i < numsSize; ++i) 
        for (int j = i+1; j < numsSize; ++j)
            if (nums[i] + nums[j] == target)
                printf("%d %d", i, j);

    return 0;
}

int main() {
    int nums[] = {1, 3, 4, 5, 10};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    twoSum(nums, numsSize, 13);

    return 0;
}