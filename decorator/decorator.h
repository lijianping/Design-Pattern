/*
 * @file decorator.h
 * @author japin
 * @time 2014/11/03 14:13
 */

#ifndef DECORATOR_H_HEADER
#define DECORATOR_H_HEADER

#include "hamburger.h"

class Decorator : public Hamburger
{
public:
	Decorator(Hamburger *hb);
	
	virtual ~Decorator();

	virtual double price();

private:
	Hamburger *hb_;
};

#endif
