
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> v;

        ListNode* temp = head;

        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        for (int i = 1; i < v.size(); i++) {
            int key = v[i];
            int j = i - 1;

            while (j >= 0 && v[j] > key) {
                v[j + 1] = v[j];
                j--;
            }

            v[j + 1] = key;
        }

        temp = head;
        int i = 0;

        while (temp != NULL) {
            temp->val = v[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};
