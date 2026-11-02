/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
         Node* temp=head;
         while(temp!=NULL){
            if(temp->child!=NULL){
                Node* newnode=temp->next;
                temp->next=flatten(temp->child) ;
                temp->child=NULL;
                temp->next->prev=temp;
        
                while(temp->next!=NULL){
                    temp=temp->next;}
                    temp->next = newnode;
                    if(newnode!=NULL) {
                    newnode->prev=temp;
                }  
            }

            else
            temp=temp->next;
         }
         return head;
    }
};