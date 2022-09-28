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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr1 = head, *ptr2 = head , *temp = ptr1;
        int count = 0;
        while(ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
            ++count;
            if(count > n-1) 
            {
                temp = ptr1; 
                ptr1 = ptr1->next; 
                --count;
            }
        }
        if(ptr1 == head) 
            head = ptr1->next;
        else 
            temp->next = temp->next->next;
        return head;
    }
};