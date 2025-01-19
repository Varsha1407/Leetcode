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
    ListNode* reverseList(ListNode* head) {
        vector<int> arr;
        
        
        ListNode* temp = head;
        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        
        reverse(arr.begin(), arr.end());

       
        ListNode* newHead = nullptr;
        ListNode* current = nullptr;

        for (int val : arr) {
            if (!newHead) {
                newHead = new ListNode(val);
                current = newHead;
            } else {
                current->next = new ListNode(val);
                current = current->next;
            }
        }

        return newHead;
    }
};
