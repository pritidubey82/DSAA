class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        int length = 0;
        ListNode* temp = head;

        // Step 1: Find the length of the list
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        // Step 2: Adjust k
        k = k % length;
        if (k == 0) {
            return head;
        }

        // Step 3: Move (length - k) steps
        int traverse = length - k;
        temp = head;
        for (int i = 1; i < traverse; i++) {
            temp = temp->next;
        }

        // Step 4: Break and rearrange
        ListNode* temp2 = temp;
        ListNode* newhead = temp->next;
        temp2->next = NULL;

        // Step 5: Connect new tail to old head
        temp = newhead;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = head;

        return newhead;
    }
};
