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


        if(list1 ==NULL || list2==NULL){
            return list1==NULL ? list2 : list1;
        }
        if(list1->val >= list2->val){
            list2->next=mergeTwoLists(list2->next,list1);
            return list2;
        }
        else{
 list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
    }
};