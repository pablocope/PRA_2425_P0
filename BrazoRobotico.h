#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico{

	private:
		double pos_x, pos_y, pos_z;
		bool sujetando_objeto;
	
	public:
		BrazoRobotico(double x, double y, double z);

		double get_x();
		double get_y();
		double get_z();
		bool get_sujetando();

		void coger();
		void soltar();
		void mover(double x, double y, double z);

};

#endif
