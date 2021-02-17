#include<iostream>

using namespace std;

typedef struct node{
    int value;
    struct node *left;
    struct node *right;
}node;

bool checkBST(node* root) {
    if (root == NULL)
        return true;

    if (root->left != NULL && root->left->value > root->value)
        return false;

    if (root->right != NULL && root->right->value < root->value)
        return false;

    if (!checkBST(root->left) || !checkBST(root->right))
        return false;
    
    return true;
}

int main()
{
    node *rootYes;
    node *rootNo;
    node A, B, C, D, E, F, G, H, I, J;
    node K, L, M, N, O, P;

    //initialization
    A.value = 5;
    A.left = &B;
    A.right = &C;
    B.value = 3;
    B.left = &D;
    B.right = &E;
    C.value = 7;
    C.left = &F;
    C.right = &G;
    D.value = 1;
    D.left = &H;
    D.right = &I;
    E.value = 4;
    E.left = E.right = NULL;
    F.value = 6;
    F.left = F.right = NULL;
    G.value = 9;
    G.left = &J;
    G.right = NULL;
    H.value = 0;
    H.left = H.right = NULL;
    I.value = 2;
    I.left = I.right = NULL;
    J.value = 8;
    J.left = J.right = NULL;

    K.value = 3;
    K.left = &L;
    K.right = &M;
    L.value = 5;
    L.left = &N;
    L.right = &O;
    M.value = 2;
    M.left = &P;
    M.right = NULL;
    N.value = 1;
    N.left = N.right = NULL;
    O.value = 4;
    O.left = O.right = NULL;
    P.value = 6;
    P.left = P.right = NULL;

    rootYes = &A;
    rootNo = &K;

    if (checkBST(rootNo))
        cout << "Is BST!" << endl;
    else
        cout << "Not BST!" << endl;
    
    return 0;
}
