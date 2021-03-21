// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Private/FirstSCChartFSM.h"
#include "FirstSCChart.generated.h"

UCLASS()
class AFirstSCChart : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFirstSCChart();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FirstSCChartFSM SCChartsFSM = FirstSCChartFSM();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
