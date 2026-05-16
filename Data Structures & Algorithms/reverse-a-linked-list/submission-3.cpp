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
    ListNode* reverseList(ListNode* head) 
    {
        if (!head) 
        {
            return nullptr;
        }

        ListNode* newHead = head; //create a newHead
        if (head->next) //If theres a next
        {
            newHead = reverseList(head->next); //Go through the rest of the nodes until the end. And set the new
            head->next->next = head; //Access the pointer and sets it to the head to reverse the link.
        }
        head->next  = nullptr; 

        return newHead;
    }
};