// Fill out your copyright notice in the Description page of Project Settings.

#include "DestroyableElement.h"


// Sets default values
ADestroyableElement::ADestroyableElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADestroyableElement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADestroyableElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

