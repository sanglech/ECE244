#include "treeNode.h"
#include "DBentry.h"

using namespace std;

treeNode::treeNode(DBentry* _entry)
{
    ptr_entry=_entry;
    left=NULL;
    right=NULL;
}

treeNode::~treeNode()
{

}

void treeNode::setLeftChild(treeNode* newLeft)
{
    left=newLeft;
}

void treeNode::setRightChild(treeNode* newRight)
{
    right=newRight;
}

treeNode* treeNode::getLeftChild()
{
    return left;
}

treeNode* treeNode::getRightChild()
{
    return right;
}

DBentry* treeNode::getEntry()
{
    return ptr_entry;
}
