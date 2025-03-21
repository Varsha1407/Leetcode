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
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return nullptr; 

    
        vector<int> values;
        ListNode* temp = head;
        while (temp) {
            values.push_back(temp->val);
            temp = temp->next;
        }

       
        vector<int> odd, even;
        for (size_t i = 0; i < values.size(); i++) {
            if (i % 2 == 0) 
                odd.push_back(values[i]);
            else
                even.push_back(values[i]);
        }

       
        odd.insert(odd.end(), even.begin(), even.end());

        
        ListNode* newHead = new ListNode(odd[0]);
        ListNode* current = newHead;
        for (size_t i = 1; i < odd.size(); i++) {
            current->next = new ListNode(odd[i]);
            current = current->next;
        }

        return newHead;
    }
};


