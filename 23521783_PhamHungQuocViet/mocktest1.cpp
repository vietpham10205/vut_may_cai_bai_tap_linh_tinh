#include <iostream>
#include <vector>
using namespace std;

// Node for linked list
struct Node {
    int key;
    Node* next;
    Node(int k) : key(k), next(nullptr) {}
};

// Hash table using linked lists
class HashTable {
private:
    int M; // Table size
    double LOAD; // Load factor
    int n=0;
    vector<Node*> table;

    // Hash function
    int hash(int key) {
        return key % M;
    }

public:
    HashTable(int size, double load) : M(size), LOAD(load) {
        table.resize(M, nullptr);

        for (int index = 0; index < M; index ++ ) {
            Node* newNode = new Node(index);

            table[index] = newNode;
        }
    }

    // Insert a key into the hash table
    void insert(int key) {
          if (this->n >= (int)(LOAD * M)) { return ;}
        int index = hash(key);


        Node* newNode = new Node(key);

        
        n++;
        Node* curr = this->table[index];

        while (curr) {
            if (curr->next == nullptr) break;
            curr = curr->next;
        }
        // newNode->next = table[index];
        curr->next = newNode;
    }

    // Search for a key in the hash table
    int search(int key) {
        int index = hash(key);
        Node* curr = this->table[index]->next;
        int comparisons = 0;
        while (curr) {
            comparisons++;
            if (curr->key == key)
                return comparisons;
            curr = curr->next;
        }
        return -1; // Key not found
    }
};

int main() {
    int M, N, N_prime;
    double LOAD;
    cin >> M >> LOAD >> N;

    HashTable ht(M, LOAD);
    for (int i = 0; i < N; ++i) {
        int key;
        cin >> key;
        ht.insert(key);
    }

    cin >> N_prime;
    vector <int> dstim;
    for (int i = 0; i < N_prime; ++i) {
        int key;
        cin >> key;
        dstim.push_back(key);}
       for (int i = 0; i < N_prime; ++i)
       { 
        int comparisons = ht.search(dstim[i]);
        if (comparisons != -1)
            cout << comparisons << endl;
        else
            cout << "KHONG" << endl;
    }

    return 0;
}
