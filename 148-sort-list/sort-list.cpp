class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> data;
        while(head != nullptr) {
            data.push_back(head->val);
            head = head->next;
        }
        sort(data.begin(), data.end());
        head = new ListNode();  
        ListNode* current = head;
        for (int i = 0; i < data.size(); ++i) {
            current->next = new ListNode(data[i]);
            current = current->next;
        }
        return head->next;  
    }
};