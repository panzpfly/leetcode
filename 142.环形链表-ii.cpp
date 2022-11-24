/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
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
    ListNode *detectCycle(ListNode *head) {
        //双指针,快慢指针
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL&&fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            //相遇即有环
            if(fast == slow){
                //从相遇的位置和头部出发,相遇的位置即是环的入口
                ListNode* index1 = fast;
                ListNode* index2 = head;
                while(index1 != index2){
                    index1 = index1 -> next;
                    index2 = index2 -> next;
                }
                return index1;
            }
        }
        return NULL;
    }
};
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head){
    // 哈希表
//         unordered_set<ListNode*> ans;
//         while(head != NULL){
//             if(ans.count(head)){
//                 return head;
//             }
//             ans.insert(head);
//             head = head -> next;
//         }
//         return NULL;
//     }
// };
// @lc code=end

