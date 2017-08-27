#pragma once
#include"AbstractTankFactory.h"

class PlayerUI;
class Tank
{	
protected:
	TRACKS::ITrack * track;
	BODY::IBody * body;
	friend PlayerUI;
};

class PlayerUI
{
	
public:
	Tank* createTank(AbstractTankFactory *Factory)
	{
		Tank *pTank= new Tank;
		pTank->body = Factory->CreateBody();
		pTank->track = Factory->CreateTrack();
		return pTank;
	}
};

