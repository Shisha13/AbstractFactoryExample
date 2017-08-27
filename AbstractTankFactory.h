#pragma once
#include"Details.h"
#include<assert.h>

class AbstractTankFactory
{

	
public:
	virtual ~AbstractTankFactory() = 0 {};
	virtual TRACKS::ITrack* CreateTrack() = 0;
	virtual BODY::IBody* CreateBody() = 0;
	
	
};

class T_34_Factory : public AbstractTankFactory
{
public:
	~T_34_Factory();
	TRACKS::ITrack* CreateTrack();
	BODY::IBody* CreateBody();


};
class T_46_Factory : public AbstractTankFactory
{
		
public:
	~T_46_Factory();
	TRACKS::ITrack* CreateTrack();
	BODY::IBody* CreateBody();

};
class T_72B_Factory : public AbstractTankFactory
{
public:
	
	~T_72B_Factory();
	TRACKS::ITrack* CreateTrack();
	BODY::IBody* CreateBody();

};
class T_92_Factory : public AbstractTankFactory
{

public:
	~T_92_Factory();
	TRACKS::ITrack* CreateTrack();
	BODY::IBody* CreateBody();

};




