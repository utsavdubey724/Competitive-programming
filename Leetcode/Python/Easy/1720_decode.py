"""
Problem:    1720. Decode XORed Array
Date:       August 21, 2021
Author:     Utsav Dubey, utsavdubey.724@gmail.com
Difficulty: Easy
Source:     https://leetcode.com/problems/decode-xored-array/

Question:
There is a hidden integer array arr that consists of n non-negative integers.

It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].

You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

Return the original array arr. It can be proved that the answer exists and is unique.


Example 1:
Input: encoded = [1,2,3], first = 1
Output: [1,0,2,1]
Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]

Example 2:
Input: encoded = [6,2,7,3], first = 4
Output: [4,2,0,7,4]
 

Constraints:
2 <= n <= 10^4
encoded.length == n - 1
0 <= encoded[i] <= 10^5
0 <= first <= 10^5
"""


class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        n = len(encoded)
        arr = [first]
        for i in range(n):
            first = first ^ encoded[i]
            arr.append(first)
        return arr
    """
    def decode(self, encoded: List[int], first: int) -> List[int]:
        n = len(encoded)
        arr = [first]
        for i in range(n):
            arr.append(arr[len(arr)-1] ^ encoded[i])        
        return arr
    """
