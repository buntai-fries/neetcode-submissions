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
    void reorderList(ListNode* head) {
        vector<ListNode*> node;
        ListNode* curr = head;
        while (curr) {
            node.push_back(curr);
            curr = curr->next;
        }
        int i = 0;
        int j = node.size() - 1;
        while (i < j) {
            node.at(i)->next = node.at(j);
            i++;
            if (i >= j) { break; }
            node.at(j)->next = node.at(i);
            j--;
        }
        node.at(i)->next = nullptr;
    }
};
