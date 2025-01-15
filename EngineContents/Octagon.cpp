#include "PreCompile.h"
#include "Octagon.h"

#include <EngineCore/SpriteRenderer.h>
#include <EngineCore/DefaultSceneComponent.h>
#include <EngineCore/CameraActor.h>
#include <EngineCore/TimeEventComponent.h>
#include <EngineCore/Collision.h>
#include "MyCustomRenderer.h"
#include <EngineCore/EngineCamera.h>

AOctagon::AOctagon()
{
	std::shared_ptr<UDefaultSceneComponent> Default = CreateDefaultSubObject<UDefaultSceneComponent>();
	RootComponent = Default;

	Render = CreateDefaultSubObject<MyCustomRenderer>();
	Render->SetupAttachment(RootComponent);
	Render->SetScale3D(FVector{ 500.0f, 500.0f, 500.0f });
}

AOctagon::~AOctagon()
{

}