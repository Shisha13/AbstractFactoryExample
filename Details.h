#pragma once
#include<iostream>
typedef unsigned int ui;
namespace TRACKS
{
	class ITrack
	{
	protected:
		ui Power;
	public:
		virtual ~ITrack() = 0 {};
		
	};


	class T_34Track :public ITrack
	{
	public:
		~T_34Track();
		T_34Track();
	
	};
	class T_46Track :public ITrack
	{
	public:
		~T_46Track();
		T_46Track();
		
	};
	class T_72BTrack :public ITrack
	{
	public:
		T_72BTrack();
		~T_72BTrack();
		
	};
	class T_92Track :public ITrack
	{
	public:
		~T_92Track();
		T_92Track();
		
	};
}

namespace BODY
{
	
	class IBody
	{
	protected:
		ui Armor;
	public:
		virtual ~IBody() = 0 {};
		
	};

	class T_34Body : public IBody
	{
	public:
		~T_34Body();
		T_34Body();
		
	};
	class T_46Body : public IBody
	{
	public:
		~T_46Body();
		T_46Body();
	
	};
	class T_72BBody : public IBody
	{
	public:
		~T_72BBody();
		T_72BBody();
		
	};
	class T_92Body : public IBody
	{
	public:
		~T_92Body();
		T_92Body();
		
	};
}





