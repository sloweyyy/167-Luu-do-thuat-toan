#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* node = new Node;
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        root = createNode(value);
    } else if (value <= root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

void printInOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

int main() {
    int n;
    cin >> n;
    Node* root = NULL;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insertNode(root, value);
    }
    printInOrder(root);
    return 0;
}
