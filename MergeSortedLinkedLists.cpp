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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        if(!list1 && !list2){
            return nullptr;
        }

        if(!list1 && list2){
            return list2;
        }

        if(list1 && !list2){
            return list1;
        }

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                
                tail->next = list1;
                tail = tail->next;
                list1 = list1->next;
                
            }
            else {
                tail->next = list2;
                tail = tail->next;
                list2 = list2->next;
            }    
        }

        if(list1 != nullptr){
            tail->next = list2;
        }
        else if (list2 != nullptr){
            tail->next = list2;
        }

    return dummyHead->next;
    }
};
