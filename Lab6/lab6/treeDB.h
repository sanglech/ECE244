#ifndef _TREEDB_H
#define _TREEDB_H

#include "treeNode.h"
#include "DBentry.h"

class DB {

private:
  treeNode* root;
  int probesCount;
  bool findHelper(treeNode*curr,string*k);
  void deleteAllhelper(treeNode*curr);
  void printAllhelper(treeNode*curr);
  bool deleteHelper(treeNode*& curr,treeNode*&prev,string *k);

public:
	// the default constructor, creates an empty database.
 	DB();

	// the destructor, deletes all the entries in the database.
	~DB();

	// inserts the entry pointed to by newEntry into the database.
    // If an entry with the same key as newRecord's exists
    // in the database, it returns false. Otherwise, it returns true.
	bool insert(DBentry* newEntry);

	// searches the database for an entry with key k.
	// If the entry is found, the pointer f_entry is made to
	// point to it and the method returns true. Otherwise
	// the method returns false. Also sets probesCount
	bool find(string* k, DBentry* & f_entry);

	// deletes the entry with key k from the database. If
	// the entry was indeed in the database, it returns true.
	// Returns false otherwise.
	bool remove(string* k);

	// deletes all the entries in the database.
	void clear();

    // prints the number of probes stored in probesCount
    void printProbes();

	void printall();
};

#endif
