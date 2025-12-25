#include <iostream>
#include <queue>
#include <stack>

using namespace std;

typedef char elemtype;

class TreeNode {
public:
    elemtype data;
    TreeNode* lc;
    TreeNode* rc;

    TreeNode(elemtype val = '\0') : data(val), lc(nullptr), rc(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

    void destroy(TreeNode* node) {
        if (node) {
            destroy(node->lc);
            destroy(node->rc);
            delete node;
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    ~BinaryTree() {
        destroy(root);
    }

    // ´´½¨¶þ²æÊ÷
    void create() {
        TreeNode* q[100];
        int front = 1, rear = 0;
        char ch;
        root = nullptr;

        cout << "Input Node Sequence end with '#', where ',' is the nullptr: " << endl;
        cin >> ch;

        while (ch != '#') {
            TreeNode* s = nullptr;
            if (ch != ',') {
                s = new TreeNode(ch);
            }

            rear++;
            q[rear] = s;

            if (rear == 1) {
                if (s != nullptr) {
                    root = s;
                }
                else {
                    rear--;
                }
            }
            else {
                while (q[front] == nullptr) front++;
                if (rear % 2 == 0) {
                    q[front]->lc = s;
                }
                else {
                    q[front]->rc = s;
                    front++;
                }
            }

            cin >> ch;
        }
    }

    void preorder() const {
        if (root) {
            preorder(root);
        }
        cout << endl;
    }

    void preorder(TreeNode* node) const {
        if (node != nullptr) {
            cout << node->data << " ";
            preorder(node->lc);
            preorder(node->rc);
        }
    }

    void inorder() const {
        if (root) {
            inorder(root);
        }
        cout << endl;
    }

    void inorder(TreeNode* node) const {
        if (node != nullptr) {
            inorder(node->lc);
            cout << node->data << " ";
            inorder(node->rc);
        }
    }

    void postorder() const {
        if (root) {
            postorder(root);
        }
        cout << endl;
    }

    void postorder(TreeNode* node) const {
        if (node != nullptr) {
            postorder(node->lc);
            postorder(node->rc);
            cout << node->data << " ";
        }
    }

    TreeNode* getRoot() const {
        return root;
    }

    void reverse(TreeNode* node) {
        if (!node) return;

        swap(node->lc, node->rc);
        reverse(node->lc);
        reverse(node->rc);
    }

    void reverse() {
        reverse(root);
    }

    void ok_preorder() {
        if (!root) return;
        stack<TreeNode*> s{ {root} };
        while (!s.empty()) {
            TreeNode* curr = s.top(); s.pop();
            cout << curr->data << " ";
            if (curr->rc) s.push(curr->rc);
            if (curr->lc) s.push(curr->lc);
        }
        cout << endl;
    }

    void ok_inorder() {
        stack<TreeNode*> s;
        TreeNode* curr = root;
        while (curr || !s.empty()) {
            while (curr) { s.push(curr); curr = curr->lc; }
            curr = s.top(); s.pop();
            cout << curr->data << " ";
            curr = curr->rc;
        }
        cout << endl;
    }

    void ok_postorder() {
        if (!root) return;

        stack<TreeNode*> s1, s2;
        s1.push(root);

        while (!s1.empty()) {
            TreeNode* node = s1.top();
            s1.pop();
            s2.push(node);

            if (node->lc) s1.push(node->lc);
            if (node->rc) s1.push(node->rc);
        }

        while (!s2.empty()) {
            cout << s2.top()->data << " ";
            s2.pop();
        }
        cout << endl;
    }
};

/*
Node sequence:
    i d l c h k n a , f j , m  p , b , e g  , , , , o , #
*/
int main() {
    BinaryTree tree;
    tree.create();

    cout << "=================Recursion===================" << endl;
    cout << "preorder test" << endl;
    tree.preorder();

    cout << "inorder test" << endl;
    tree.inorder();

    cout << "postorder test" << endl;
    tree.postorder();
    cout << "=================Reverse===================" << endl;
    tree.reverse();

    cout << "preorder test" << endl;
    tree.preorder();

    cout << "inorder test" << endl;
    tree.inorder();

    cout << "postorder test" << endl;
    tree.postorder();

    cout << "=================Iteration===================" << endl;
    cout << "preorder test" << endl;
    tree.ok_preorder();

    cout << "inorder test" << endl;
    tree.ok_inorder();

    cout << "postorder test" << endl;
    tree.ok_postorder();
    

    return 0;
}