#ifndef _DBENTRY_H
#define _DBENTRY_H

#include <string>

using namespace std;

class DBentry {
private:
	string* _key;
	string* _data;

public:
	// the default constructor
	DBentry();

	// the destructor
 	~DBentry();

	// sets the key.
	void setKey(string* k);

	// sets the data.
	void setData(string* pdata);

        // returns (pointer to) the key.
	string* getKey();

	// returns the data.
	string* getData();

	// prints the entry
	void print();
};

#endif

