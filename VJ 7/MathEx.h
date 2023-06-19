#include <iostream>
#include <string>

class MathEx {
public:
	virtual std::string Show_Error() = 0;
};

class Zero_Division : public MathEx {
public:
	std::string Show_Error() { return "zero division"; }
};

class Not_a_Number : public MathEx {
public:
	std::string Show_Error() { return "not a number"; }
};

class Invalid_O : public MathEx {
public:
	std::string Show_Error() { return "invalid operation"; }
};