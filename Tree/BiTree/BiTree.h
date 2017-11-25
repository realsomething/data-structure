//
// Created by  sky on 2017/11/25.
//

#ifndef BITREE_BITREE_H
#define BITREE_BITREE_H

#endif //BITREE_BITREE_H





struct Node
{
    DataType data;
    Node *left;
    Node *right;

    Node(const DataType &d):data(d), left(NULL), right(NULL)
    {

    }

    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
};

class BiTree {
private:
    Node *root;

public:
    BiTree() {
        root = new Node();      // with head node
    }

    virtual ~BiTree() {
        Node *p = NULL;
    }

    Node* GetRoot()
    {
        return root;
    }

    Node* InsertLeftNode(Node* current, DataType x)
    {
        if (current == NULL)
        {
            cout << "current node is null." << endl;
            return NULL;
        }

        Node *s = new Node();
        s->data = x;

        s->left = current->left;
        current->left = s;

        return current->left;
    }

    Node* InsertRightNode(Node* current, DataType x)
    {
        if (current == NULL)
        {
            cout << "current node is null." << endl;
            return NULL;
        }

        Node *s = new Node();
        s->data = x;

        s->right = current->right;
        current->right = s;

        return current->right;
    }

    Node* DeleteLeftTree(Node* current)
    {
        if (current == NULL || current->left == NULL)
        {
            cout << "current or current's left node is null." << endl;
            return NULL;
        }

        Destroy(&current->left);
        current->left = NULL;

        return  current;
    }

    Node* DeleteRightTree(Node* current)
    {
        if (current == NULL || current->right == NULL)
        {
            cout << "current or current's right node is null." << endl;
            return NULL;
        }

        Destroy(&current->right);
        current->right = NULL;

        return  current;
    }

    void Destroy(Node** root)
    {
        if ((*root) != NULL && (*root)->left != NULL)
        {
            Destroy(&(*root)->left);
        }

        if ((*root) != NULL && (*root)->right != NULL)
        {
            Destroy(&(*root)->right);
        }

        delete (*root);
    }

    void PreOrder(Node* root, void Visit(DataType item))
    {
        if (root != NULL)
        {
            Visit(root->data);
            PreOrder(root->left, Visit);
            PreOrder(root->right, Visit);
        }
    }

    void InOrder(Node* root, void Visit(DataType item))
    {
        if (root != NULL)
        {
            InOrder(root->left, Visit);
            Visit(root->data);
            InOrder(root->right, Visit);
        }
    }

    void PostOrder(Node* root, void Visit(DataType item))
    {
        if (root != NULL)
        {
            PostOrder(root->left, Visit);
            PostOrder(root->right, Visit);
            Visit(root->data);
        }
    }

    static void Visit(DataType item)
    {
        cout << '\t' << item;
    }

};
