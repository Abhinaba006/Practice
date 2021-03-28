//majority problem -> solved n bst using storing values and count in a tree
#include<bits/stdc++.h>
using namespace std;
struct node{
    int key;
    int c=0;
    struct node *left, *right;
};
// creates new node
struct node *newNode(int item){
    struct node *temp = new struct node;
    temp->key = item;
    temp->c = 1;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}
// inser to insert the tree
struct node *inser(struct node *root, int key, int& ma)
{
    if(root==nullptr)
    {
        if(ma==0)
            // max count is zero and the tree is empty so we will ma value will be set to 1
            ma = 1;
        // and return the new node
        return newNode(key);
    }
    // other wise search the tree
    if (key<root->key)
        root->left = inser(root->left, key, ma);
    else if (key>root->key)
        root->right = inser(root->right, key, ma);
    else
        root->c++;
    // find the max c
    ma = max(ma, root->c);
    // return unchanged root ptr
    //cout<<"print  insert the node\n"<<root->key<<" --- "<<root->c<<endl;
    return root;
}
void inorder(struct node *root, int n){
    if(root!=nullptr){
        //cout<<"print  traverse the node\n"<<root->key<<" --- "<<root->c<<endl;
        inorder(root->left, n);
        if(root->c>n/2)
        {
            cout<<root->key;
        }
        inorder(root->right, n);
    }
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    struct node *root=nullptr;
    // make the tree by using insert
    // ma will have count of the max freq
    int ma=0;
    for(int i=0;i<n;i++){
        root = inser(root, a[i], ma);
    }
    //inorder(root, n);
    if (ma>(n/2))
        inorder(root, n);
    else
        cout<<-1;
    //cout<<"--"<<ma<<" "<<endl;*/
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
