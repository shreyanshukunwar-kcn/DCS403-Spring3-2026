// BinaryTree.cpp : Program for Binary Tree.
// This implementation assumes a simple binary tree without balancing, and constructs the tree using provided traversals.

#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;

// Node structure
struct Node {
    char info;
    Node *lchild, *rchild;
    Node(char ch) : info(ch), lchild(nullptr), rchild(nullptr) {}
};

// BinaryTree class
class BinaryTree {
private:
    Node* root;

    void display(Node *ptr, int level) {
        if(ptr == NULL)
            return;
        display(ptr->rchild, level+1);
        cout << "\n";
        for(int i=0; i<level; i++)
            cout << "   ";
        cout << ptr->info;
        display(ptr->lchild, level+1);
    }

    // Helper for tree height
    int height(Node* node) {
        if (!node) return 0;
        int lh = height(node->lchild);
        int rh = height(node->rchild);
        return max(lh, rh) + 1;
    }

    void preorder(Node *node) {
        if (!node) return;
        cout << node->info << " ";
        preorder(node->lchild);
        preorder(node->rchild);
    }

    void inorder(Node *node) {
        if (!node) return;
        inorder(node->lchild);
        cout << node->info << " ";
        inorder(node->rchild);
    }

    void postorder(Node *node) {
        if (!node) return;
        postorder(node->lchild);
        postorder(node->rchild);
        cout << node->info << " ";
    }

    // Recursive build from Inorder and Preorder
    Node* buildFromPreIn(char in[], char pre[], int inStart, int inEnd, int& preIndex) {
        if (inStart > inEnd)
            return nullptr;
        Node* node = new Node(pre[preIndex++]);
        if (inStart == inEnd)
            return node;
        int inIndex = inStart;
        while (in[inIndex] != node->info && inIndex <= inEnd)
            inIndex++;
        node->lchild = buildFromPreIn(in, pre, inStart, inIndex - 1, preIndex);
        node->rchild = buildFromPreIn(in, pre, inIndex + 1, inEnd, preIndex);
        return node;
    }

    // Recursive build from Inorder and Postorder
    Node* buildFromPostIn(char in[], char post[], int inStart, int inEnd, int& postIndex) {
        if (inStart > inEnd)
            return nullptr;
        Node* node = new Node(post[postIndex--]);
        if (inStart == inEnd)
            return node;
        int inIndex = inStart;
        while (in[inIndex] != node->info && inIndex <= inEnd)
            inIndex++;
        node->rchild = buildFromPostIn(in, post, inIndex + 1, inEnd, postIndex);
        node->lchild = buildFromPostIn(in, post, inStart, inIndex - 1, postIndex);
        return node;
    }

public:
    BinaryTree() : root(nullptr) {}

    void display() {
        display(root, 0);
        cout << "\n";
    }

    void createTree() {
        // For demonstration, let's use a small hardcoded tree:    A
        //                                                        / \
        //                                                       B   C
        //                                                      /   / \
        //                                                     D   E   F
        Node *A = new Node('A');
        Node *B = new Node('B');
        Node *C = new Node('C');
        Node *D = new Node('D');
        Node *E = new Node('E');
        Node *F = new Node('F');
        A->lchild = B;  A->rchild = C;
        B->lchild = D;  B->rchild = nullptr;
        C->lchild = E;  C->rchild = F;
        D->lchild = nullptr; D->rchild = nullptr;
        E->lchild = nullptr; E->rchild = nullptr;
        F->lchild = nullptr; F->rchild = nullptr;
        root = A;
    }

    void preorder()   { preorder(root); cout << "\n"; }
    void inorder()    { inorder(root); cout << "\n"; }
    void postorder()  { postorder(root); cout << "\n"; }

    void levelOrder() {
        if (!root) return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            Node* temp = q.front(); q.pop();
            cout << temp->info << " ";
            if (temp->lchild)
                q.push(temp->lchild);
            if (temp->rchild)
                q.push(temp->rchild);
        }
        cout << "\n";
    }

    int height() {
        return height(root);
    }

    // Non-recursive traversals using std::stack
    void nrecPreorder() {
        if (!root) return;
        stack<Node*> stk;
        stk.push(root);
        while (!stk.empty()) {
            Node* node = stk.top(); stk.pop();
            cout << node->info << " ";
            if (node->rchild)
                stk.push(node->rchild);
            if (node->lchild)
                stk.push(node->lchild);
        }
        cout << "\n";
    }

    void nrecInorder() {
        stack<Node*> stk;
        Node* curr = root;
        while (curr || !stk.empty()) {
            while (curr) {
                stk.push(curr);
                curr = curr->lchild;
            }
            curr = stk.top(); stk.pop();
            cout << curr->info << " ";
            curr = curr->rchild;
        }
        cout << "\n";
    }

    void nrecPostorder() {
        stack<Node*> stk;
        Node* curr = root;
        Node* lastVisited = nullptr;
        while (curr || !stk.empty()) {
            if (curr) {
                stk.push(curr);
                curr = curr->lchild;
            } else {
                Node* peekNode = stk.top();
                if (peekNode->rchild && lastVisited != peekNode->rchild)
                    curr = peekNode->rchild;
                else {
                    cout << peekNode->info << " ";
                    lastVisited = peekNode;
                    stk.pop();
                }
            }
        }
        cout << "\n";
    }

    // Wraps over utility for construction by preorder and inorder
    void construct(char inorder[], char preorder[]) {
        int len = strlen(inorder);
        int preIndex = 0;
        root = buildFromPreIn(inorder, preorder, 0, len - 1, preIndex);
    }

    // Wraps over utility for construction by postorder and inorder
    void construct1(char inorder[], char postorder[]) {
        int len = strlen(inorder);
        int postIndex = len - 1;
        root = buildFromPostIn(inorder, postorder, 0, len - 1, postIndex);
    }
};

int main() {
    BinaryTree bnTree;
    bnTree.createTree();
    bnTree.display();
    cout << "\n";

    cout << "Preorder traversal :\n";
    bnTree.preorder();

    cout << "Inorder traversal :\n";
    bnTree.inorder();

    cout << "Postorder traversal :\n";
    bnTree.postorder();

    cout << "Level order traversal :\n";
    bnTree.levelOrder();
    cout << "Height = " << bnTree.height() << "\n";

    cout << "Non Recursive Preorder traversal :\n";
    bnTree.nrecPreorder();

    cout << "Non Recursive Inorder traversal :\n";
    bnTree.nrecInorder();

    cout << "Non Recursive Postorder traversal :\n";
    bnTree.nrecPostorder();

    char inorder[] = "GDHBEIACJFK";
    char preorder[] = "ABDGHEICFJK";
    BinaryTree bnTree1;
    cout << "Creation of binary tree from Inorder = " << inorder << ", Preorder = " << preorder << " :\n";
    bnTree1.construct(inorder, preorder);
    bnTree1.display();
    cout << "\n";

    char postorder[] = "GHDIEBJKFCA";
    BinaryTree bnTree2;
    cout << "Creation of binary tree from Inorder = " << inorder << ", Postorder = " << postorder << " :\n";
    bnTree2.construct1(inorder, postorder);
    bnTree2.display();
    cout << "\n";
    return 0;
}
// End of main()