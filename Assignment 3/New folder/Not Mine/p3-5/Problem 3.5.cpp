/*
    CH08-320142
    a3_p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString
{
private:
	char *str;
public:
	NaiveString(){}
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	~NaiveString();
	void update(char, char);
	void print();
};

NaiveString::~NaiveString()
{
	delete [] this->str;
	cout << "Hello string destructor\n";
}

NaiveString::NaiveString(const char* t)
{
	cout << "Hello string constructor\n";
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src)
{
	cout << "Hello copy constructor\n";
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "Hello funcbyval()" << endl;
	s.update('B', 'C');
	s.print();
}

void funcByRef(NaiveString &s){
	cout << "Hello funcbyref()\n";
	s.update('C', 'B');
	s.print();
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	NaiveString b(a);
	b.print();
	cout << "About to call funcbyref()\n";
	funcByRef(b);
	b.print();
}
