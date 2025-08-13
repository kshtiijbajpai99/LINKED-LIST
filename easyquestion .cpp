
// Problem: Count nodes of a linked list
// Link: https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
// Approach: Traverse the linked list and increment a counter for each node.

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

class Solution {
public:
    int getCount(struct Node* head) {
        int count = 0;
        while (head != NULL) {
            count++;
            head = head->next;
        }
        return count;
    }
};

// Local test
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Solution ob;
    cout << "Node count: " << ob.getCount(head) << endl; // Expected: 3
}
