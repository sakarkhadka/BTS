#include <iostream>
#include "BST312.h"
#include "BST312.cpp"
#include <vector>
#include <string>

int main() {
    std::cout << "Hello, World!" << std::endl;

    BST_312<int> entries;
    entries.insertItem(25);
    entries.insertItem(15);
    entries.insertItem(0);
    entries.insertItem(10);
    entries.insertItem(22);
    entries.insertItem(35);
    entries.insertItem(70);
    entries.insertItem(4);
    entries.insertItem(12);
    entries.insertItem(18);
    entries.insertItem(24);
    entries.insertItem(31);
    entries.insertItem(44);
    entries.insertItem(66);
    entries.insertItem(90);
    entries.insertItem(99);



    cout << "postorder traversal is " << endl;
    for (int i = 0; i < entries.postOrderTraversal().size(); i++) {
        cout << entries.postOrderTraversal()[i] << " ";
    }
    cout<<endl;

    cout << "in order traversal is " << endl;
    for (int i = 0; i < entries.inOrderTraversal().size(); i++) {
        cout << entries.inOrderTraversal()[i] << " ";
    }
    cout<<endl;

    cout << "pre order traversal is " << endl;
    for (int i = 0; i < entries.preOrderTraversal().size(); i++) {
        cout << entries.preOrderTraversal()[i] << " ";
    }
    cout<<endl;

    cout<<endl<<endl<<"the no of nodes is ";
    cout<< entries.countNodes()<<endl;

    cout<< "checking the delete function"<<endl;
    entries.deleteItem(25);
    //entries.deleteItem(35);
    //entries.deleteItem(70);
    entries.deleteItem(4);
    //entries.deleteItem(12);
    entries.deleteItem(18);

    cout << "postorder traversal is " << endl;
    for (int i = 0; i < entries.postOrderTraversal().size(); i++) {
        cout << entries.postOrderTraversal()[i] << " ";
    }
    cout<<endl;

    cout << "in order traversal is " << endl;
    for (int i = 0; i < entries.inOrderTraversal().size(); i++) {
        cout << entries.inOrderTraversal()[i] << " ";
    }
    cout<<endl;

    cout << "pre order traversal is " << endl;
    for (int i = 0; i < entries.preOrderTraversal().size(); i++) {
        cout << entries.preOrderTraversal()[i] << " ";
    }
    cout<<endl;

    cout<<endl<<endl<<"the no of nodes is ";
    cout<< entries.countNodes()<<endl;


    cout<<endl<<endl<<"check if item is in the tree"<<endl;
    if(entries.isItemInTree(25)) cout<<"yes 25"<<endl;
    if(entries.isItemInTree(10)) cout<<"yes 10"<<endl;
    if(entries.isItemInTree(2)) cout<<"yes 2"<<endl;
    if(entries.isItemInTree(4)) cout<<"yes 4"<<endl;
    if(entries.isItemInTree(22)) cout<<"yes 22"<<endl;
    if(entries.isItemInTree(18)) cout<<"yes 18"<<endl;
    if(entries.isItemInTree(24)) cout<<"yes 24"<<endl;


    cout<<endl<<endl<<"delelting it all"<< endl;

    entries.makeEmpty();
    cout << "postorder traversal is " << endl;
    for (int i = 0; i < entries.postOrderTraversal().size(); i++) {
        cout << entries.postOrderTraversal()[i] << " ";
    }
    cout<<endl;


    cout<<endl<<endl<<"the no of nodes is ";
    cout<< entries.countNodes()<<endl;

    return 0;
}
