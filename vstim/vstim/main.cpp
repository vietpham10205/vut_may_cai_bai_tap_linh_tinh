#include <iostream>
#include<vector>

using namespace std;

class BTree_node
{
public: 
    vector<int>keys;
    vector<BTree_node*>children;
    bool is_leaf() {
        
        if (children.empty() == 1) return true;
        else return false;
    }
    friend class BTree;
};

class BTree
{
public:
    BTree_node* root;
    int _m;
public:
    BTree(int bac_m)
    {
        if (bac_m % 2 == 0)
        {
            bac_m = bac_m / 2 + 1;
        }
        this->_m = bac_m;
        root = NULL;
    }
    BTree_node* split(BTree_node* i, BTree_node* p);
    void insertkey(int key);
    bool empty()
    {
        return root == NULL;
    }
};

BTree_node* BTree::split(BTree_node* i, BTree_node* p)
{
    if (i->keys.size() < this->_m)
    { //No need to split
        return NULL;
    }
    //Create new BTree_node
    auto n = new BTree_node;
    auto move_up = i->keys[i->keys.size() / 2];
    move(i->keys.begin() + i->keys.size() / 2 + 1, i->keys.end(), back_inserter(n->keys));
    if (!i->is_leaf()) {
        move(i->children.begin() + i->keys.size() / 2 + 1, i->children.end(),
            back_inserter(n->children));
    }
    if (!i->is_leaf()) i->children.resize(i->keys.size() / 2 + 1);
    i->keys.resize(i->keys.size() / 2);
    if (p == NULL) { // if i has no parent
        p = new BTree_node;
        p->children.emplace_back(i);
    }
    int ip = lower_bound(p->keys.begin(), p->keys.end(), move_up) - p->keys.begin();
    p->keys.insert(p->keys.begin() + ip, move_up);
    p->children.insert(p->children.begin() + ip + 1, n);
    return p;
}
void BTree::insertkey(int key) {
    // Tim vi tri de chen khoa moi
    BTree_node* node = this->root;
    BTree_node* nodecha;

    while (!(node->is_leaf())) {

        int i = 0;
        while (i < node->keys.size() && key > node->keys[i]) {
            i++;
        }
        nodecha = node;
        node = node->children[i];
    }
    // Chen khoa moi vao nut la
    int j = 0;
    while (j < node->keys.size() && key > node->keys[j]) {
        j++;
    }
    node->keys.insert(node->keys.begin() + j, key);


}

int main()
{
    BTree a(3);
    vector<int> keys = { 10 };

    for (int key : keys) {
        a.insertkey(key);
    }
    /* int n;
      cin>>n;
      for(int i=0;i<n ;i++)
      {
          int data;
          cin>> data;
          a.insert(data);
      }
      */
    cout << 0;
    return 0;
}

