#include <bits/stdc++.h>
using namespace std;
template <typename T>

//Generic Tree Constructor
class TreeNode
{
public:
	T data;
	// to store root nodes
	vector<TreeNode<T>*> vec;
	TreeNode(T data){
		this->data=data;
	}
	// ~TreeNode();
};

//Print Recursive
void PrintTree(TreeNode<int>* root){
	cout<<root->data<<endl;
	for (int i = 0; i < root->vec.size(); ++i)
	{
		PrintTree(root->vec[i]);
	}
}
//Print in Ordered way
void PrintTree2(TreeNode<int>* root){
	cout<<root->data<<": ";
	for(int i=0;i<root->vec.size();i++){
		cout<<root->vec[i]->data<<" ";
	}
	cout<<endl;
	for (int i = 0; i <root->vec.size(); ++i)
	{
		PrintTree2(root->vec[i]);
	}
	
}

//Take input Recursive
TreeNode<int>* takeInput(){
  // cout<<"enter root data: ";
  int rootData;
  cin>>rootData;
  TreeNode<int>* root = new TreeNode<int>(rootData);
  // cout<<"enter no of child of that root"<<endl;
  int n;cin>>n;
  for (int i = 1; i <=n; ++i)
  {
  	TreeNode<int>* child = takeInput();
  	root->vec.push_back(child);
  }
  return root;
}

//LevelOrder Input
TreeNode<int>* Inputlevelorder(){
	//create,push,connect;
	int rootData;cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> q;
	q.push(root);
	while(!q.empty()){
	   TreeNode<int>* f = q.front();
	   q.pop();
	   //enter no of childl;
	   int n;cin>>n;
	   for (int i = 1; i <=n; ++i)
	   {
	   	 int childData;cin>>childData;
	   	 TreeNode<int>* child = new TreeNode<int>(childData);
	   	 q.push(child);
	   	 //connection
	   	 f->vec.push_back(child);
	   }
	}
	return root;
}

//level order traversal->print

void levelordertraversal(TreeNode<int>* root){
	//,push,;
	queue<TreeNode<int>*> q;
	q.push(root);
	while(!q.empty()){
	   TreeNode<int>* f = q.front();
	   q.pop();
	   cout<<f->data<<": ";
	   // printing data
	   for(int i=0;i<f->vec.size();i++){
	   	 cout<<f->vec[i]->data<<" ";
	   }
	   cout<<endl;
	   //pushing child nodes
	   for (int i = 0; i <f->vec.size(); ++i)
	   {
	   	 q.push(f->vec[i]);
	   }
	}
}

//height of tree
int height(TreeNode<int>* root){
  int maxh=0;
  for(int i=0;i<root->vec.size();i++){
  	maxh = max(maxh,height(root->vec[i]));
  }
  return maxh+1;
}
signed main(){
#ifndef ONLINE_JUDGE
  freopen("Error.txt", "w", stderr);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
	// int a,b,c;cin>>a>>b>>c;
	// TreeNode<int>* root = new TreeNode<int>(a);
	// TreeNode<int>* n1 = new TreeNode<int>(b);
	// TreeNode<int>* n2 = new TreeNode<int>(c);
	// root->vec.push_back(n1);
	// root->vec.push_back(n2);


	// my tree
     //     1
     //   / | \
     //  2  3  4
     // / \  \  \
     // 5  6  7  8

	TreeNode<int>* root =takeInput();
	PrintTree(root);
	cout<<"\n";
	PrintTree2(root);
	TreeNode<int>* root2 = Inputlevelorder();
	PrintTree(root2);
	cout<<"\n";
	PrintTree2(root2);
	levelordertraversal(root);
	cout<<"tree height: "<<height(root);
	return 0;
}