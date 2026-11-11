
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* start = head;
        ListNode* curent = head;
        ListNode* end = head;

        ListNode* groupPrev = nullptr;
        int count = 0;

        while (end != nullptr) {
            end = end->next;
            count++;

            if (count == k) {
                ListNode* prev = end;
                curent = start;

                while (curent != end) {
                    ListNode* temp = curent->next;
                    curent->next = prev;
                    prev = curent;
                    curent = temp;
                }

                if (groupPrev == nullptr) {
                    head = prev;
                } else {
                    groupPrev->next = prev;
                }

                groupPrev = start;
                start = end;
                curent = start;
                count = 0;
            }
        }

        return head;
    }
};
