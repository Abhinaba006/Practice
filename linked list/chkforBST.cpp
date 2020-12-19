bool isBST(Node* root) {
    // Your code here
    return (isBSTUtil(root, INT_MIN, INT_MAX));
}

int isBSTUtil(Node* root, int min, int max){
    if (root==nullptr)
        return 1;
    if (root->data < min || root->data>max)
        return 0;
    return (isBSTUtil(root->left, min, root->data-1) && isBSTUtil(root->right, root->data+1, max));
}
