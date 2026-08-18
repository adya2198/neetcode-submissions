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
        ListNode* temp;
        if(list1 == NULL)return list2;
        else if(list2 == NULL)return list1;
        if(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                temp=list1;
            }
            else{
                temp=list2;
            }
        }
        while(list1 != nullptr && list2 != nullptr){
            ListNode*temp1=list1;
            while(list1 != nullptr && list2 != nullptr && list1->val <= list2->val){
                temp1=list1;
                list1=list1->next;
            }
            if(temp1 != list1){
            temp1->next=list2;
            }
            ListNode*temp2=list2;
            while(list2 != nullptr && list1 != nullptr && list1->val > list2->val){
                temp2=list2;
                list2=list2->next;
            }
            if(temp2 != list2){
            temp2->next=list1;
            }
            if(list1 == nullptr){
                temp1->next=list2;
                break;
            }
            if(list2 == nullptr){
                temp2->next=list1;
                break;
            }
        }
        return temp;
    }
};
