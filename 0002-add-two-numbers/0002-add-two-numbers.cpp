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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1=l1,*temp2=l2;
        long digit1=0,digit2=0;
        int carry=0;
        int x;
    ListNode *newhead=NULL, *newtemp=NULL;
        while(temp1!=NULL||temp2!=NULL){
            if(temp1==NULL){
                  x=0+temp2->val+carry;
            }
            else if(temp2==NULL){
                  x=0+temp1->val+carry;
            }
            else{
             x=temp1->val+temp2->val+carry;}
          
            if(x>9){
            x=x%10;
            carry=1;}
            else carry =0;
            ListNode* sum=new ListNode(x);
            if(newhead==NULL){
                newhead=sum;
                newtemp=sum;

            }
            else{
                newtemp->next=sum;
                newtemp=newtemp->next;
                }
            if(temp1!=NULL)
            temp1=temp1->next;
            if(temp2!=NULL)
            temp2=temp2->next;


        

        }
        if((carry==1)&&(temp1==NULL||temp2==NULL))
            newtemp->next=new ListNode(carry);
        return newhead;
        
    }
};