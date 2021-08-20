/*
Problem:    83. Remove Duplicates from Sorted List
Date:       August 20, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/remove-duplicates-from-sorted-list/

Question:
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

Example 1:
Input: head = [1,1,2]
Output: [1,2]

Example 2:
Input: head = [1,1,2,3,3]
Output: [1,2,3]
 

Constraints
The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        while(current != NULL && current->next != NULL){
            if(current->val == current->next->val){
                current->next = current->next->next;
            }
            else{
                current = current->next;
            }
        }
        return head;
    }
    
    /*ListNode* deleteDuplicates(ListNode* head) {      
        ListNode* temp = head;
        ListNode* prev;
        if(head == NULL)
            return head;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
            while(prev->val == temp->val){
                if(temp->next == NULL)
                    break;
                prev->next = temp->next;
                if(prev->next == NULL)
                    break;
                temp = prev->next;
            }
        }
        
        if(temp->val == prev->val){
            prev->next = NULL;
        }

        return head;
    }*/
};
