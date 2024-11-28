#include "BrazoRobotico.h"

//Constructor
BrazoRobotico::BrazoRobotico(double x, double y, double z)
	:pos_x(x), pos_y(y), pos_z(z), sujetando_objeto(false){}

//Métodos consultores
double BrazoRobotico::get_x(){
	return pos_x;
}
double BrazoRobotico::get_y(){
        return pos_y;
}
double BrazoRobotico::get_z(){
        return pos_z;
}
bool BrazoRobotico::get_sujetando(){
	return sujetando_objeto;
}

//Funciones del robot
void BrazoRobotico::coger(){
	sujetando_objeto = true;
}
void BrazoRobotico::soltar(){
	sujetando_objeto = false;
}
void BrazoRobotico::mover(double nuevo_x, double nuevo_y, double nuevo_z){
	pos_x = nuevo_x;
	pos_y = nuevo_y;
	pos_z = nuevo_z;
}

