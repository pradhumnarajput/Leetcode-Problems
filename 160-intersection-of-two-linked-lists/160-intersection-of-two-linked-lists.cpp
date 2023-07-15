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
    
    int diff(ListNode *headA, ListNode *headB){
        int len1 = 0, len2 = 0;
        while(headA != NULL){
            len1++;
            headA = headA->next;
        }
        while(headB != NULL){
            len2++;
            headB = headB->next;
        }
        return len1 - len2;
        
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int d = diff(headA, headB);
        if(d < 0){
            while(d != 0){
                headB = headB->next;
                d++;
            }
        }
        else{
            while(d != 0){
                headA = headA->next;
                d--;
            }
        }
        
        while(headA != NULL && headB != NULL){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};