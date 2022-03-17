#include <iostream>
#include <limits>

using namespace std;

string name, sl, el;
float payment;
	
void home(){
	cout << endl;
	cout << "===============================================" << endl;
	cout << "\t      WELCOME TO LRT LINE 2" << endl;
	cout << "===============================================" << endl << endl << endl;
	cout << "-------------------STATIONS--------------------" << endl;
	cout << "|  \t\t\t\t\t      |" << endl;
	cout << "|  [Recto] \t  [Legarda] \t   [Pureza]   |" << endl;
	cout << "|  [V.Mapa] \t  [J.Ruiz] \t   [Gilmore]  |" << endl;
	cout << "|  [BG Belmonte]  [Araneta-Cubao]  [Anonas]   |" << endl;
	cout << "|  [Katipunan] \t  [Santolan] \t\t      |" << endl;
	cout << "|  \t\t\t\t\t      |" << endl;
	cout << "-----------------------------------------------" << endl << endl;
}

void el_Loop(){
	while (el != "Recto" && el != "Legarda" && el != "Pureza" && el != "V.Mapa" && el != "J.Ruiz" && el != "Gilmore" && el != "BG Belmonte" && el != "Araneta-Cubao"  && el != "Anonas"  && el != "Katipunan"  && el != "Santolan") {
		cout << "Incorrect Station, Please enter correct station: ";
		getline(cin, el);
	}
}

void sl_Loop(){
	while (sl != "Recto" && sl != "Legarda" && sl != "Pureza" && sl != "V.Mapa" && sl != "J.Ruiz" && sl != "Gilmore" && sl != "BG Belmonte" && sl != "Araneta-Cubao"  && sl != "Anonas"  && sl != "Katipunan"  && sl != "Santolan") {
		cout << "Incorrect Station, Please enter correct station: ";
		getline(cin, sl);
	}
}

void tv_15(){ //ticket value: 15 pesos
	cout << endl << endl;
			cout << "==========================================" << endl;
			cout << "||\tJourney: " << sl << " to " << el << "\t||" << endl;
			cout << "||\tTicket Value: 15" << "\t\t||" << endl;
			cout<< "=========================================="<<endl;
			cout << "Customer Name: " << name <<endl;
			cout << "Enter your payment: ";
			cin >> payment;
	/* while (payment < 15) 
			{
				while(!(cin >> payment)) 
				{
					cout << "Error, please enter only a number! " << endl;
					cout << "Enter your payment: ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Insufficient Balance! Enter again your payment!" << endl;
				cout << "Enter your payment: ";	
				cin >> payment;
			}
	*/
			while (payment < 15) {
				if (cin.fail())
				{
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Invalid Input" << endl;
				cout << "Insufficient Balance! Enter again your payment!" << endl;
				cout << "Enter your payment: ";	
				cin >> payment;
			}
	cout << "Payment: " << payment << endl;
	cout << "Change: " << payment - 15;
}
void tv_20(){ //ticket value: 20 pesos
	cout << endl << endl;
			cout << "==========================================" << endl;
			cout << "||\tJourney: " << sl << " to " << el << "\t||" << endl;
			cout << "||\tTicket Value: 20" << "\t\t||" << endl;
			cout<< "=========================================="<<endl;
			cout << "Customer Name: " << name <<endl;
			cout << "Enter your payment: ";
			cin >> payment;
			while (payment < 20) {
				if (cin.fail())
				{
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Invalid Input" << endl;
				cout << "Insufficient Balance! Enter again your payment!" << endl;
				cout << "Enter your payment: ";	
				cin >> payment;
			}
	cout << "Payment: " << payment << endl;
	cout << "Change: " << payment - 15;
}
void tv_25(){ //ticket value: 25 pesos
	cout << endl << endl;
			cout << "==========================================" << endl;
			cout << "||\tJourney: " << sl << " to " << el << "\t||" << endl;
			cout << "||\tTicket Value: 25" << "\t\t||" << endl;
			cout<< "=========================================="<<endl;
			cout << "Customer Name: " << name <<endl;
			cout << "Enter your payment: ";
			cin >> payment;
			while (payment < 25) {
				if (cin.fail())
				{
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Invalid Input" << endl;
				cout << "Insufficient Balance! Enter again your payment!" << endl;
				cout << "Enter your payment: ";	
				cin >> payment;
			}
	cout << "Payment: " << payment << endl;
	cout << "Change: " << payment - 15;
}
int main() {
	home();
	cout << "\nEnter your name: ";
	getline(cin, name);
	cout << "\n(PLEASE ENTER THE EXACT WORD!)" << endl;
	cout << "Enter Start Location: ";
	getline(cin, sl);
	sl_Loop();
	cout << "Enter End Location: ";
	getline(cin, el);
	el_Loop();
	if (sl == "Recto") {
		while (el == "Recto") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Legarda" || el == "Pureza" || el == "V.Mapa") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "J.Ruiz" || el == "Gilmore" || el == "Betty Go-Belmonte" || el == "Araneta-Cubao") {
			system("cls");
			home();
			tv_20();
		}
		else if (el == "Anonas" || el == "Katipunan" || el == "Santolan") {
			system("cls");
			system("cls");
			home();
			tv_25();
		}
	}
	else if (sl == "Legarda") {
		while (el == "Legarda") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Recto" || el == "Pureza" || el == "V.Mapa" || el == "J.Ruiz") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "Gilmore" || el == "Betty Go-Belmonte" || el == "Araneta-Cubao" || el == "Anonas") {
			system("cls");
			home();
			tv_20();
		}
		else if (el == "Katipunan" || el == "Santolan") {
			system("cls");
			home();
			tv_25();
		}
	}
	else if (sl == "Pureza") {
		while (el == "Pureza") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Recto" || el == "Legarda" || el == "V.Mapa" || el == "J.Ruiz" || el == "Gilmore") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "Betty Go-Belmonte" || el == "Araneta-Cubao" || el == "Anonas" || el == "Katipunan") {
			system("cls");
			home();
			tv_20();
		}
		else if (el == "Santolan") {
			system("cls");
			home();
			tv_25();
		}
	}
	else if (sl == "V.Mapa") {
		while (el == "V.Mapa") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Recto" || el == "Legarda" || el == "Pureza" || el == "J.Ruiz" || el == "Gilmore" || el == "Betty Go-Belmonte") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "Araneta-Cubao" || el == "Anonas" || el == "Katipunan") {
			system("cls");
			home();
			tv_20();
		}
		else if (el == "Santolan") {
			system("cls");
			home();
			tv_25();
		}
	}
	else if (sl == "J.Ruiz") {
		while (el == "J.Ruiz") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Legarda" || el == "Pureza" || el == "V.Mapa" || el == "Gilmore" || el == "Betty Go-Belmonte" || el == "Araneta-Cubao") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "Recto" || el == "Anonas" || el == "Katipunan" || el == "Santolan") {
			system("cls");
			home();
			tv_20();
		}
	}
	else if (sl == "Gilmore") {
		while (el == "Gilmore") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Pureza" || el == "V.Mapa" || el == "J.Ruiz" || el == "Betty Go-Belmonte" || el == "Araneta-Cubao" || el == "Anonas") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "Recto" || el == "Legarda" || el == "Katipunan" || el == "Santolan") {
			system("cls");
			home();
			tv_20();
		}
	}
	else if (sl == "BG Belmonte") {
		while (el == "BG Belmonte") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Katpinuan" || el == "V.Mapa" || el == "Gilmore" || el == "J.Ruiz" || el == "Araneta-Cubao" || el == "Anonas") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "Recto" || el == "Legarda" || el == "Santolan" || el == "Pureza") {
			system("cls");
			home();
			tv_20();
		}
	}
	else if (sl == "Araneta-Cubao") {
		while (el == "Araneta-Cubao") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Santolan" || el == "Katipunan" || el == "Gilmore" || el == "J.Ruiz" || el == "Betty Go-Belmonte" || el == "Anonas") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "Recto" || el == "Legarda" || el == "Pureza" || el == "V.Mapa") {
			system("cls");
			home();
			tv_20();
		}
	}
	else if (sl == "Anonas") {
		while (el == "Anonas") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Santolan" || el == "Katipunan" || el == "Gilmore" || el == "J.Ruiz" || el == "Betty Go-Belmonte" || el == "Araneta-Cubao") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "J.Ruiz" || el == "Legarda" || el == "Pureza" || el == "V.Mapa") {
			system("cls");
			home();
			tv_20();
		}
		else if (el == "Recto") {
			system("cls");
			home();
			tv_25();
		}
	}
	else if (sl == "Katipunan") {
		while (el == "Katipunan") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Santolan" || el == "Anonas" || el == "Betty Go-Belmonte" || el == "Araneta-Cubao") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "J.Ruiz" || el == "Pureza" || el == "V.Mapa" || el == "Gilmore") {
			system("cls");
			home();
			tv_20();
		}
		else if (el == "Recto" || el == "Legarda") {
			system("cls");
			home();
			tv_25();
		}
	}
	else if (sl == "Santolan") {
		while (el == "Santolan") {
			cout << "Please do not enter the same station. Please try again" << endl;
			getline(cin, el);
			el_Loop();
		}
		if (el == "Katipunan" || el == "Anonas" || el == "Araneta-Cubao") {
			system("cls");
			home();
			tv_15();
		}
		else if (el == "J.Ruiz" || el == "Gilmore" || el == "Betty Go-Belmonte") {
			system("cls");
			home();
			tv_20();
		}
		else if (el == "Recto" || el == "Legarda" || el == "Pureza" || el == "V.Mapa") {
			system("cls");
			home();
			tv_25();
		}
	}
	else {
		cout << "Name does no categorize. Please Try again!" << endl; //wala lang extra lines lang 'to :|
	}
	cout << endl;
	system("pause");
	return 0;
}
