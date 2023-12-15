#include <iostream>
using namespace std;

#define TASK 1  // поменяйте значение TASK что бы разблоуировать задание 

#if TASK == 1

class Fraction
{
	int Numerator;   // числитель
	int Denominator; // знаменатель
public:

	Fraction() {
		Numerator = 0;
		Denominator = 1;
	}

	Fraction(int numerator, int denominator) {
		Numerator = numerator;
		Denominator = denominator;
	}

	void SetNumeratorFirst() {
		do
		{
			cout << "Enter the numerator for the first fraction: \n";
			cin >> Numerator;

		} while (Numerator == 0);

	}
	void SetDenominatorFirst() {

		do
		{
			cout << "Enter the denominator for the first fraction: \n";
			cin >> Denominator;

		} while (Denominator == 0);
	}
	void SetNumeratorSecond() {

		do
		{
			cout << "Enter the numerator for the second fraction: \n";
			cin >> Numerator;

		} while (Numerator == 0);
	}

	void SetDenominatorSecond() {
		do
		{
			cout << "Enter the denominator for the second fraction: \n";
			cin >> Denominator;

		} while (Denominator == 0);
	}

	void Sum(Fraction fraction2) {

		int resultNumerator = (Numerator) * (fraction2.Denominator) + (fraction2.Numerator) * (Denominator);
		int resultDenominator = Denominator * fraction2.Denominator;
		if ((resultNumerator == resultDenominator) || (resultNumerator == 0))
		{
			cout << Numerator << "/" << Denominator << " + " << fraction2.Numerator << "/" << fraction2.Denominator << " = " << resultNumerator /resultDenominator << endl;
		}
		else {
			cout << Numerator << "/" << Denominator << " + " << fraction2.Numerator << "/" << fraction2.Denominator << " = " << resultNumerator << "/" << resultDenominator << endl;
		}
	}

	void Subtract(Fraction fraction2)
	{
		int resultNumerator = Numerator * (fraction2.Denominator) - (fraction2.Numerator) * Denominator;
		int resultDenominator = Denominator * fraction2.Denominator;
		if ((resultNumerator == resultDenominator) || (resultNumerator == 0))
		{
			cout << Numerator << "/" << Denominator << " - " << fraction2.Numerator << "/" << fraction2.Denominator << " = " << resultNumerator / resultDenominator << endl;
		}
		else {
			cout << Numerator << "/" << Denominator << " - " << fraction2.Numerator << "/" << fraction2.Denominator << " = " << resultNumerator << "/" << resultDenominator << endl;
		}
	}

	void Multiply(Fraction fraction2)
	{
		int resultNumerator = Numerator * fraction2.Numerator;
		int resultDenominator = Denominator * fraction2.Denominator;
		if ((resultNumerator == resultDenominator) || (resultNumerator == 0))
		{
			cout << Numerator << "/" << Denominator << " * " << fraction2.Numerator << "/" << fraction2.Denominator << " = " << resultNumerator / resultDenominator << endl;
		}
		else {
			cout << Numerator << "/" << Denominator << " * " << fraction2.Numerator << "/" << fraction2.Denominator << " = " << resultNumerator << "/" << resultDenominator << endl;
		}
	}

	void Divide(Fraction fraction2)
	{

		int resultNumerator = Numerator * fraction2.Denominator;
		int resultDenominator = Denominator * fraction2.Numerator;
		if ((resultNumerator == resultDenominator) || (resultNumerator == 0))
		{
			cout << Numerator << "/" << Denominator << " / " << fraction2.Numerator << "/" << fraction2.Denominator << " = " << resultNumerator / resultDenominator << endl;
		}
		else {
			cout << Numerator << "/" << Denominator << " / " << fraction2.Numerator << "/" << fraction2.Denominator << " = " << resultNumerator << "/" << resultDenominator << endl;
		}
	}

};

#elif TASK == 2
class Contact
{
	char* Name;
	char* LastName;
	char* Surname;
	int HomePhoneNumber;
	int WorkPhoneNumber;
	int PersonalPhoneNumber;
	int Age;

public:
	Contact() {//Конструктор без параметров 

		Name = nullptr;
		LastName = nullptr;
		Surname = nullptr;
		HomePhoneNumber = 0;
		WorkPhoneNumber = 0;
		PersonalPhoneNumber = 0;
		Age = 0;
}

	Contact(const char* name, const char* lastName, const char* surname, int homePhoneNumber, int workPhoneNumber, int personalPhoneNumber, int age) {//Конструктор с параметрами 

		Name = new char[strlen(name) + 1];
		strcpy_s(Name, strlen(name) + 1, name);

		LastName = new char[strlen(lastName) + 1];
		strcpy_s(LastName, strlen(lastName) + 1, lastName);

		Surname = new char[strlen(surname) + 1];
		strcpy_s(Surname, strlen(surname) + 1, surname);

		HomePhoneNumber = homePhoneNumber;
		WorkPhoneNumber = workPhoneNumber;
		PersonalPhoneNumber = personalPhoneNumber;
		Age = age;
	}

	void SetName(const char* name)
	{
		Name = new char[strlen(name) + 1];
		strcpy_s(Name, strlen(name) + 1, name);
	}

	void SetLastName(const char* lastName)
	{

		LastName = new char[strlen(lastName) + 1];
		strcpy_s(LastName, strlen(lastName) + 1, lastName);
	}

	void SetSurname(const char* surname)
	{

		Surname = new char[strlen(surname) + 1];
		strcpy_s(Surname, strlen(surname) + 1, surname);
	}

	void SetWorkPhoneNumber(int workPhoneNumber)
	{
		WorkPhoneNumber = workPhoneNumber;
	}

	void SetHomePhoneNumber(int homePhoneNumber)
	{
		HomePhoneNumber = homePhoneNumber;
	}

	void SetPersonalPhoneNumber(int personalPhoneNumber)
	{
		PersonalPhoneNumber = personalPhoneNumber;
	}
	void SetAge(int age)
	{
		Age = age;
	}


	void SetName()
	{
		if (Name != nullptr)
		{
			delete[] Name;
		}

		cout << "Enter name: ";
		char tempName[30];
		cin >> tempName;
		Name = new char[strlen(tempName) + 1];
		strcpy_s(Name, strlen(tempName) + 1, tempName);
	}

	void SetLastName()
	{

		if (LastName != nullptr)
		{
			delete[] LastName;
		}

		cout << "Enter last name: ";
		char tempLastName[30];
		cin >> tempLastName;
		LastName = new char[strlen(tempLastName) + 1];
		strcpy_s(LastName, strlen(tempLastName) + 1, tempLastName);
	}

	void SetSurname()
	{
		if (Surname != nullptr)
		{
			delete[] Surname;
		}

		cout << "Enter surname: ";
		char tempSurname[30];
		cin >> tempSurname;
		Surname = new char[strlen(tempSurname) + 1];
		strcpy_s(Surname, strlen(tempSurname) + 1, tempSurname);
	}


	void SetHomePhoneNumber() {


		do {
			cout << "Enter home phone number: ";
			cin >> HomePhoneNumber;

			if (cin.fail()) {
				cin.clear(); // Сброс флага ошибки ввода
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера ввода
			}
			else {
				break;
			}

		} while (true);

	}

	void SetWorkPhoneNumber() {

		do {
			cout << "Enter work phone number: ";
			cin >> WorkPhoneNumber;

			if (cin.fail()) {
				cin.clear(); // Сброс флага ошибки ввода
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера ввода
			}
			else {
				break;
			}

		} while (true);

	}

	void SetPersonalPhoneNumber() {

		do {
			cout << "Enter personal phone number: ";
			cin >> PersonalPhoneNumber;

			if (cin.fail()) {
				cin.clear(); // Сброс флага ошибки ввода
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера ввода
			}
			else {
				break;
			}

		} while (true);
	}

	void SetAge()
	{
		do {
			cout << "Enter age: ";
			cin >> Age;

			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else {
				break;
			}
		} while (true);
	}

	void Output()
	{
		if (Name == nullptr || LastName == nullptr || Surname == nullptr)
		{
			cout << "Empty object!\n";
			return;
		}

		cout << "Name: " << Name << endl
			<< "Last Name: " << LastName << endl
			<< "Surname: " << Surname << endl
			<< "Home phone number: " << HomePhoneNumber << endl
			<< "Work phone number: " << WorkPhoneNumber << endl
			<< "Personal phone number: " << PersonalPhoneNumber << endl
			<< "Age: " << Age << endl
			<< endl;
	}


	~Contact() {//Диструктор 

		delete[] Name;
		delete[] LastName;
		delete[] Surname;
	}
};

void ContactOutPut(Contact* arr, int& size) {

	for (int i = 0; i < size; i++)//вывод всей информации
	{
		cout << "\033[1;34m------Info about " << i + 1 << " persone:------\033[0m\n\n";
		arr[i].Output();
	}
}

void ContactAdd(Contact*& arr, int& size) {

	cout << "\033[1;32mEnter a new contact:\033[0m\n " << endl;

	Contact* newArr = new Contact[size + 1];

	for (int i = 0; i < size; i++) {

		newArr[i] = arr[i];
	}

	newArr[size].SetName();
	newArr[size].SetLastName();
	newArr[size].SetSurname();
	newArr[size].SetHomePhoneNumber();
	newArr[size].SetWorkPhoneNumber();
	newArr[size].SetPersonalPhoneNumber();
	newArr[size].SetAge();

	//delete[] arr;
	arr = newArr;

	size++;
}

void ContactDelete(Contact*& arr, int& size) {

	if (size > 0) {

		int indexToDelete;

		cout << "\033[1;31mEnter the index of the contact you want to delete (1 to " << size << "):\033[0m\n ";
		cin >> indexToDelete;
		indexToDelete--;

		if (indexToDelete >= 0 && indexToDelete < size) {

			Contact* newArr = new Contact[size - 1];

			for (int i = 0, j = 0; i < size; i++) {

				if (i != indexToDelete) {

					newArr[j] = arr[i];
					j++;
				}
			}

			//delete[] arr;
			arr = newArr;

			size--;
			cout << "\033[1;31mContact at index " << indexToDelete + 1 << " deleted\033[0m\n\n\n";
		}
		else {
			cout << "\033[1;31mNo contacts deleted\033[0m\n\n\n";
		}
	}
	else {
		cout << "\033[1;31mNo contacts to delete\033[0m\n\n\n";
	}
}


#endif



int main()
{
#if TASK == 1
	Fraction fraction1;
	Fraction fraction2;

	fraction1.SetNumeratorFirst();
	fraction1.SetDenominatorFirst();
	fraction2.SetNumeratorSecond();
	fraction2.SetDenominatorSecond();

	cout << endl;

	fraction1.Sum(fraction2);
	fraction1.Subtract(fraction2);
	fraction1.Multiply(fraction2);
	fraction1.Divide(fraction2);
#elif TASK == 2
	Contact person;

	int size = 2;
	Contact* arr = new Contact[size];

	for (int i = 0; i < size; i++) {
		cout << "\033[1;32m------Enter info for " << i + 1 << " persone:------\033[0m\n\n\n";
		arr[i].SetName();
		arr[i].SetLastName();
		arr[i].SetSurname();
		arr[i].SetHomePhoneNumber();
		arr[i].SetWorkPhoneNumber();
		arr[i].SetPersonalPhoneNumber();
		arr[i].SetAge();//в качестве другой информации ыозраст 
		cout << endl;
	}

	cout << "\n\n";

	ContactOutPut(arr, size);
	ContactAdd(arr, size);
	ContactOutPut(arr, size);
	ContactDelete(arr, size);
	ContactOutPut(arr, size);
	delete[] arr;

#endif
	return 0;
}

