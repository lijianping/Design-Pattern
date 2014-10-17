/* 
 * @file concrete.h
 * @author japin
 * @time 2014/10/17 19:49
 */

#ifndef CONCRETE_H_HEADER
#define CONCRETE_H_HEADER

#include "abstract.h"

class ConcreteA : public Abstract
{
public:
	void Answer1();

	void Answer2();
};

class ConcreteB : public Abstract
{
public:
	void Answer1();

	void Answer2();
};

#endif
