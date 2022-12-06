# Method 1 : 
*  Store addresses of nodes of first list in map while traversing
*  Traverse another list, if same address is encountered in 2nd list => intersection point
*  return that particular address

```
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
```

# Method 2 : 
* Take two pointers a and b ( a = headA, b = headB )
* Find length of each list ( La and Lb )
* Find gap distance between the lists and skip the nodes equal to the gap satrting from headin the larger list.

Exxample : 
if La = 5, Lb = 7 => B list is larger
then, gap = 7-5 = 2
skip 2 nodes starting from head of B and point b to that node

* Now just do comparisions if two nodes ( a and b ) are equal
* first equal => intersection point


# Method 3 (Optimal) : 
* Move pointer a to head of list B when a reach null, similarly with b
* Due to this the gap distance is covered 
* Now return if first equal node is found

```
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
```
