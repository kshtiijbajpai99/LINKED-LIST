// Problem: Search an element in Linked List
// Link: https://practice.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1
// Approach: Traverse the linked list and compare each node's data with the key.

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

class Solution {
public:
    bool searchKey(int n, Node* head, int key) {
        for (int i = 0; i < n && head != NULL; i++) {
            if (head->data == key) {
                return true;
            }
            head = head->next;
        }
        return false;
    }
};

// Local test
int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Solution ob;
    cout << (ob.searchKey(3, head, 20) ? "Found" : "Not Found") << endl; // Expected: Found
}
