// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "UI/MapPathDrawerWidget.h"
#include <Blueprint/WidgetBlueprintLibrary.h>


int32 UMapPathDrawerWidget::NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	Super::NativePaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
	if (PathPoints.Num() != 0)
	{
		FPaintContext PaintContext(AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
		UWidgetBlueprintLibrary::DrawLines(PaintContext, PathPoints, Color, bAntiAlias, Thickness);
	}

	return LayerId;
}
