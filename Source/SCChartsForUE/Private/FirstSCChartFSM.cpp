// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstSCChartFSM.h"

FirstSCChartFSM::FirstSCChartFSM()
{
}

FirstSCChartFSM::~FirstSCChartFSM()
{
}


void FirstSCChartFSM::Reset() {
    F_Reset(&tickData);
}

void FirstSCChartFSM::Tick() {
    F_Tick(&tickData);
}