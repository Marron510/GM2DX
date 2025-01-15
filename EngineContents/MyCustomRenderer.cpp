#include "PreCompile.h"
#include "MyCustomRenderer.h"

MyCustomRenderer::MyCustomRenderer()
{
	CreateRenderUnit();
	SetMesh("octagon");
	SetMaterial("TestMaterial");
}

MyCustomRenderer::~MyCustomRenderer()
{
}

void MyCustomRenderer::BeginPlay()
{
	URenderer::BeginPlay();
}

void MyCustomRenderer::Render(UEngineCamera* _Camera, float _DeltaTime)
{
	URenderer::Render(_Camera, _DeltaTime);

}


