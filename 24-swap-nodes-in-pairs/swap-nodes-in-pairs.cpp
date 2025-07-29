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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
            return head;

        ListNode *prev = NULL;
        ListNode *first = head;
        ListNode *second = head->next;
        ListNode *last = head->next->next;

        while (first && second)
        {
            first->next = last;
            second->next = first;

            if (prev == NULL) {
                head = second;
            } else {
                prev->next = second;
            }

            prev = first;
            first = last;

            if (first) {
                second = first->next;
                last = (second) ? second->next : NULL;
            } else {
                second = NULL;
            }
        }

        if (first) {
            prev->next = first;
        }

        return head;
    }
};
