// Copyright The True Boolean


#include "Character/AuraEnemy.h"

void AAuraEnemy::HighlightActor()
{
	bHighlighted = true;
	UE_LOG(LogTemp, Warning, TEXT("HIGHLIGHTED"));
}

void AAuraEnemy::UnHighlightActor()
{
	bHighlighted = false;
	UE_LOG(LogTemp, Warning, TEXT("UNHIGHLITED"));
}
