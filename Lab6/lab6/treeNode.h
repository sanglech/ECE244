#ifndef _TREENODE_H
#define _TREENODE_H
#include "DBentry.h"

class treeNode {
private:
	DBentry* ptr_entry;
    treeNode* left;
    treeNode* right;
    void insertInPlace(treeNode* _left,treeNode* _right);

public:
	// the constructor
	treeNode(DBentry* _entry);

	// the destructor
 	~treeNode();

	// sets the left child of the treeNode.
	void setLeftChild(treeNode* newLeft);

    // sets the right child of the treeNode
    void setRightChild(treeNode* newRight);

	// gets the left child of the treeNode.
    treeNode* getLeftChild();

    // gets the right child of the treeNode
    treeNode* getRightChild();

	// returns a pointer to the entry the treeNode contains.
	DBentry* getEntry();
};

#endif
