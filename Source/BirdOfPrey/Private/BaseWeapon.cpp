#include "BaseWeapon.h"

void ABaseWeapon::StartFire() {}
void ABaseWeapon::StopFire() {}
void ABaseWeapon::PlayFireEffects() {}
void ABaseWeapon::GetFireEffectSpawnTransform() {}
bool ABaseWeapon::HasFinishedFiring() { return false; }
bool ABaseWeapon::IsFiring() { return false; }