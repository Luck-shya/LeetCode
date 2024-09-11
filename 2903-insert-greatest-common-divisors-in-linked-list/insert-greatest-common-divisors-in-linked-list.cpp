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
       ListNode* current = head;

    while (current != NULL && current->next != NULL) {
        int gcdValue = __gcd(current->val, current->next->val);
        ListNode* gcdNode = new ListNode(gcdValue);
        
        // Insert the new node between current and current->next
        gcdNode->next = current->next;
        current->next = gcdNode;
        
        // Move to the next pair of nodes
        current = gcdNode->next;
    }
    
    return head;
    }
};