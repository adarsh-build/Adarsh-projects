class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> v;

        for(auto head : lists) {
            while(head != nullptr) {
                v.push_back(head->val);
                head = head->next;
            }
        }

        sort(v.begin(), v.end());

        ListNode dummy(0);
        ListNode* tail = &dummy;

        for(int x : v) {
            tail->next = new ListNode(x);
            tail = tail->next;
        }

        return dummy.next;
    }
};