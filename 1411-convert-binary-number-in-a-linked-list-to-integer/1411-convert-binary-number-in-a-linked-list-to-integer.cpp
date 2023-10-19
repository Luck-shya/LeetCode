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
    int getDecimalValue(ListNode* head) {
        vector<int>a;
        ListNode* temp=head;
        while(temp!=NULL){
            int d = temp->val;
            a.push_back(d);
            temp=temp->next;
        }
        reverse(a.begin(),a.end());
        int u=0;
        for(int i=0;i<a.size();i++){
            u+=a[i]*pow(2,i);
        }
        return u;
    }
};