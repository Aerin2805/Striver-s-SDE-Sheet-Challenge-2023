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
#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
 ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
      
    if(!head || !head->next) return true;

    ListNode* slow = head;
    ListNode* fast = head;
 
      while(fast->next && fast->next->next){
          slow = slow->next;
          fast = fast->next->next;
      }

      slow->next = reverseList(slow->next);

      slow = slow->next;

      while(slow){
          if(head->val!=slow->val) return false;

          head = head->next;
          slow = slow->next;
      }

return true;
    }
};