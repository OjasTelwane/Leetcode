/*
Leetcode 19 Remove Nth Node From End of List

Linked List T(n)

Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []

Example 3:
Input: head = [1,2], n = 1
Output: [1]

Constraints:
The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz

Follow up: Could you do this in one pass?
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head->next) 
        {
            return NULL;
        }
        ListNode *pre = head, *cur = head;
        for (int i = 0; i < n; ++i) 
        {
            cur = cur->next;
        }
        if (!cur)
        { 
            return head->next;
        }
        while (cur->next) 
        {
            cur = cur->next;
            pre = pre->next;
        }
        pre->next = pre->next->next;
        return head;
    }
};