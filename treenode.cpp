#include <iostream>
#include "treenode.h"
using namespace std;
//
// Created by Elliott Crifasi on 2/1/18.
//

string removeIndent(string indent);

treenode::treenode(int value_arg) {
    value = value_arg;
}

// Adds a child to the treenode
void treenode::add_child(treenode *node) {
    if (children.size() < 10) {
        children.push_back(node);
    }
}

// Might need a helper method
// Find a way to possibly implement recursion
void treenode::preorder_print() {
    preorder_print_helper("");
}
void treenode::preorder_print_helper(string indent) {
    // print the current nodes value
    cout << indent << value << endl;
    // loops through and prints children
    for (int i = 0; i < children.size(); i++){
        // If we can go deeper in the tree
        // then traverse
        if (children[i]->value != NULL) {
            indent+="   ";
            children[i]->preorder_print_helper(indent);
            indent = removeIndent(indent);
        }
    }
}
string removeIndent(string indent) {
    indent.pop_back();
    indent.pop_back();
    indent.pop_back();
    return indent;
}

