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
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;

        while(temp->next != NULL) {
            int g = gcd(temp->val, temp->next->val);

            ListNode* nextNode = temp->next;
            ListNode* newNode = new ListNode(g);

            temp->next = newNode;
            newNode->next = nextNode;

            temp = nextNode;
        }

        return head;
    }
};
