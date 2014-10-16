/*
 * @file rifle.h
 * @author japin
 * @time 2014/10/16 19:37
 */

#ifndef RIFLE_H_HEADER
#define RIFLE_H_HEADER

#include "weapon.h"

class Rifle : public Weapon
{
public:
	/* Implementing the interface in weapon */
	void Shoot();
};

#endif
