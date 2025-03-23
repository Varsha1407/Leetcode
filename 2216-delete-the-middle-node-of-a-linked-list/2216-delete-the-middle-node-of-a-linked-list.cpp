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
    ListNode* deleteMiddle(ListNode* head) {
        vector<int> nums;
        ListNode* temp=head;
        while(temp){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int len=nums.size();
        int mid=len/2;
        cout<<mid;
        nums.erase(nums.begin()+mid);
        /*vector<int> dummy1;
        vector<int> dummy2;
        for(int i=0;i<mid;i++){
            dummy1.push_back(nums[i]);
        }
        for(int i=mid+1;i<len;i++){
            dummy2.push_back(nums[i]);

        }
        dummy1.insert(dummy1.end(),dummy2.begin(),dummy2.end());*/
        ListNode* dummy=new ListNode(0);
        ListNode* current=dummy;
        for(int num:nums){
            current->next=new ListNode(num);
            current=current->next;
        }
       return dummy->next; 
    }
};