#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);      // node giả ở trước head
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* cur = head;

        while (cur != nullptr) {
            if (cur->val == val) {
                prev->next = cur->next;  // bỏ qua cur
                delete cur;              // xoá node khỏi bộ nhớ
                cur = prev->next;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }
        return dummy.next;  // trả về head mới
    }
};