#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 100003   // Prime number for better distribution

// Node for linked list (chaining)
typedef struct Node {
    long long key;
    long long count;
    struct Node* next;
} Node;

Node* hashTable[TABLE_SIZE];

// Hash function
int hash(long long key) {
    if (key < 0) key = -key;
    return key % TABLE_SIZE;
}

// Get frequency of prefix sum
long long get(long long key) {
    int index = hash(key);
    Node* temp = hashTable[index];
    while (temp) {
        if (temp->key == key)
            return temp->count;
        temp = temp->next;
    }
    return 0;
}

// Insert or update frequency
void insert(long long key) {
    int index = hash(key);
    Node* temp = hashTable[index];

    while (temp) {
        if (temp->key == key) {
            temp->count++;
            return;
        }
        temp = temp->next;
    }

    // If key not found, create new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->count = 1;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

int main() {
    int n;
    scanf("%d", &n);

    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long prefix_sum = 0;
    long long count = 0;

    // Important: prefix sum 0 appears once initially
    insert(0);

    for (int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        long long freq = get(prefix_sum);
        count += freq;

        insert(prefix_sum);
    }

    printf("%lld\n", count);

    return 0;
}