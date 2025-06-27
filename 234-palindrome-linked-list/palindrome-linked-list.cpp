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
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        vector<int>vec;
        while(temp)
        {
            vec.push_back(temp->val);
            temp=temp->next;

        }
        int first=0;
        int last=vec.size()-1;
        bool flag=true;
        while(first<=last)
        {
            if(vec[first]!=vec[last]){
            flag=false;
            break;
            }
            first++;
            last--;
        }
    return flag;
        
    }
};