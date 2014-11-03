/*
 * @file beef.cc
 * @author japin
 * @time 2014/11/03 14:45
 */

#include "beef.h"

static double beef_price = 5.0;

Beef::Beef(Hamburger *hb)
	: Decorator(hb)
{
	price_ = beef_price;
}

Beef::~Beef()
{

}

double Beef::price()
{
	return price_ + Decorator::price();
}
