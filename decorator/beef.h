/*
 * @file beef.h
 * @author japin
 * @time 2014/11/03 14:42
 */

#ifndef BEEF_H_HEADER
#define BEEF_H_HEADER

#include "decorator.h"

class Beef : public Decorator
{
public:
	Beef(Hamburger *hb);

	~Beef();

	virtual double price();
};

#endif /* BEEF_H_HEADER */
