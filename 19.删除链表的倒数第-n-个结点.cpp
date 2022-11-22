/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
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
    int getlength(ListNode* head){
        ListNode* cur = head;
        int len = 0;
        while(cur != NULL){
            cur = cur -> next;
            len++;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummyhead = new ListNode(0);
    dummyhead -> next = head;
    ListNode* cur = head;
    int len = getlength(head);
    if(len == n){
        dummyhead -> next = cur -> next;
        ListNode* temp = cur;
        delete temp;
        return dummyhead -> next;
    }
    for(int i = 0;i < len - n - 1;i++){
        cur = cur -> next;
    }
    ListNode* temp = cur -> next;
    cur -> next = cur -> next -> next;
    delete temp;
    return dummyhead -> next;
    }
};
// @lc code=end
