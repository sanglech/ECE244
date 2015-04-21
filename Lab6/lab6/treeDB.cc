#include "treeNode.h"
#include "DBentry.h"
#include"treeDB.h"
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
DB::DB()
{
    root=NULL;
    probesCount=0;
}

bool DB::insert(DBentry* newEntry)
{
    treeNode*curr,*prev;
    bool check=true;
    prev=NULL;
    curr=root;

    if(root==NULL)
    {
        treeNode *t=new treeNode(newEntry);
        root=t;
        check=true;
    }

    else if(*(root->getEntry()->getKey())!=*(newEntry->getKey()))
    {
        while(curr!=NULL)
        {
            if(*(curr->getEntry()->getKey())<*(newEntry->getKey()))
            {
                prev=curr;
                curr=curr->getRightChild();
            }
            else
            {
                prev=curr;
                curr=curr->getLeftChild();
            }
        }

        curr=new treeNode(newEntry);
        if((*prev->getEntry()->getKey())<*(newEntry->getKey()))
        {
            prev->setRightChild(curr);
        }

        else if(*(prev->getEntry()->getKey())>*(newEntry->getKey()))
        {
            prev->setLeftChild(curr);
        }
        check=true;
    }
    else
    {
        cout<<"Entry Already appears in List"<<endl;
        check=false;
    }

    return check;
}

bool DB::find(string* k, DBentry* & f_entry)
{
    treeNode*curr;
    curr=root;
    probesCount=0;
    bool isFound=findHelper(curr,k);
    return isFound;
}

bool DB::remove(string* k)
{
    bool isDelete,isFound;
    treeNode*curr,*prev;
    curr=root;
    prev=NULL;

    isFound=findHelper(curr,k);

    if((root==NULL)||!isFound)
    {
        isDelete=false;
    }

    else
    {
      isDelete=deleteHelper(curr,prev,k);
    }
    return isDelete;
}

void DB::clear()
{
    if(root==NULL)
    {
        //do Nothing, empty list
    }
    else
    {
        deleteAllhelper(root);
    }
    root=NULL;
}

void DB::printProbes()
{
    cout<<probesCount<<endl;
}

void DB::printall()
{
    if(root==NULL)
    {
        //do nothing
    }
    else
    {
      printAllhelper(root);
    }
}

bool DB::findHelper(treeNode*curr,string* k)
{
    if(curr==NULL)
    {
        return false; //Empty List
    }

    else if(*(curr->getEntry()->getKey()) == *(k))
    {
      return true;
    }

    else if(*(curr->getEntry()->getKey())< *(k))
    {
        probesCount++;
        return (findHelper((curr->getRightChild()),k));
    }
    else
    {
        probesCount++;
        return(findHelper((curr->getLeftChild()),k));
    }
}

void DB::deleteAllhelper(treeNode*curr)//,treeNode*prev)
{
    if(curr!=NULL)
    {
        deleteAllhelper(curr->getLeftChild());
        deleteAllhelper(curr->getRightChild());
        delete curr;
    }
}

bool DB::deleteHelper(treeNode*&curr,treeNode*&prev,string *k)
{
    bool check;
    treeNode*temp;
    if(*k>*(curr->getEntry()->getKey()))
    {
        if(curr->getRightChild()!=NULL)
        {
            prev=curr;
            curr=curr->getRightChild();
            deleteHelper(curr,prev,k);
        }
    }

    else if(*k<*(curr->getEntry()->getKey()))
    {
       if(curr->getLeftChild()!=NULL)
        {
            prev=curr;
            curr=curr->getLeftChild();
            deleteHelper(curr,prev,k);
        }
    }
    else if(curr==NULL)
    {
        check= false;
        // could not find node
    }

    else
    {
        if((*k)<*(root->getEntry()->getKey())&&(curr!=NULL))
        {
            if(curr->getRightChild()!=NULL)
            {
                while(curr!=NULL)
                {
                    curr=curr->getRightChild();
                }
                prev->setLeftChild(curr);
                curr=NULL;
                delete curr;
            }
            else if(curr->getRightChild()==NULL&&curr->getLeftChild()!=NULL)
            {
                prev->setLeftChild(curr->getLeftChild());
                curr=NULL;
                delete curr;
            }
            else
            {
                curr=NULL;
                delete curr;
            }
        }
        else if((*k)>*(root->getEntry()->getKey())&&(curr!=NULL))
        {
            if(curr->getLeftChild()!=NULL)
            {
                while(curr!=NULL)
                {
                    curr=curr->getLeftChild();
                }
                prev->setRightChild(curr);
            }
            else if(curr->getLeftChild()==NULL)
            {
                prev->setRightChild(curr->getRightChild());
            }
            else
            {
                delete curr;
                curr=NULL;
            }
        }
        else if((*k)==*(root->getEntry()->getKey()))
        {
            if(root->getLeftChild()==NULL&&root->getRightChild()==NULL)
            {
                delete root;
                root=NULL;
            }
            else if(root->getLeftChild()!=NULL&&root->getRightChild()==NULL)
            {
                curr=curr->getLeftChild();
                while(curr!=NULL)
                {
                    if(*(curr->getEntry()->getKey())>*(prev->getEntry()->getKey()))
                    {
                        curr=curr->getRightChild();
                    }
                }
                delete root;
                root=curr;
            }
            else if(root->getLeftChild()==NULL&&root->getRightChild()!=NULL)
            {
                curr=curr->getRightChild();
                while(curr!=NULL)
                {
                    if(*(curr->getEntry()->getKey())<*(prev->getEntry()->getKey()))
                    {
                        prev=curr;
                        curr=curr->getLeftChild();
                    }
                }
                temp=curr;
                root=temp;
                delete curr;
                curr=NULL;
            }

            else
            {
                curr=curr->getRightChild();
                while(curr!=NULL)
                {
                    if((*(curr->getEntry()->getKey())<*(prev->getEntry()->getKey()))&&(curr->getLeftChild()!=NULL))
                    {
                        curr=curr->getLeftChild();
                    }
                }
                delete root;
                root=curr;
            }
        }
    }
    return true;
}

DB::~DB()
{
    clear();
}

void DB::printAllhelper(treeNode*curr)
{
    if(curr!=NULL)
    {
    printAllhelper(curr->getLeftChild());
    cout<<*(curr->getEntry()->getKey())<<":"<<*(curr->getEntry()->getData())<<endl;
    printAllhelper(curr->getRightChild());
    }
}

