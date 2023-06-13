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
    
    ListNode* middle(ListNode* head){
        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(head->next == NULL) return slow->next;
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode *curr = head, *prev = NULL, *next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        ListNode *mid = middle(head);
        ListNode *last = reverse(mid);
        ListNode *curr = head;
        while(last != NULL){
            if(curr->val != last->val) return false;
            curr = curr->next;
            last = last->next;
        }
        return true;
    }
};