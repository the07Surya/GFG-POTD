void inorder(vector<int> &v, Node* node, int level){
    if(node==NULL)  return;
    inorder(v, node->left, level+1);
    v.push_back(level);
    inorder(v, node->right, level+1);
}

bool ispalin(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n/2;i++)
        if(v[i]!=v[n-i-1])
            return false;
    return true;
}

bool IsFoldable(Node* root)
{
    vector<int> v;
    inorder(v, root, 0);
    return ispalin(v);
}
