// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MapPathDrawerWidget.generated.h"


UCLASS()
class MAPSYSTEM_API UMapPathDrawerWidget : public UUserWidget
{
	GENERATED_BODY()


protected:

	int32 NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PathLine)
		FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PathLine)
		float Thickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PathLine)
		bool bAntiAlias;

	TArray<FVector2D> PathPoints;
};