// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MapMarkerWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFindPathToMarker, UMapMarkerWidget*, MarkerWidget, bool, bStart);

class UMapMarkerComponent;
class UImage;

UCLASS()
class MAPSYSTEM_API UMapMarkerWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	/**Called when the left mouse button is clicked on this widget */
	UFUNCTION(BlueprintNativeEvent)
		void OnLeftMouseButtonDown();

	/**Called when the right mouse button is clicked on this widget */
	UFUNCTION(BlueprintNativeEvent)
		void OnRightMouseButtonDown();

	UFUNCTION()
		void CallOnFindPathToMarker(bool bFindingPath);

	UFUNCTION()
		void HideMarker();


	UMapMarkerComponent* OwningComponent;

	FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	FReply NativeOnMouseButtonDoubleClick(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;


public:

	UPROPERTY(BlueprintReadOnly, Category = MapMarkerWidget, meta = (BindWidget))
		UImage* Icon;


	/**If true, then the instance is on the minimap */
	UPROPERTY(BlueprintReadOnly, Category = MarkerInfo)
		bool bOnBigMap;

	/**Called when starts or stops finding path to this marker */
	UPROPERTY(BlueprintAssignable)
		FOnFindPathToMarker OnFindPathToMarker;

	/**This function is called when the marker is created in the map or minimap widget. This is where variables are set and delegates are bound */
	UFUNCTION(BlueprintNativeEvent, Category = MarkerInfo)
		void InitializeMarker(UMapMarkerComponent* MarkerComponent);

	/**Returns the marker component of this marker widget */
	UFUNCTION(BlueprintPure, Category = MarkerInfo)
		FORCEINLINE UMapMarkerComponent* GetOwningComponent() const { return OwningComponent; };
};
