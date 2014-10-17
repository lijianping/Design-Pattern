/*
 * @file abstract.h
 * @author japin
 * @time 2014/10/17 16:55
 */

#ifndef ABSTRACT_H_HEADER
#define ABSTRACT_H_HEADER

class Abstract
{
public:
	Abstract();

	virtual ~Abstract();

	virtual void Answer1() = 0;

	virtual void Answer2() = 0;

	void Test1();

	void Test2();
};

#endif
