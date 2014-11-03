/*
 * @file chicken.h
 * @author japin
 * @time 2014/11/03 14:47
 */

#ifndef CHICKEN_H_HEADER
#define CHICKEN_H_HEADER

#include "decorator.h"

class Chicken : public Decorator
{
public:
	Chicken(Hamburger *hb);

	~Chicken();

	virtual double price();
};

#endif /* CHICKEN_H_HEADER */
