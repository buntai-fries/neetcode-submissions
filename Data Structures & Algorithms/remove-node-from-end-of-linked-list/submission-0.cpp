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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> arr;
        while (head) {
            arr.push_back(head);
            head = head->next;
        }
        int num = arr.size() - n;
        arr.erase(arr.begin() + num);
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        for (const auto& i : arr) {
            curr->next = i;
            curr = curr->next;
        }
        curr->next = nullptr;
        ListNode* res = dummy->next;
        delete dummy;
        return res;
    }
};
