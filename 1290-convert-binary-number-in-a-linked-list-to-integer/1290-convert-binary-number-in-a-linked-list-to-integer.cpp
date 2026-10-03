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

    int power(int n){
    int ans = 1;

    for(int i=0; i<n; i++){
        ans *= 2;
    }

    return ans;
    }

    int getDecimalValue(ListNode* head) {
        string bi="";

        while(head != NULL){
            bi += char('0' + head->val);
            head=head->next;
        }
        
        int dec=0;
        int pos=0;
        for(int i=bi.size()-1; i>=0; i--){
            int p=power(pos);
            dec+=(bi[i]-'0')*p;
            pos++;
        }

        return dec;
    }

};