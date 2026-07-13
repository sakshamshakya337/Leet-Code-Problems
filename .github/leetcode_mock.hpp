#pragma once

#include <bits/stdc++.h>

using namespace std;

/*===============================
  Linked List
================================*/

struct ListNode {

    int val;
    ListNode* next;

    ListNode()
        : val(0), next(nullptr) {}

    ListNode(int x)
        : val(x), next(nullptr) {}

    ListNode(int x, ListNode* next)
        : val(x), next(next) {}

};

/*===============================
  Binary Tree
================================*/

struct TreeNode {

    int val;

    TreeNode* left;
    TreeNode* right;

    TreeNode()
        : val(0),
          left(nullptr),
          right(nullptr) {}

    TreeNode(int x)
        : val(x),
          left(nullptr),
          right(nullptr) {}

    TreeNode(int x,
             TreeNode* left,
             TreeNode* right)
        : val(x),
          left(left),
          right(right) {}

};

/*===============================
  Generic Node
================================*/

class Node {

public:

    int val;

    Node* left;
    Node* right;

    Node* next;

    Node* random;

    vector<Node*> children;

    Node()
        : val(0),
          left(nullptr),
          right(nullptr),
          next(nullptr),
          random(nullptr) {}

    Node(int x)
        : val(x),
          left(nullptr),
          right(nullptr),
          next(nullptr),
          random(nullptr) {}

};

/*===============================
  Nested Integer
================================*/

class NestedInteger {

public:

    bool isInteger() const {
        return true;
    }

    int getInteger() const {
        return 0;
    }

    void setInteger(int) {}

    void add(const NestedInteger&) {}

    const vector<NestedInteger>& getList() const {
        static vector<NestedInteger> dummy;
        return dummy;
    }

};

/*===============================
  LeetCode Interfaces
================================*/

class MountainArray {

public:

    int get(int) const {
        return 0;
    }

    int length() const {
        return 0;
    }

};

class BinaryMatrix {

public:

    int get(int, int) const {
        return 0;
    }

    vector<int> dimensions() const {
        return {0,0};
    }

};

class ArrayReader {

public:

    int get(int) const {
        return 0;
    }

    int compareSub(int,int,int,int) const {
        return 0;
    }

    int length() const {
        return 0;
    }

};

class HtmlParser {

public:

    vector<string> getUrls(string) {
        return {};
    }

};

class CustomFunction {

public:

    int f(int,int) {
        return 0;
    }

};

class Robot {

public:

    bool move() {
        return true;
    }

    void turnLeft() {}

    void turnRight() {}

    void clean() {}

};

class Sea {

public:

    bool hasShips(vector<int>, vector<int>) {
        return false;
    }

};

class ImmutableListNode {

public:

    void printValue() {}

    ImmutableListNode* getNext() {
        return nullptr;
    }

};

class VersionControl {

public:

    bool isBadVersion(int) {
        return false;
    }

};

class GuessGame {

public:

    int guess(int) {
        return 0;
    }

};

class Master {

public:

    int guess(string) {
        return 0;
    }

};

struct Employee {

    int id;
    int importance;
    vector<int> subordinates;

};
