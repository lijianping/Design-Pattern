/*
 * @file hamburger.cc
 * @author japin
 * @time 2014/11/03 14:31
 */

#include "hamburger.h"

static double hamburger_price = 2.0;

Hamburger::Hamburger()
	: price_(hamburger_price)
{

}

Hamburger::~Hamburger()
{

}

double Hamburger::price()
{
	return price_;
}
