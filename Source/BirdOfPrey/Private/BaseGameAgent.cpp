#include "BaseGameAgent.h"

void ABaseGameAgent::ChangeWeaponType(ABaseWeapon* NewWeaponType) {}
FTransform ABaseGameAgent::GetWeaponSpawnTransform() const { return FTransform(); }
void ABaseGameAgent::SpawnDefaultWeapon() {}
void ABaseGameAgent::StartFire() {}
void ABaseGameAgent::StopFire() {}
float ABaseGameAgent::TakeDamage(float Damage) { return 0.0f; }
bool ABaseGameAgent::IsAlive() const { return false; }
void ABaseGameAgent::Died(AController* Killer) {}
void ABaseGameAgent::PlayHitEffects() {}
void ABaseGameAgent::CleanUp() {}
void ABaseGameAgent::ApplyAgentInfo(FSAgentInfo NewAgentInfo) {}
void ABaseGameAgent::AimAt(FVector AimTarget) {}
void ABaseGameAgent::PlayDeathEffects() {}
void ABaseGameAgent::CheckForOutOfBounds() {}