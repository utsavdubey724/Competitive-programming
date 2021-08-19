/*
Problem:    80. Remove Duplicates from Sorted Array II
Date:       July 24, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Medium
Source:     https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

Question:
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the 
elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, 
if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the 
first k elements.
Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

Custom Judge:
The judge will test your solution with the following code:
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length
int k = removeDuplicates(nums); // Calls your implementation
assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 
Example 1:
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:
Input: nums = [0,0,1,1,1,1,2,3,3]
Output: 7, nums = [0,0,1,1,2,3,3,_,_]
Explanation: Your function should return k = 7, with the first seven elements of nums being 0, 0, 1, 1, 2, 3 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:
1 <= nums.length <= 3 * 10^4
-10^4 <= nums[i] <= 10^4
nums is sorted in non-decreasing order.
*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int count=0,flag=1,i=0;
        if(nums.size()<3)
            return nums.size();
        while(flag){
            for(i=0;i<nums.size()-2;){
                if(nums[i]==nums[i+1] && nums[i]==nums[i+2]){
                    nums.erase(nums.begin()+i);
                }
                else
                    i++;
                if(nums.size()<3)
                    break;
            }
            i--;
            if(i==nums.size()-3)
                flag=0;
        }
        return nums.size();
    }
};
