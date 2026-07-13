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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* copy = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        int half = ceil(count/2);
        for(int i=1;i<=half;i++){
            copy = copy->next;
        }
        return copy;
    }
};