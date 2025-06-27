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
        //    if (!head || !head->next || k == 0) return head;
        // ListNode* temp = head;

        // int count = 0;
        // while (temp) {
        //     count++;
        //     temp = temp->next;
        // }
        // vector<int> vec(count);
        // temp = head;
        // int i = 0;
        // while (temp) {
        //     vec[(i + k) % count] = temp->val;
        //     temp = temp->next;
        //     i++;
        // };
        // ListNode* new_head = NULL;
        // for (int i = count - 1; i >= 0; i++) {
        //     if (new_head == NULL) {

        //         new_head = new ListNode(vec[i]);

        //     } else {
        //         ListNode* temp;
        //         temp = new ListNode(vec[i]);
        //         temp->next = new_head;
        //         new_head = temp;
        //     }
        // }
        // return new_head;

        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        int count =0;
        ListNode *temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        };
        k=k%count;
        if(k==0)
        {
            return head;
        }
        count-=k;
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(count--)
        {
            prev=curr;
            curr=curr->next;

        };
        prev->next=NULL;
        ListNode *tail=curr;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        };
        tail->next=head;
        head=curr;
        return head;
    }
};