// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Counter.generated.h"

UCLASS()
class UE5_BASICS_API ACounter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACounter();
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	bool IsHit = false;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	int Counter = 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category="Counter")
	void Hit();
};
