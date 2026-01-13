/*
 * @lc app=leetcode.cn id=1 lang=c
 * @lcpr version=30306
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h> 
#include <stdio.h>  
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1;j < numsSize;j++) {
            if (nums[i] + nums[j] == target){
                int* ret = malloc(sizeof(int) * 2) ;
                ret [0] = i;
                ret [1] = j ;
                    *returnSize = 2 ;
                    return ret;
            }
             
        }
    }
    *returnSize=0;
return NULL ;
}
// @lc code=end



/*
// @lcpr case=start
// [2,7,11,15]\n9\n
// @lcpr case=end

// @lcpr case=start
// [3,2,4]\n6\n
// @lcpr case=end

// @lcpr case=start
// [3,3]\n6\n
// @lcpr case=end

 */

