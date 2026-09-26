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
    struct cmp{
        bool operator()(ListNode* a ,ListNode* b){
            return a->val>b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp>pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL){
            pq.push(lists[i]);
        }
        }
        ListNode* dummyhead=new ListNode(-1);
        ListNode* dummytail=dummyhead;
        while(!pq.empty()){
            auto node=pq.top();
            pq.pop();
            dummytail->next=node;
            dummytail=dummytail->next;
            if(node->next!=NULL){
                pq.push(node->next);
            }
        }
        return dummyhead->next;

    }
};
