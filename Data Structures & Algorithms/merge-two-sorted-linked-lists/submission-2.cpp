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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
       ListNode dummy(0);
       ListNode* node = &dummy;

       while(list1 && list2) //While list 1 and 2 are not empty
       {
        if(list1 -> val < list2 -> val) 
        {
            node -> next = list1; // Set next as list 1 val
            list1 = list1 -> next; // Move head to nex on list 1
        }else
        {
            node -> next = list2; //Same gist
            list2 = list2 -> next;
        }
        node = node -> next; //Move dummy node to next
    }
    if(list1)
    {
        node -> next = list1; //Insert remaining
    }
    else 
    {
        node -> next = list2; // Insert remaining.
    }

    return dummy.next; //Return list
    }
};