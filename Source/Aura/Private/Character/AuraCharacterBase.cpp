// Copyright knj


#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase()
{
 	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}


