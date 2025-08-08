// Copyright The True Boolean


#include "UI/Widget/AuraUserWidget.h"


void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
