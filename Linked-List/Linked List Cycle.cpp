Question Link -> https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    bool loopDetect(ListNode* &head){
        //take two pointers fast and slow and assign them to head
        ListNode *fast, *slow;
        fast=head;
        slow=head;
        //increment head by two and slow by 1
        //the loop executes till fast reaches null
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            //if slow and fast are at same position 
            //this means that the ll has loop
            if(slow==fast){
                return true;
            }
        }

        //if fast reaches null this means there is no loop
        return false;
    }
public:
    bool hasCycle(ListNode *head) {
        return loopDetect(head);
    }
};
