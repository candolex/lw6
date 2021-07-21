#include "RedBook.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	RedBook RB;
	for (int i = 0; i < 6; i++)
	{
		RB.sizeofR_B(i); cout << endl;
	}
	cout << endl;
	RB.setR_B(0, 15000, "Hawk", "Hawk (Accipiter) — genus of birds of the hawk family; length is from 30 to 68 cm,\n\t weight - from 125 to 1500 g. About 50 species are known, including three in the fauna of Ukraine : \n\tlarge hawk - the usual settled throughout the territory; \n\tsmall hawk - found throughout the territory, does not nest in forestless areas; Short-legged Hawk - a rare nesting, migratory in the eastern part of the country.");
	RB.setR_B(1, 5000, "Falcon", "Falcon (Falco), Staroukr. Balaban is a genus of birds of prey in the falcon family. \n\tThe scientific name Falco is derived from the Latin word falx (""sickle""). \n\tand emphasizes the crescent - shaped wings in flight.Falcons have left a rich cultural heritage \n\tin many world cultures, including Ukraine. \n\tBody length up to 60 cm, weight from 2 kg and more in adulthood.\n\tIt feeds on birds, rodents, insects. About 30 - 40 species are known, including in Ukraine - 8");
	RB.setR_B(2, 915817, "Snake", "Snake (Natrix) — genus of non-venomous snakes of the snake family (Colubridae). It has 4 types. \n\tThe total length reaches 80-174 cm. \n\tLoves areas with ponds, shores of forest lakes, mountain streams, steppe rivers. \n\tFound in the mountains at an altitude of 2000 m above sea level. They feed on amphibians and fish. \n\tThese are oviparous snakes.");
	RB.setR_B(3, 500000, "Viper", "Viper (Vipera) — genus of venomous snakes from the family Viper. Has 21 species. \n\t. \n\tFeed on lizards and rodents, as well as other changes. \n\tAll vipers are poisonous. Poison of hemolytic action (affects the blood and blood-forming organs). \n\tThese are oviparous and viviparous snakes.\n\tThey live in North Africa, Europe and Asia.");
	RB.setR_B(4, 25641, "Marten", "Marten(Martes) — genus of carnivorous mammals of the family Mustelidae.\n\tThese are small or medium-sized toes, with short 5 toes, \n\twhose fingers are free and armed with sharp small retracting claws, sharp snout, \n\tshort ears, long slender body and covered with long hair tail, \n\treaching half the length of the body.\n\tIn the fauna of Ukraine the genus is represented by two species:\n\tforest marten, or common (Martes martes) stone marten, \n\tor home (Martes foina).");
	RB.setR_B(5, 99999, "Cat", "Cat(Felis) — genus of carnivorous mammals of the cat family(Felidae).\n\tThe most famous representative of this genus is the domestic cat - a subspecies of the forest cat.\n\tThe smallest member of the genus is the species of ant tiger \n\tbody and head length is from 38 to 44 cm.\n\tThe largest is a reed cat with a body and head length of 62 to 76 cm.\n\tTypes of cats(Felis) live in a wide variety of natural environments, \n\tfrom swamps to deserts, and feed mostly on small mice, \n\tbirds and other small animals.");
	int a{}; int b{}; char flag = '1'; int choice{}; string s;
	while (flag == '1')
	{
		system("cls");
		cout << endl;
		cout << "\t\t\t\t\t* MENU *\n";
		cout << "\t\tDisplay information about all animals ........................... 1\n";
		cout << "\t\tDisplay information about animals of the drinking class .................. 2\n";
		cout << "\t\tDisplay information about animals of the pveny series ................... 3\n";
		cout << "\t\tPrint information about animals with the smallest population ......... 4\n";
		cout << "\t\tPrint information about the animals with the largest population ........ 5\n";
		cout << "\t\tExit......................................................... 0\n";
		cout << "\t\tMake your choice............................................. ";
		cin >> choice; if (choice < 0 || choice>5) continue;
		switch (choice)
		{
		case 1:
			cout << endl; cout << endl;
			for (int i = 0; i < 6; i++)
				RB.Print(i);
			break;
		case 2:
			cout << endl; cout << endl;
			cout << "\t\tMammals ................... 1\n";
			cout << "\t\tReptiles .................. 2\n";
			cout << "\t\tBirds .................... 3\n";
			cout << "\t\tChoose a class - "; cin >> a;
			switch (a)
			{
			case 1:
				s = "Mammal";
				break;
			case 2:
				s = "Reptiles";
				break;
			case 3:
				s = "Birds";
				break;
			}
			RB.Print_class(s);
			break;
		case 3:
			cout << endl; cout << endl;
			cout << "\t\tFalcons ................... 1\n";
			cout << "\t\tScaly ......................... 2\n";
			cout << "\t\tPredators .......................... 3\n";
			cout << "\t\tChoose a row - "; cin >> a;
			switch (a)
			{
			case 1:
				s = "Falcons";
				break;
			case 2:
				s = "Scaly";
				break;
			case 3:
				s = "Predators";
				break;
			}
			RB.Print_order(s);
			break;
		case 4:
			RB.Print_min();
			break;
		case 5:
			RB.Print_max();
			break;

		}
		if (choice != 0)
		{
			do
			{
				cout << endl; cout << endl;
				cout << "\n\t\tTurn to the menu - 1; Finish the program - 0; >> ";
				cin >> flag;
			} while (flag != '0' && flag != '1');
		}
		else
		{
			flag = '0';
		}
	}
	return 0;
}