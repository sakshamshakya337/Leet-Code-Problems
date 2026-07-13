#pragma once

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
    vector<Node*> children;
    Node* random;

    Node()
        : val(0), left(nullptr), right(nullptr),
          next(nullptr), random(nullptr) {}

    Node(int _val)
        : val(_val), left(nullptr), right(nullptr),
          next(nullptr), random(nullptr) {}
};

class NestedInteger {
public:
    bool isInteger() const { return true; }
    int getInteger() const { return 0; }
    void setInteger(int) {}
    void add(const NestedInteger&) {}
    const vector<NestedInteger>& getList() const {
        static vector<NestedInteger> dummy;
        return dummy;
    }
};
