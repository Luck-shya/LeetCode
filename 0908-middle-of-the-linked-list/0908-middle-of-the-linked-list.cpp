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
        ListNode* temp=head;
        ListNode* dum = head;
        int cnt=1;
        while(temp->next!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==1){
            return head; 
        }
        int i=1;
        while(i<cnt/2){
            dum = dum->next;
            i++;
        }   
        return dum->next;           
    }
};