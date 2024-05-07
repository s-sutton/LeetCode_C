#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int numsAmount = (sizeof(nums) / sizeof(nums[0]));
    int i;
    int j;
    int para1;
    int para2;
    int para1_target = 0;
    int para2_target = 0;
    int answer[] = {0,0};

    for (int i = 0; i < numsAmount; i++) { /* Loops through every element of the array */
        para1 = nums[i];

        for (j = (i + 1); j <= numsAmount; j++) {
            para2 = (para1 + nums[j]);
            if (para2 == target) {
                answer[0] = i;
                answer[1] = j;
                printf("%d\n", answer[0]);
                printf("%d\n", answer[1]);
            }
        }
    }
    
    return answer;
}

int main() {
  int nums1[] = {2, 7, 11, 15};
  int target1 = 18;
  twoSum(nums1, 4, target1, 0);
  
  return 0;
}
