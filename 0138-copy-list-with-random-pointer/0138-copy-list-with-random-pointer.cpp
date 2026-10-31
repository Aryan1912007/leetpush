/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> address;
        Node *oldtemp=head, *newtemp=NULL, *newhead=NULL;
    
        while(oldtemp!=NULL){
        
        
        Node *newcopy=new Node(oldtemp->val);
         address[oldtemp]=newcopy;
        if(newhead==NULL){
            newhead=newcopy;
            newtemp=newcopy;
        }
        else{
        newtemp->next=newcopy;
          newtemp=newtemp->next;}
        oldtemp=oldtemp->next;
      
        }
        oldtemp=head;
        newtemp=newhead;
        while(oldtemp!=NULL){
            if(oldtemp->random!=NULL)
            newtemp->random=address[oldtemp->random];
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;

        }

        return newhead;
        
    }
};