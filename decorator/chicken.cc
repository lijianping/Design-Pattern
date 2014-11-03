/*
 * @file chicken.cc
 * @author japin
 * @time 2014/11/03 14:49
 */

#include "chicken.h"

static double chicken_price = 4.5;

Chicken::Chicken(Hamburger *hb)
	: Decorator(hb)
{
	price_ = chicken_price;
}

Chicken::~Chicken()
{

}

double Chicken::price()
{
	return price_ + Decorator::price();
}
