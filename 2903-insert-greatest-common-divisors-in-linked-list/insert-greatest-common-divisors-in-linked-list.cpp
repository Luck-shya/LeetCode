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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) return head; // No operation if the list has less than 2 nodes
        
        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr != NULL) {
            int gcdValue = __gcd(prev->val, curr->val);
            ListNode* gcdNode = new ListNode(gcdValue);
            
            // Insert the new node between prev and curr
            prev->next = gcdNode;
            gcdNode->next = curr;
            
            // Move to the next pair of nodes
            prev = curr;
            curr = curr->next;
        }
        
        return head;
    }
};
