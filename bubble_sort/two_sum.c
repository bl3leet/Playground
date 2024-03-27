#include <stdlib.h>
/*
	 Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int *result = calloc(2, sizeof(int));
	*returnSize = 2;

	for(int i = 0; i < (numsSize - 1); i++) {
		for(int j = i+1; j < numsSize; j++) {
			if(nums[i] + nums[j] == target) {
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}

	return result;
}
