#include "PreCompile.h"
#include "TestLevel.h"

#include <EnginePlatform/EngineInput.h>

#include <EngineCore/SpriteRenderer.h>
#include <EngineCore/DefaultSceneComponent.h>
#include <EngineCore/CameraActor.h>
#include <EngineCore/TimeEventComponent.h>
#include <EngineCore/Collision.h>
#include "MyCustomRenderer.h"
#include <EngineCore/EngineCamera.h>
#include <EngineCore/Actor.h>

#include "Octagon.h"

ATestLevel::ATestLevel()
{
	
	Octagon = GetWorld()->SpawnActor<AOctagon>();


	std::shared_ptr<ACameraActor> Camera = GetWorld()->GetMainCamera();
	Camera->SetActorLocation({ 0.0f, 0.0f, -1000.0f, 1.0f });
	Camera->GetCameraComponent()->SetZSort(0, true);

}

ATestLevel::~ATestLevel()
{

}


void ATestLevel::BeginPlay()
{
	AGameMode::BeginPlay();
}
void ATestLevel::Tick(float _DeltaTime)
{
	AGameMode::Tick(_DeltaTime);
	Octagon->AddActorRotation(FVector{ 0.0f * _DeltaTime , 0.0f * _DeltaTime, 100.0f * _DeltaTime });

	if (UEngineInput::IsDown('P'))
	{
		GetWorld()->GetMainCamera()->FreeCameraSwitch();
	}
	
}
