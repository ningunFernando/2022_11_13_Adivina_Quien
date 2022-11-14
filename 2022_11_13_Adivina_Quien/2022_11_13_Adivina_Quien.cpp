// 2022_11_13_Adivina_Quien.cpp 
// Fernando Patino
// es un adivina quien 
//

#include <iostream>

int main()
{
	bool humano = false, alien = false, dosm = false, reach= false, sniper = false, MC= false, elite = false, profeta=false, grunt = false, monitor = false ;
	std::cout << "BIENVENIDO AL ADIVINA QUIEN DE HALO" << std::endl;
	std::cout << " Tu personaje es Humano? [0 = no][1 = si]" << std::endl;
	std::cin >> humano;		
	system("CLS");

	if (humano) {
		std::cout << "tu persopnaje mide menos de 2 metros?" << std::endl;
			std::cin >> dosm;
			if (dosm)
			{
				std::cout << "tu perosnaje es: la doctora halsey  " << std::endl;
			}
			else {
				std::cout << "tu personaje murio en reach?" << std::endl;
				std::cin >> reach;

				if (reach)
				{
					std::cout << "tu persopnaje es: george" << std::endl;
				}
				else {
					std::cout << "tu persopnaje es un francotirador?" << std::endl;
					std::cin >> sniper;
					if (sniper)
					{
						std::cout << "tu persopnaje es: es Linda" << std::endl;
					}
					else {
						std::cout << " tu personaje esta enamorado de una  IA?" << std::endl;
						std::cin >> MC;
						if (MC)
						{
							std::cout << "tu persopnaje es master chief" << std::endl;
						}
					}
				}
			}
	}
	
	else {
		std::cout << "tu persopnaje tiene la mitad de sus mandibulas?" << std::endl;
		std::cin >> elite;
		if (elite)
		{
			std::cout << "tu perosnaje es Rtas' Vadum el general 2 mandubulas" << std::endl;
		}
		else {
			std::cout << "tu personaje es un general?" << std::endl;
			std::cin >> grunt;

			if (grunt)
			{
				std::cout << "tu persopnaje es yab yab " << std::endl;
			}
			else {
				std::cout << "tu persopnaje es un San 'Shyuum " << std::endl;
				std::cin >> profeta;
				if (profeta)
				{
					std::cout << "tu persopnaje es el profeta de la verdad" << std::endl;
				}
				else {
					std::cout << " tu personaje estaba en el anillo z halo" << std::endl;
					std::cin >> monitor;
					if (monitor)
					{
						std::cout << "tu persopnaje es mendicant byas" << std::endl;
					}
				}
			}
		}
	}


}


