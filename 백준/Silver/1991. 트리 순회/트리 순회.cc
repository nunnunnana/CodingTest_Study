#include <iostream>
using namespace std;

int tree[26][2];

void preorder(int node) {
    if (node == -1) return;
    cout << char(node + 'A');
    preorder(tree[node][0]);
    preorder(tree[node][1]);
}

void inorder(int node) {
    if (node == -1) return;
    inorder(tree[node][0]);
    cout << char(node + 'A');
    inorder(tree[node][1]);
}

void postorder(int node) {
    if (node == -1) return;
    postorder(tree[node][0]);
    postorder(tree[node][1]);
    cout << char(node + 'A');
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        char parent, left, right;
        cin >> parent >> left >> right;
        
        tree[parent - 'A'][0] = (left == '.') ? -1 : left - 'A';
        tree[parent - 'A'][1] = (right == '.') ? -1 : right - 'A';
    }

    preorder(0); 
    cout << '\n';
    
    inorder(0); 
    cout << '\n';
    
    postorder(0); 
    cout << '\n';
    
    return 0;
}
