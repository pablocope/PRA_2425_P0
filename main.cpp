#include "BrazoRobotico.h"
#include <iostream>

int main(){

	BrazoRobotico brazo(0.0,0.0,0.0);
	
	std::cout << "Posición actual: (" << brazo.get_x() << ", " << brazo.get_y() << ", " << brazo.get_z() << ")\n";

	brazo.mover(10, 20, 30);

	std::cout << "Posición actual: (" << brazo.get_x() << ", " << brazo.get_y() << ", " << brazo.get_z() << ")\n";

	brazo.coger();

	std::cout << "Sujetando objeto = " << brazo.get_sujetando() << "\n";

	brazo.soltar();

	std::cout << "Sujetando objeto = " << brazo.get_sujetando() << "\n";	

	return 0;
}
