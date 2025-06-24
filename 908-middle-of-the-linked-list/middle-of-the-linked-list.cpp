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
    ListNode* middleNode(ListNode* head) {
        // int count =0;
        // ListNode*temp;
        // temp=head;
        // while(temp)
        // {
        //     count++;
        //     temp=temp->next;
        // }
        // temp=head;
        // count/=2;
        // while(count--)
        // {
        //     temp=temp->next;
        // }
        // return temp;
        
        ListNode*lazy=head;
        ListNode*fast=head;
        while(fast->next)
        {
            fast=fast->next;
            if(fast->next)
            {
                fast=fast->next;
                lazy=lazy->next;
            }
            else{
                return lazy->next;
            }
           
        }
         return lazy;
    }
};