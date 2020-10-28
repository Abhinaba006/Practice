#include<bits/stdc++.h>
using namespace std;
// structure of the tree
class node
{
public:
    char data;
    int hd;
    node *left, *right;
};
// function to create new node
node *newNode(int data){
    node *temp = new node;
    temp->data = data;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}
//function to print top view of the tree
void topview(node *root)
{
    // bfs and vertical oeder trversal will be used
    // we will go through the all level
    // using queue as we did it in bfs
    // and store the new hd to a hash map
    // and in the next layer if a new hd appear
    // them we will again store it in the hash map
    if (root==NULL)
        return;
    queue<node *> q;
    map<int, char> m;
    int hd = 0;
    root->hd=hd;
    q.push(root);
    while(!q.empty()){
        hd = root->hd;
        if (m.count(hd)==0) //if hd is new for till the layer
            m[hd]=root->data;
        if(root->left){
            root->left->hd=hd-1;
            q.push(root->left);
        }
        if(root->right){
            root->right->hd = hd+1;
            q.push(root->right);
        }
        q.pop();
        root = q.front();
    }
    for(auto i=m.begin();i!=m.end();i++)
        cout<<i->second<<" ";

}
//function to print level order using queue
void bfs(node *root)
{
    queue <node *> q;
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if (temp->left)         // enqueue left child
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}
//function to print level order by level
void bfsLevel(node *root)
{   // having issue with the null value
    // the while loop can't decide the null
    int flag=0; // this will check if we get 2 null
    queue <node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty() && flag<2){
        node *temp = q.front();
        q.pop();
        if (temp!=NULL){
            flag=0;
            cout<<temp->data<<" ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        else if (temp==NULL){
            flag++;
            cout<<endl;
            q.push(NULL);
        }
    }
}
// vertical view of a tree
// get the vertical order in a hash map
void getVerticalOrder(node *root, int hd, map<int, vector<char>> &m)
{
    //m is the map and & is for declaring with reference
    //so we can directly change the value

    // base, at the end
    if (root==NULL)
        return;
    m[hd].push_back(root->data);
    getVerticalOrder(root->left, hd-1, m);
    getVerticalOrder(root->right, hd+1, m);
}
void ver(node *root)
{
    //from the left side
    //hd=0 , horizontal distance
    //left hd -= 1 right hd += 1
    // level order traversal + hash table
    queue <node *> q;
    map <int, vector<char>> m;
    int hd=0;
    getVerticalOrder(root, hd, m);
    map <int, vector<char>> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<it->second.size();i++)
            cout<<it->second[i]<<" ";
        cout<<endl;
    }
}

// main part
int main()
{
	node* root = newNode('A');
	root->left = newNode('B');
	root->right = newNode('C');
	root->left->left = newNode('D');
	root->left->right = newNode('E');
	root->left->right->left = newNode('G');
	root->right->right = newNode('F');
	root->right->right->left = newNode('H');
	root->right->right->right = newNode('I');
	root->right->right->right->left = newNode('J');
    cout<<"---- bfs in one line ----\n\n";
	bfs(root);
	cout<<"\n\n---- bfs by level ----\n\n";
	bfsLevel(root);
	cout<<"\n\n---- bfs ver view ----\n\n";
	ver(root);
	cout<<"\n\n---- top view ----\n\n";
	topview(root);
	return 0;
}

