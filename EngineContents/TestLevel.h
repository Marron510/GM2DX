#pragma once
#include <EngineBase/Object.h>
#include "MyCustomRenderer.h"

class ATestLevel : public AGameMode
{
public:
	// 持失切 社瑚切
	ATestLevel();
	~ATestLevel();

	// delete funcion

	ATestLevel(const ATestLevel& _Other) = delete;
	ATestLevel(ATestLevel&& _Other) noexcept = delete;
	ATestLevel& operator=(const ATestLevel& _Other) = delete;
	ATestLevel& operator=(ATestLevel&& _Other) noexcept = delete;


	void Tick(float _DeltaTime) override;
	void BeginPlay() override;
	

protected:

private:
	std::shared_ptr<class AOctagon> Octagon;

};

