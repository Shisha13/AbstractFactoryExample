
#include<iostream>
#include"Player.h"
#include<memory>



int main()
{
	typedef std::shared_ptr<Tank> TankPointer;
	AbstractTankFactory *Tanks[4];
	Tanks[0] = new T_34_Factory();
	Tanks[1] = new T_46_Factory();
	Tanks[2] = new T_72B_Factory();
	Tanks[3] = new T_92_Factory();
	int a = 0;
	Tank* player = new Tank;
	PlayerUI *playerUi = new PlayerUI;
	while (1)
	{
		std::cin >> a;
		player = playerUi->createTank(Tanks[a]);
		TankPointer p(new Tank(*player));
		delete player;
		
		
	}
	delete playerUi;


	

	system("pause");
	return 0;
}