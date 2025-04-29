/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
}
**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int numsAmount = (sizeof(nums) / sizeof(nums[0]));
    int i;
    int j;
    int para1;
    int para2;
    int* answer = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) { /* Loops through every element of the array */
        para1 = nums[i];

        for (j = (i + 1); j < numsSize; j++) {
            para2 = (para1 + nums[j]);
            if (para2 == target) {
                answer[0] = i;
                answer[1] = j;
            }
        }
    }

    return answer;
    
}
