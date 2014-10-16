/*
 * @file weapon_context.h
 * @author japin
 * @time 2014/10/16 19:45
 */

#ifndef WEAPON_CONTEXT_H_HEADER
#define WEAPON_CONTEXT_H_HEADER

#include "weapon.h"

class WeaponContext
{
public:
	void SetWeapon(Weapon *weapon);

	void Shoot();

private:
	Weapon *weapon_;
};

#endif
