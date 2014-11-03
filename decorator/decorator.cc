/*
 * @file decorator.cc
 * @author japin
 * @time 2014/11/03 14:39
 */

#include "decorator.h"

Decorator::Decorator(Hamburger *hb)
	: hb_(hb)
{

}

Decorator::~Decorator()
{

}

double Decorator::price()
{
	return hb_->price();
}
