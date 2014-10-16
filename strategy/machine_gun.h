/*
 * @file machine_gun.h
 * @author japin
 * @time 2014/10/16 19:32
 */

#ifndef MACHINE_GUN_H_HEADER
#define MACHINE_GUN_H_HEADER

#include "weapon.h"

class MachineGun : public Weapon
{
public:
	/* Implementing the interface in weapon */
	void Shoot();
};

#endif
