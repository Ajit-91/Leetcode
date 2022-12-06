/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b){
            a = a->next;
            b = b->next;
            // if b reaches end move it to list A head
            if(a && !b){
                b = headA;
            }
            // if a reaches end move it to list B head
            if(b && !a){
                a = headB;
            }
            // After doing this the gap between two lists is covered 
            // distance from current a to tail(A) equals distance from current b to tail(B)
        }

        // here a == b => a can be intersection point or null
        return a;
    }
};