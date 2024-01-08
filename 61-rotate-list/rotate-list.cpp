class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // If the list is empty or rotation is unnecessary, return the list
        if (!head || k == 0) return head;

        int listLength = 1; // Initialize the length of the linked list
        ListNode *listTail = head; // Pointer to the end of the list

        // Traverse the list to find its length and set the tail pointer
        while (listTail->next) {
            listLength++;
            listTail = listTail->next;
        }

        k = k % listLength; // Calculate the effective rotation amount
        if (k == 0) return head; // If k is a multiple of length, no change is needed

        ListNode *rotationPoint = head;

        // Find the node that will become the new tail after rotation
        for (int i = 0; i < listLength - k - 1; i++) {
            rotationPoint = rotationPoint->next;
        }

        ListNode *newHead = rotationPoint->next; // Node after rotationPoint becomes the new head
        rotationPoint->next = nullptr; // Break the list to form the new tail
        listTail->next = head; // Connect the original tail to the original head to make a circular list

        return newHead; // Return the new head of the rotated list
    }
};
