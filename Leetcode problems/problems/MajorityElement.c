#include <stdio.h>

int findMajorityElement(int* nums, int size) {
    int candidate = 0, count = 0;

    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > size / 2) {
        return candidate;
    } else {
        return -1; 
    }
    return candidate;
}
 
int main() {
    int nums[] = {2, 2,2,1,3,4,2,4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = findMajorityElement(nums, size);
    if (result != -1) {
        printf("The majority element is: %d\n", result);
    } else {
        printf("No majority element found.\n");
    }

    return 0;
}