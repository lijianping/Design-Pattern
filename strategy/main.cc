/* 
 * @file main.cc
 * @author japin
 * @time 2014/10/16 20:00
 */

#include "weapon_context.h"
#include "handgun.h"
#include "machine_gun.h"
#include "rifle.h"

#include <iostream>

int main(int argc, char *argv[])
{
	WeaponContext context;
	Handgun handgun;
	MachineGun machine_gun;
	Rifle rifle;

	context.SetWeapon(&handgun);
	context.Shoot();

	context.SetWeapon(&machine_gun);
	context.Shoot();

	context.SetWeapon(&rifle);
	context.Shoot();

	return 0;
}
