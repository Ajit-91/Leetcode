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
        unordered_map<ListNode*, int> mp;
        // store addresses of nodes of first list
        while(headA){
            mp[headA]++;
            headA = headA->next;
        }

        while(headB){
            // if same address is encountered in 2nd list => intersection point
            if(mp.count(headB) > 0){
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
};