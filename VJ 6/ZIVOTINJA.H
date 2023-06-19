#ifndef ZIVOTINJA_H
#define ZIVOTINJA_H

#include<iostream>
#include <string>

class Zivotinja {
public:
	virtual int legs() = 0;
	virtual std::string spec() = 0;
};

#endif