#include "BaseAIController.h"

void ABaseAIController::SelectTarget() {}
void ABaseAIController::AimAt(FVector AimTarget) {}
void ABaseAIController::CheckFire() {}
void ABaseAIController::UpdateAim() {}
bool ABaseAIController::ShouldStartFire() const { return false; }
bool ABaseAIController::ShouldStopFire() const { return false; }
void ABaseAIController::StartFire() {}
void ABaseAIController::StopFire() {}
bool ABaseAIController::ShouldUpdateAim() const { return false; }