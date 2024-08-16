#include <iostream>
using namespace std;

void preorder(node)
{
    if(node == null)
        return;
    
    cout << node.data << endl;
    preorder(node -> left);
    preorder(node -> right);
}