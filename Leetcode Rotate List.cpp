/* Leetcode Rotate List
 Given the head of a linked list, rotate the list to the right by k places.
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3] */
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next ){
            return head;
        }
        else{
            ListNode* temp=head;
            ListNode* tail=NULL;
            int count=0;
            while(temp->next!=NULL){
                temp=temp->next;
                count++;
            }
            k=k%(count+1);
            tail=temp;
            while(k>0){
                ListNode* temp = head;
                while(temp->next->next!=NULL){
                    temp=temp->next;
                }
                tail=temp;
                temp=temp->next;
                temp->next=head;
                head=temp;
                tail->next=NULL;
                k--;
            }
        }
     return head;   
    }
};