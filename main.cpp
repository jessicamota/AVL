#include <iostream>
#include "AvlTree.h"
using namespace std;

int main()
{
    AvlTree *avl = new AvlTree();

    int a =7;
    cout << "Arvore AVL"<< endl;
    avl->print(avl->getRoot(), 1);
    avl->Insert(a);
    avl->Insert(5);
    avl->Insert(3);
    avl->Insert(6);
    avl->Insert(11);
    avl->Insert(2);
    avl->Insert(4);

    avl->Remove(4);

    avl->print(avl->getRoot(), 1);
    return 0;

}
