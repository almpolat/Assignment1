#include "BaseProjectile.h"

ABaseProjectile::ABaseProjectile() {}

void ABaseProjectile::InitialiseProjectile(FVector Direction, float Speed) {}

FVector ABaseProjectile::GetInitialVelocity() { return FVector(); }

void ABaseProjectile::DealDamageTo(AActor* Damaging, float DamageAmount) {}

void ABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor) {}

ECollisionChannel ABaseProjectile::GetInstigatorCollisionChannel() { return ECollisionChannel::ECC_WorldStatic; }

void ABaseProjectile::CheckForGroundUnitTarget() {}

bool ABaseProjectile::ShouldCheckForGroundTarget() { return false; }

void ABaseProjectile::AdjustToTarget() {}

bool ABaseProjectile::IsEnemyProjectile() { return false; }

void ABaseProjectile::AdjustToDesiredZ() {}

void ABaseProjectile::Reset() {}