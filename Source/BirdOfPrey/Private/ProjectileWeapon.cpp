#include "ProjectileWeapon.h"

AProjectileWeapon::AProjectileWeapon() {}

ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform) { return nullptr; }

FTransform AProjectileWeapon::GetProjectileSpawnTransform(int32 ShotNumber) { return FTransform(); }

bool AProjectileWeapon::ReadyToFire() { return false; }

bool AProjectileWeapon::IsFiring() { return false; }