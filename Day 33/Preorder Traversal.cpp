void pre(Node *root, vector<int> &v)
{
    if (!root)
        return;
    v.push_back(root->data);
    pre(root->left, v);
    pre(root->right, v);
}
vector<int> preorder(Node *root)
{
    // Your code here
    vector<int> v;
    pre(root, v);
    return v;
}
