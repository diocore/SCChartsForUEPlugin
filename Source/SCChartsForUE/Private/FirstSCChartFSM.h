// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
extern "C" {
#include "../kieler-gen/FirstSCChart.h"
}

class FirstSCChartFSM
{
public:
	FirstSCChartFSM();
	~FirstSCChartFSM();
	void Reset();
	void Tick();
	TickData tickData = TickData();
};
