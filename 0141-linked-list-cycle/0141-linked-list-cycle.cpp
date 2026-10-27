/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return false;
    unordered_map<ListNode*,int>s;
        ListNode* slow=head,*fast=head;
        while(fast->next!=NULL){
            s[fast->next]++;
            if(s[fast->next]>1)
                return true;
            fast=fast->next;
            
        }
        return false;
            
     
        
        
    }
};