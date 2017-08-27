#include "Details.h"


using namespace TRACKS;
using namespace BODY;

TRACKS::T_34Track::~T_34Track()
{
}

TRACKS::T_34Track::T_34Track():ITrack()
{
	Power = 40;
	std::cout << "Track for T-34 Created!" << std::endl;
	std::cout << "Power: "<<Power<<std::endl;
}



TRACKS::T_46Track::~T_46Track()
{
}

TRACKS::T_46Track::T_46Track() :ITrack()
{
	Power = 50;
	std::cout << "Track for T-46 Created!" << std::endl;
	std::cout << "Power: " << 50 << std::endl;
}


TRACKS::T_72BTrack::~T_72BTrack()
{
}

TRACKS::T_72BTrack::T_72BTrack() :ITrack()
{
	Power = 60;
	std::cout << "Track for T-72B Created!" << std::endl;
	std::cout << "Power: " << 60 << std::endl;
}


TRACKS::T_92Track::~T_92Track()
{
}

TRACKS::T_92Track::T_92Track() :ITrack()
{
	Power = 70;
	std::cout << "Track for T-92 Created!" << std::endl;
	std::cout << "Power: " << 70 << std::endl;
}



BODY::T_34Body::~T_34Body()
{
}

BODY::T_34Body::T_34Body(): IBody()
{
	Armor = 45;
	std::cout << "Armor for T-34 Created!" << std::endl;
	std::cout << "Armor: " << 45 << std::endl;
}


BODY::T_46Body::~T_46Body()
{
}

BODY::T_46Body::T_46Body() : IBody()
{
	Armor = 55;
	std::cout << "Armor for T-46 Created!" << std::endl;
	std::cout << "Armor: " << 55 << std::endl;
}


BODY::T_72BBody::~T_72BBody()
{
}

BODY::T_72BBody::T_72BBody() : IBody()
{
	Armor = 65;
	std::cout << "Armor for T-72B Created!" << std::endl;
	std::cout << "Armor: " << 65 << std::endl;
}


BODY::T_92Body::~T_92Body()
{
}

BODY::T_92Body::T_92Body() : IBody()
{
	Armor = 78;
	std::cout << "Armor for T-92 Created!" << std::endl;
	std::cout << "Armor: " << 78 << std::endl;
}

