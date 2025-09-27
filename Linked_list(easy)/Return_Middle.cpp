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
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode*p = head;
        while (p != nullptr){
            cnt++;
            p = p->next;
        }
        p = head;
        int i = cnt/2;
        while (i){
            p = p->next;
            i--;
        }
        return p;
    }
};