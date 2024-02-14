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
    ListNode* swapNodes(ListNode* head, int k) {  
         int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }   
        
        int firstIndex = k - 1;
        int secondIndex = cnt - k;
        
        ListNode* firstNode = nullptr;
        ListNode* secondNode = nullptr;
        temp = head;
        for (int i = 0; i < cnt; i++) {
            if (i == firstIndex) firstNode = temp;
            if (i == secondIndex) secondNode = temp;
            temp = temp->next;
        }
       
        int tempVal = firstNode->val;
        firstNode->val = secondNode->val;
        secondNode->val = tempVal;
        
        return head;
        
    }
};