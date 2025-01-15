#pragma once
#include <EngineCore/Actor.h>

class AOctagon : public AActor
{
public:
	// 持失切 社瑚切
	AOctagon();
	~AOctagon();

	// delete funcion

	AOctagon(const AOctagon& _Other) = delete;
	AOctagon(AOctagon&& _Other) noexcept = delete;
	AOctagon& operator=(const AOctagon& _Other) = delete;
	AOctagon& operator=(AOctagon&& _Other) noexcept = delete;


protected:

private:
	std::shared_ptr<class MyCustomRenderer> Render;
};

