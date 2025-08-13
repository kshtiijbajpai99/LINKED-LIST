// Problem: Insert at Beginning of Linked List
// Link: https://practice.geeksforgeeks.org/problems/linked-list-insertion-at-beginning/1
// Approach: Create new node, point its next to current head, then update head.

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

class Solution {
public:
    Node *insertAtBegining(Node *head, int x) {
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        return head;
    }
};

// Local test
int main() {
    Node* head = NULL;

    Solution ob;
    head = ob.insertAtBegining(head, 30);
    head = ob.insertAtBegining(head, 20);
    head = ob.insertAtBegining(head, 10);

    // Printing
    Node* curr = head;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    // Expected: 10 20 30
}
