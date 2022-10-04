#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>


using namespace std;


int main()
{
	fstream theFile;

	ofstream MyFile("QualityPrice.txt");
	MyFile << "1798";
	MyFile.close();


	ofstream MyFile2("FordPrice.txt");
	MyFile2 << "888";
	MyFile2.close();

	string answer1;
	string answer2;
	string answer3;

	class VehicleMake {
	public:
		string Make1;
		string Make2;
		string Make3;
		string Make4;
		string Make5;
		string Make6;
	};

	VehicleMake Access1;
	Access1.Make1 = "Chevy";
	Access1.Make2 = "Toyota";
	Access1.Make3 = "Jeep";
	Access1.Make4 = "Ford";
	Access1.Make5 = "Acura";
	Access1.Make6 = "BMW";


	class VehiclePrice {
	public:
		int price1;
		int price2;
		int price3;
		int price4;
		int price5;
		int price6;
	};

	VehiclePrice Access2;
	Access2.price1 = 350;
	Access2.price2 = 490;
	Access2.price3 = 770;
	Access2.price4 = 910;
	Access2.price5 = 1050;
	Access2.price6 = 1260;

	class Budget {
	public:
		void setBalance() {
			Balance = 2400;
		}

		int getBalance() {
			return Balance;
		}

	private:
		int Balance = 2400;

	};

	Budget Amount;
	Amount.getBalance();


	class Hotels {
	public:
		string Hotel1;
		string Hotel2;
		string Hotel3;
		string Hotel4;
		string Hotel5;
		string Hotel6;

	};

	Hotels Access3;
	Access3.Hotel1 = "Comfort";
	Access3.Hotel2 = "Holiday";
	Access3.Hotel3 = "Quality";
	Access3.Hotel4 = "DoubleTree";
	Access3.Hotel5 = "Marriot";
	Access3.Hotel6 = "Hampton";


	class VehicleModel : public VehicleMake {
	public:
		string Chevy1 = "Equinox";
		string Chevy2 = "Traverse";
		string Toyota1 = "Corolla";
		string Toyota2 = "RAV4";
		string Jeep1 = "Renegade";
		string Jeep2 = "Compass";
		string Ford1 = "Mustang";
		string Ford2 = "Explorer";
		string Acura1 = "RDX";
		string Acura2 = "NSX";
		string BMW1 = "5 Series";
		string BMW2 = "3 Series";
	};

	VehicleModel Access7;
	Access7.Chevy1;
	Access7.Chevy2;
	Access7.Toyota1;
	Access7.Toyota2;
	Access7.Jeep1;
	Access7.Jeep2;
	Access7.Ford1;
	Access7.Ford2;
	Access7.Acura1;
	Access7.Acura2;
	Access7.BMW1;
	Access7.BMW2;


	class Prices : public Hotels {
	public:
		int Quality;
		int Comfort;
		int Holiday;
		int Hampton;
		int DoubleTree;
		int Marriot;
	};

	Prices Access4;
	Access4.Quality = 602;
	Access4.Comfort = 665;
	Access4.Holiday = 770;
	Access4.Hampton = 847;
	Access4.DoubleTree = 980;
	Access4.Marriot = 1253;





	cout << "\n\n\tWelcome to the C++ Car Rental Simulation.\n\n";
	cout << "In this simulation, you will pretend to look for a car to rent for a one week trip.\n";
	cout << "First, you must choose a hotel to stay at. Choose from all the different options.\n";
	cout << "You will have a set amount to be able to spend.\n";
	cout << "Choose wisely and have a great trip!!\n";

	cout << "\n\n\tWelcome to Travego!\n";
	cout << "We are here to make sure your travel experience is flawless and you are happy with everything you get.\n";
	cout << "Your budget is: $" << Amount.getBalance() << "\n";
	cout << "First things first, Choose your hotel that you want to stay at: \n";
	cout << Access3.Hotel1 << "\n" << Access3.Hotel2 << "\n" << Access3.Hotel3 << "\n" << Access3.Hotel4 << "\n" << Access3.Hotel5 << "\n" << Access3.Hotel6 << "\n";
	cin >> answer1;

	if (answer1 == Access3.Hotel3)
	{
		string QualityText;

		ifstream MyFile("QualityPrice.txt");

		while (getline(MyFile, QualityText)) {
			cout << "Remaining Balance is: " << QualityText << "\n";
		}

		MyFile.close();
		
	}

	cout << "Great, you have chosen your hotel, now you have to choose a rental car: \n";
	cout << Access1.Make1 << "\n" << Access1.Make2 << "\n" << Access1.Make3 << "\n" << Access1.Make4 << "\n" << Access1.Make5 << "\n" << Access1.Make6 << "\n";
	cin >> answer2;

	if (answer2 == Access1.Make1)
	{
		cout << "What Model? " << Access7.Chevy1 << " or " << Access7.Chevy2 << "?\n";
	}
	else if (answer2 == Access1.Make2)
	{
		cout << "What Model? " << Access7.Toyota1 << " or " << Access7.Toyota2 << "?\n";
	}
	else if (answer2 == Access1.Make3)
	{
		cout << "What Model? " << Access7.Jeep1 << " or " << Access7.Jeep2 << "?\n";
	}
	else if (answer2 == Access1.Make4)
	{
		cout << "What Model? " << Access7.Ford1 << " or " << Access7.Ford2 << "?\n";
	}
	else if (answer2 == Access1.Make5)
	{
		cout << "What Model? " << Access7.Acura1 << " or " << Access7.Acura2 << "?\n";
	}
	else if (answer2 == Access1.Make6)
	{
		cout << "What Model? " << Access7.BMW1 << " or " << Access7.BMW2 << "?\n";
	}
	else
	{
		cout << "Not Recognized...";
	}

	cin >> answer3;


	if (answer3 == Access7.Ford1)
	{
		string FordText;

		ifstream MyFile2("FordPrice.txt");

		while (getline(MyFile2, FordText)) {
			cout << "Remaining Balance is: " << FordText << "\n";
		}

		MyFile2.close();
	}

	cout << "Alright, you have chosen your hotel and rental car. You also have some extra cash left in your balance to use on the trip!!\n";
	cout << "We will send you your tickets in the mail and they will also be available through your email to scan at the gate.\n";
	cout << "Your rental car should be available once you arrive but if you have problems, please let us know right away!!\n";
	cout << "Thanks for choosing Travego!!\n";

	


	
}

