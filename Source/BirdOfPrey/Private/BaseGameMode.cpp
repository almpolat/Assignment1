#include "BaseGameMode.h"

FVector ABaseGameMode::GetWorldScrollVelocity() const { return FVector(); }
AActor* ABaseGameMode::GetWorldCameraActor() const { return nullptr; }
void ABaseGameMode::OnPlayerDied(ABasePlayerController* Player) {}
void ABaseGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer) {}
FVector ABaseGameMode::GetPowerUpSpawnLocation(AActor* Enemy, AActor* Killer) { return FVector(); }
void ABaseGameMode::StartGame() {}
void ABaseGameMode::EndGame(bool Success) {}
void ABaseGameMode::SpawnEnemyFrom(TSubclassOf<ABaseGameAgent> ClassList) {}
void ABaseGameMode::ResetGame() {}
void ABaseGameMode::RespawnPlayer() {}
void ABaseGameMode::TrySpawnPowerUp(FVector Location) {}
float ABaseGameMode::GetDistanceTravelled() const { return 0.0f; }