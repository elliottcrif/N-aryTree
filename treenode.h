//
// Created by Elliott Crifasi on 2/1/18.
//

#ifndef NARYTREE_TREENODE_H
#define NARYTREE_TREENODE_H

#include <vector>
#include <string>

using namespace std;

// Declarations for the Treenode class
class treenode {
public:
    // Constructor declaration
    treenode(int value_arg);
    // Value of node declaration
    int value;
    // Children of node declaration
    vector<treenode *> children;
    // Add child method delclaration
    void add_child(treenode * node);
    // Preorder print method delcaration
    void preorder_print();
    void preorder_print_helper(string indent);

};

#endif //NARYTREE_TREENODE_H
