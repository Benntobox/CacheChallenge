//
//  main.cpp
//  CacheChallenge
//
//  Created by Benjamin Boyle on 9/23/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
    Node* next;
    Node* prev;
    int value;
    int key;
    Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
    Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
    
protected:
    map<int,Node*> mp; //map the key to the node in the linked list
    int cp;  //capacity
    Node* tail; // double linked list tail pointer
    Node* head; // double linked list head pointer
    virtual void set(int, int) = 0; //set function
    virtual int get(int) = 0; //get function
    
};

class LRUCache: Cache {
    map<int, Node*> mp;
    int cp;
    Node* tail;
    Node* head;
    void set(int, int);
    int get(int);
public:
    LRUCache(int l) { cp = l; }
    
};

void LRUCache::set(int key, int val) {
    if (mp.find(key) != mp.end()) {
        if (mp.size() == cp) {
            mp[key] = val;
            
        }
    }
}

int LRUCache::get(int a) {
    
    return 0;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
