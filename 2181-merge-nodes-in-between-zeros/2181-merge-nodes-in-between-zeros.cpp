
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        int sum = 0;
        ListNode* temp = head->next;

        while(temp != NULL) {
            if(temp->val != 0) {
                sum += temp->val;
            }
            else {
                tail->next = new ListNode(sum);
                tail = tail->next;
                sum = 0;
            }

            temp = temp->next;
        }

        tail->next = NULL;
        return dummy.next;
    }
};
