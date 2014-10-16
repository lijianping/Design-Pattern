/*
 * @file handgun.h
 * @author japin
 * @time 2014/10/16 19:24
 */

#ifndef HANDGUN_H_HEADER
#define HANDGUN_H_HEADER

#include "weapon.h"

class Handgun : public Weapon
{
public:
	/*Implementing the interface defined in weapon */
	void Shoot();
};

#endif
