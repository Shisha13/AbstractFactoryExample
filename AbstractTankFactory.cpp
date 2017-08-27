#include "AbstractTankFactory.h"



T_34_Factory::~T_34_Factory()
{
}

TRACKS::ITrack * T_34_Factory::CreateTrack()
{
	return new TRACKS::T_34Track;
}

BODY::IBody * T_34_Factory::CreateBody()
{
	return new BODY::T_34Body;
}

T_46_Factory::~T_46_Factory()
{
}

TRACKS::ITrack * T_46_Factory::CreateTrack()
{
	return new TRACKS::T_46Track;
}

BODY::IBody * T_46_Factory::CreateBody()
{
	return new BODY::T_46Body;
}

T_72B_Factory::~T_72B_Factory()
{
}

TRACKS::ITrack * T_72B_Factory::CreateTrack()
{
	return new TRACKS::T_72BTrack;
}

BODY::IBody * T_72B_Factory::CreateBody()
{
	return new BODY::T_72BBody;
}


T_92_Factory::~T_92_Factory()
{
}

TRACKS::ITrack * T_92_Factory::CreateTrack()
{
	return new TRACKS::T_92Track;
}

BODY::IBody * T_92_Factory::CreateBody()
{
	return new BODY::T_92Body;
}
