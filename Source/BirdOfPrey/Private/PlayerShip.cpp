#include "PlayerShip.h"

APlayerShip::APlayerShip() {}
void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed) {}
void APlayerShip::ClampToCameraBounds() {}
float APlayerShip::GetShipAxisAdjustment(float Dist, float Max) { return 0.0f; }
FVector APlayerShip::CalcOutofBoundsAdjustment() { return FVector(); }
void APlayerShip::GetPlayerAgentInfo(APlayerController* Player) {}
bool APlayerShip::ShouldSpawnAIController() { return false; }
void APlayerShip::UpdateHoverPitch() {}
bool APlayerShip::HasDiedRecently() { return false; }