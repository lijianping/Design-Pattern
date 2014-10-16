/*
 * @file weapon_context.cc
 * @author japin
 * @time 2014/10/16 19:52
 */

#include "weapon_context.h"

void WeaponContext::SetWeapon(Weapon *weapon)
{
	weapon_ = weapon;
}

void WeaponContext::Shoot()
{
	weapon_->Shoot();
}
