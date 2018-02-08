/*
 * Sample main program to test N-ary treenode  class.
 *
 * Written by: Stuart Hansen
 * Date: January 2018
 */
#include <iostream>
#include "treenode.h"

using namespace std;

int main() {
    treenode  * root = new treenode (5);

    treenode  * a = new treenode (4);
    treenode  * b = new treenode (7);
    treenode  * c = new treenode (13);
    treenode  * d = new treenode (1);
    treenode  * e = new treenode (22);
    treenode  * f = new treenode (34);
    treenode  * aa = new treenode (14);
    treenode  * bb = new treenode (27);
    treenode  * cc = new treenode (313);
    treenode  * dd = new treenode (41);
    treenode  * ee = new treenode (322);
    treenode  * ff = new treenode (234);

    root->add_child(a);
    root->add_child(bb);
    root->add_child(aa);

    a->add_child(b);
    a->add_child(c);
    a->add_child(cc);

    b->add_child(d);
    b->add_child(e);

    c->add_child(f);
    c->add_child(ff);

    bb->add_child(dd);
    bb->add_child(ee);

    root->preorder_print();
    return 0;
}