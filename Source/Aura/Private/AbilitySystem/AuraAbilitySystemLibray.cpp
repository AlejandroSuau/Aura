// Copyright The True Boolean


#include "AbilitySystem/AuraAbilitySystemLibray.h"
#include "Kismet/GameplayStatics.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "UI/HUD/AuraHUD.h"
#include "Player/AuraPlayerState.h"

UOverlayWidgetController* UAuraAbilitySystemLibray::GetOverlayWidgetController(const UObject* WorldContextObject)
{
	if (auto* PC = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if (auto* AuraHUD = Cast<AAuraHUD>(PC->GetHUD()))
		{
			auto* PS = PC->GetPlayerState<AAuraPlayerState>();
			auto* ASC = PS->GetAbilitySystemComponent();
			auto* AS = PS->GetAttributeSet();
			const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
			return AuraHUD->GetOverlayWidgetController(WidgetControllerParams);
		}
	}

	return nullptr;
}

UAttributeMenuWidgetController* UAuraAbilitySystemLibray::GetAttributeMenuWidgetController(
	const UObject* WorldContextObject)
{
	if (auto* PC = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if (auto* AuraHUD = Cast<AAuraHUD>(PC->GetHUD()))
		{
			auto* PS = PC->GetPlayerState<AAuraPlayerState>();
			auto* ASC = PS->GetAbilitySystemComponent();
			auto* AS = PS->GetAttributeSet();
			const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
			return AuraHUD->GetAttributeMenuWidgetController(WidgetControllerParams);
		}
	}

	return nullptr;
}
