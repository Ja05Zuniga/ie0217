// Tree traversal in C++
#include <iostream> 
using namespace std;

struct Node {
    int data;
    struct Node *left, *right; 

    Node(int data) {
    this->data = data; 

    //ESta vacio
    left = right = NULL;
    }
};

// Preorder traversal
void preorderTraversal(struct Node* node) { 
    if (node == NULL)
        return;
        cout<< node->data <<"->";

        //Implementacion recursiva
        preorderTraversal (node->left); 
        preorderTraversal (node->right);
}


// Postorder traversal
void postorderTraversal (struct Node* node) { 
if (node == NULL)
    return;

    //Implementacion recursiva
    postorderTraversal (node->left); 
    postorderTraversal (node->right); 
    cout << node->data << "->";
    }
    // Inorder traversal
    void inorderTraversal(struct Node* node) { 
    if (node == NULL) 
    return;

    inorderTraversal (node->left); 
    cout << node->data << "->"; 
    inorderTraversal (node->right);
    }


int main() {
    struct Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    
    //Se le agrega otro
    root->left->left = new Node(5); 
    root->left->right = new Node(6);

    cout << "Inorder traversal "; 
    inorderTraversal(root);
    cout << "\nPreorder traversal";
    preorderTraversal(root);

    cout << "\nPostorder traversal "; 
    postorderTraversal(root);
}