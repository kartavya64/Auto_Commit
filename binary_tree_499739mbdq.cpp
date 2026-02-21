// Auto-generated: 2026-05-11 18:48:19
// Topic: Binary Search Tree — Insert, Search, Traversal
#include <iostream>
#include <memory>
#include <queue>

namespace bst_499739mbdq {
    struct Node { int val; std::shared_ptr<Node> left,right; explicit Node(int v):val(v){} };
    using NPtr=std::shared_ptr<Node>;
    NPtr insert(NPtr root,int v) {
        if(!root) return std::make_shared<Node>(v);
        if(v<root->val) root->left=insert(root->left,v);
        else if(v>root->val) root->right=insert(root->right,v);
        return root;
    }
    bool search(NPtr root,int v) { if(!root) return false; if(v==root->val) return true; return v<root->val?search(root->left,v):search(root->right,v); }
    void inorder(NPtr root) { if(!root) return; inorder(root->left); std::cout<<root->val<<" "; inorder(root->right); }
    void level_order(NPtr root) {
        if(!root) return; std::queue<NPtr> q; q.push(root);
        while(!q.empty()){ auto n=q.front();q.pop(); std::cout<<n->val<<" "; if(n->left)q.push(n->left); if(n->right)q.push(n->right); }
    }
}

int main() {
    std::shared_ptr<bst_499739mbdq::Node> root;
    for(int x:{ 85, 86, 40, 82, 19, 19, 55, 92 }) root=bst_499739mbdq::insert(root,x);
    std::cout<<"Inorder:     "; bst_499739mbdq::inorder(root); std::cout<<"\n";
    std::cout<<"Level order: "; bst_499739mbdq::level_order(root); std::cout<<"\n";
    return 0;
}
