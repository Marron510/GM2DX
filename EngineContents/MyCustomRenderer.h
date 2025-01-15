#pragma once
#include <EngineCore/Renderer.h>


// Ό³Έν :
class MyCustomRenderer : public URenderer
{
public:
	// constrcuter destructer
	MyCustomRenderer();
	~MyCustomRenderer();

	// delete Function
	MyCustomRenderer(const MyCustomRenderer& _Other) = delete;
	MyCustomRenderer(MyCustomRenderer&& _Other) noexcept = delete;
	MyCustomRenderer& operator=(const MyCustomRenderer& _Other) = delete;
	MyCustomRenderer& operator=(MyCustomRenderer&& _Other) noexcept = delete;

	void BeginPlay() override;
	void Render(UEngineCamera* _Camera, float _DeltaTime) override;

protected:

private:
};

