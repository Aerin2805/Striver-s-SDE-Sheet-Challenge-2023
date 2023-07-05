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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)return head;
            ListNode* temp = head;
            ListNode* dummy = temp;
int cnt = 0;
            while(temp->next){
                cnt++;
                temp = temp->next;
            }
            cnt++;
            if(cnt==1)return head;
            if(k==cnt || k%cnt==0)return head;
            k = k%cnt;
            k = cnt - k;
            k--;
            while(k--)dummy = dummy->next;
            ListNode* ans = dummy->next;
            temp->next = head;
            dummy->next = NULL;
            return ans;
    }
};