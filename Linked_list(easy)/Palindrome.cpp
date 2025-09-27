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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<int> st;
        while (temp != nullptr){
            st.push(temp->val);
            temp = temp->next;
        }
        while (head != nullptr){
            if (head->val != st.top()){return false;}
            st.pop();
            head = head->next;
        }
        return true;
    }
};  