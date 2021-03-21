// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstSCChartFSM.h"

FirstSCChartFSM::FirstSCChartFSM()
{
}

FirstSCChartFSM::~FirstSCChartFSM()
{
}


void FirstSCChartFSM::Reset() {
    reset(&tickData);
}

void FirstSCChartFSM::Tick() {
    tick(&tickData);
}