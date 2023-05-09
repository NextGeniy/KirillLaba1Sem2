#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct Students
{
	
	string Fio="";
	string Sex="";
	int NumberOfGroup{};//номер группы
	int NumberOfList{};//номер в списке

	int Matan{};//матанализ
	int AG{};//алгебра и геометрия
	int Proga{};

	int Physics{};
	int English{};
	int Phylosofy{};
	int Fizra{};
	int history{};
	double avarage{};
	
		void printInfo() {
			cout << "=================================" << endl;
			cout << " Имя:\t" << Fio;
			cout << "\n Пол:\t" << Sex;
			cout << "\n Номер группы:\t" << NumberOfGroup;
			cout << "\n Номер в списке:\t" <<NumberOfList;
			cout << "\n Oценки за прошедшую сессию:\t";
			cout << "\n Матанализ:\t" << Matan;
			cout << "\n Алгебра и Геометрия:\t" << AG;
			cout << "\n Программирование:\t" << Proga;
			cout << "\n Физика:\t" << Physics;
			cout << "\n Иностранный язык:\t" << English;
			cout << "\n Философия:\t" << Phylosofy;
			cout << "\n Физкультура:\t" << Fizra;
			cout << "\n История:\t" << history << endl;
			cout << "=================================" << endl;
	}
	
}; 
void Sort(Students* array, int counter)
{
	for (int i = 0; i <= counter; i++) {
		for (int j = 0; j <= counter-i-1; j++) {
			if ((array[j].avarage) < (array[j + 1].avarage)) 
			{ 
				Students temp = array[j]; // создали дополнительную переменную
				array[j] = array[j + 1]; // меняем местами
				array[j + 1] = temp; // значения элементов
			}
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 100;
	Students* array = new Students[n];
	int counter = -1;
	int choose = 0;
	do {
		system("cls");

		cout << "Выберите действие" << endl;
		cout << "1. Создание новой записи о студенте" << endl;
		cout << "2. Внесение изменений в уже имеющуюся запись" << endl;
		cout << "3. Вывод всех данных о студентах" << endl;
		cout << "4. Вывод информации обо всех студентах группы N.N – инициализируется пользователем" << endl;
		cout << "5. Вывод топа самых успешных студентов с наивысшим по рейтингу средним баллом за прошедшую сессию" << endl;
		cout << "6. Вывод количества студентов мужского и женского пола" << endl;
		cout << "7. Вывод данных о студентах, которые не получают стипендию; учатся только на «4» и «5»; учатся только на «5»;" << endl;
		cout << "8. Вывод данных о студентах, имеющих номер в списке – k" << endl;
		cout << "9. Выход из программы" << endl;

		cin >> choose;
		switch (choose) 
		{
		case 1:
		{
			cin.ignore();
			counter += 1;
			cout << "\n Имя\t";
			getline(cin, array[counter].Fio);
			cout << "\n Пол(M/W)\t";
			getline(cin, array[counter].Sex);
			cout << "\n Номер группы\t";
			cin.ignore();
			cin >> array[counter].NumberOfGroup;
			cout << "\n Номер в списке\t";
			cin >> (array[counter].NumberOfList);
			cout << "\n Oценки за прошедшую сессию\t";
			cout << "\n Матанализ\t";
			cin >> (array[counter].Matan);
			cout << "\n Алгебра и Геометрия\t";
			cin >> (array[counter].AG);
			cout << "\n Программирование\t";
			cin >> (array[counter].Proga);

			cout << "\n Физика\t";
			cin >> (array[counter].Physics);
			cout << "\n Иностранный язык\t";
			cin >> (array[counter].English);
			cout << "\n Философия\t";
			cin >> (array[counter].Phylosofy);
			cout << "\n Физкультура\t";
			cin >> (array[counter].Fizra);
			cout << "\n История\t";
			cin >> (array[counter].history);
			system("pause");
		}break;
		case 2:
		{

			struct Students* p_Students = array;
			int choose2 = 0;
			cout << "Выберите номер студента и что из его данных хотите изменить" << endl;
			int x;
			cin >> x;


			if (x > counter)
			{
				break;
			}
			else
			{

				do {

					cout << "1. ФИО" << endl;
					cout << "2. Пол" << endl;
					cout << "3. Номер группы" << endl;
					cout << "4. Номер в списке" << endl;
					cout << "5. Оценку по матанализу" << endl;
					cout << "6. Оценку по аигу" << endl;
					cout << "7. Оценку по програмированию" << endl;
					cout << "8. Оценку по физике" << endl;
					cout << "9. Оценку по англ-яз" << endl;
					cout << "10. Оценку по философии" << endl;
					cout << "11. Оценку по физ-ре" << endl;
					cout << "12. Оценку по истори" << endl;
					cout << "13. выход" << endl;
					cin >> choose2;
					switch (choose2)
					{
					case 1:
					{
						string Fio = (*(p_Students + x)).Fio;
						string newFio;

						cin.ignore();
						getline(cin, newFio);

						(p_Students + x)->Fio = newFio;
					}break;
					case 2:
					{
						string Sex = (*(p_Students + x)).Sex;
						string newSex;
						cin.ignore();
						getline(cin, newSex);

						//cin >> newSex;
						(p_Students + x)->Sex = newSex;
					}break;
					case 3:
					{
						int NumberOfGroup = (*(p_Students + x)).NumberOfGroup;//номер группы
						int newGroup;
						cin >> newGroup;
						(p_Students + x)->NumberOfGroup = newGroup;
					}break;
					case 4:
					{
						int NumberOfList = (*(p_Students + x)).NumberOfList;//номер в списке
						int newNumbList;
						cin >> newNumbList;
						(p_Students + x)->NumberOfList = newNumbList;
					}break;
					case 5:
					{
						int Matan = (*(p_Students + x)).Matan;//матанализ
						int newMatan;
						cin >> newMatan;
						(p_Students + x)->Matan = newMatan;
					}break;
					case 6:
					{
						int AG = (*(p_Students + x)).AG;//алгебра и геометрия
						int newAG;
						cin >> newAG;
						(p_Students + x)->AG = newAG;
					}break;
					case 7:
					{
						int Proga = (*(p_Students + x)).Proga;
						int newProga;
						cin >> newProga;
						(p_Students + x)->Proga = newProga;
					}break;
					case 8:
					{
						int Physics = (*(p_Students + x)).Physics;
						int newPhysics;
						cin >> newPhysics;
						(p_Students + x)->Physics = newPhysics;
					}break;
					case 9:
					{
						int English = (*(p_Students + x)).English;
						int newEng;
						cin >> newEng;
						(p_Students + x)->English = newEng;
					}break;
					case 10:
					{
						int Phylosofy = (*(p_Students + x)).Phylosofy;
						int newPhyl;
						cin >> newPhyl;
						(p_Students + x)->Phylosofy = newPhyl;
					}break;
					case 11:
					{
						int Fizra = (*(p_Students + x)).Fizra;
						int newFizra;
						cin >> newFizra;
						(p_Students + x)->Fizra = newFizra;
					}break;
					case 12:
					{
						int history = (*(p_Students + x)).history;
						int newhistory;
						cin >> newhistory;
						(p_Students + x)->history = newhistory;

					}break;
					}
				} while (choose2 != 13);

				
			}
			system("pause");
		}break;
		case 3:
		{
			for (int i = 0; i < counter + 1; i++) {
				cout << "Студент №" << i << endl;
				array[i].printInfo();
			}
			system("pause");
		}break;
		case 4:
		{

			cout << "Введите номер группы" << endl;
			int Group = 0;
			cin >> Group;
			for (int i = 0; i <= counter; i++)
			{
				if (array[i].NumberOfGroup == Group)
				{

					cout << "=================================" << endl;
					cout << "Студент №" << i << endl;
					cout << " Имя:\t" << array[i].Fio;
					cout << "\n Пол:\t" << array[i].Sex;
					cout << "\n Номер группы:\t" << array[i].NumberOfGroup;
					cout << "\n Номер в списке:\t" << array[i].NumberOfList;
					cout << "\n Oценки за прошедшую сессию:\t";
					cout << "\n Матанализ:\t" << array[i].Matan;
					cout << "\n Алгебра и Геометрия:\t" << array[i].AG;
					cout << "\n Программирование:\t" << array[i].Proga;
					cout << "\n Физика:\t" << array[i].Physics;
					cout << "\n Иностранный язык:\t" << array[i].English;
					cout << "\n Философия:\t" << array[i].Phylosofy;
					cout << "\n Физкультура:\t" << array[i].Fizra;
					cout << "\n История:\t" << array[i].history << endl;
					cout << "=================================" << endl;

				}

			}
			system("pause");
		}break;
		case 5:
		{
			//5. + Вывод топа самых успешных студентов с наивысшим по рейтингу средним баллом за прошедшую сессию.
			cout << "Топ студентов с наивысшим по рейтингу средним баллом: " << endl;

			if (counter == -1)
			{
				cout << "Студентов нет" << endl;
			}
			else
			{

				for (int i = 0; i <= counter; i++)
				{
					array[i].avarage = (array[i].Matan + array[i].AG + array[i].Proga + array[i].Physics + array[i].English + array[i].Phylosofy + array[i].Fizra + array[i].history) / 8.0;
				}


				Sort(array, counter);
				for (int i = 0; i <= counter; i++)
				{
					cout << "=================================" << endl;

					cout << " Имя:\t" << array[i].Fio;
					cout << "\n Пол:\t" << array[i].Sex;
					cout << "\n Номер группы:\t" << array[i].NumberOfGroup;
					cout << "\n Номер в списке:\t" << array[i].NumberOfList;
					cout << "\n Oценки за прошедшую сессию:\t";
					cout << "\n Матанализ:\t" << array[i].Matan;
					cout << "\n Алгебра и Геометрия:\t" << array[i].AG;
					cout << "\n Программирование:\t" << array[i].Proga;
					cout << "\n Физика:\t" << array[i].Physics;
					cout << "\n Иностранный язык:\t" << array[i].English;
					cout << "\n Философия:\t" << array[i].Phylosofy;
					cout << "\n Физкультура:\t" << array[i].Fizra;
					cout << "\n История:\t" << array[i].history << endl;
					cout << "\n Среднее значение:\t" << array[i].avarage << endl;
					cout << "=================================" << endl;
				}
			}



			system("pause");
		}break;
		case 6:
		{
			int malecounter = 0;
			int femalecounter = 0;
			for (int i = 0; i <= counter; i++)
			{
				if (array[i].Sex == "M")
				{
					malecounter++;
				}
			}
			for (int i = 0; i <= counter; i++)
			{
				if (array[i].Sex == "W")
				{
					femalecounter++;
				}
			}
			cout << "Количество студентов мужского пола: " << malecounter << endl;
			cout << "Количество студентов женского пола: " << femalecounter << endl;
			system("pause");


		}break;
		case 7:
		{
			//7. + Вывод данных о студентах, которые не получают стипендию; учатся только на «хорошо» и «отлично»; учатся только на «отлично»;
			int choose3 = 0;
			for (int i = 0; i <= counter; i++)
			{
				array[i].avarage = (array[i].Matan + array[i].AG + array[i].Proga + array[i].Physics + array[i].English + array[i].Phylosofy + array[i].Fizra + array[i].history) / 8.0;
			}
			do {
				cout << "1. Студенты, которые не получают стипедию: " << endl;
				cout << "2. Студенты, которые учатся только на «хорошо» и «отлично»: " << endl;
				cout << "3. Студенты, которые учатся только на «отлично»: " << endl;

				cin >> choose3;
				switch (choose3)
				{
				case 1:
				{

					for (int i = 0; i <= counter; i++)
					{
						if ((array[i].Matan) < 4 || array[i].AG < 4 || array[i].Proga < 4)
						{
							array[i].printInfo();
						}
					}
				}break;
				case 2:
				{
					for (int i = 0; i <= counter; i++)
					{
						if ((array[i].avarage >= 4.0) && (array[i].avarage < 5.0))
						{
							array[i].printInfo();
						}
					}
				}break;
				case 3:
				{
					for (int i = 0; i <= counter; i++)
					{
						if (array[i].avarage == 5.0)
						{
							array[i].printInfo();
						}
					}
				}break;
				}
			} while (choose3 != 4);

		}break;
		case 8:
	    {
			cout << "Введите номер студента в списке: " << endl;
			int k=0;
			cin >> k;
			for (int i = 0; i <= counter; i++)
			{
				if ( k== array[i].NumberOfList)
				{

					cout << "=================================" << endl;
					cout << "Студент №" << i << endl;
					cout << " Имя:\t" << array[i].Fio;
					cout << "\n Пол:\t" << array[i].Sex;
					cout << "\n Номер группы:\t" << array[i].NumberOfGroup;
					cout << "\n Номер в списке:\t" << array[i].NumberOfList;
					cout << "\n Oценки за прошедшую сессию:\t";
					cout << "\n Матанализ:\t" << array[i].Matan;
					cout << "\n Алгебра и Геометрия:\t" << array[i].AG;
					cout << "\n Программирование:\t" << array[i].Proga;
					cout << "\n Физика:\t" << array[i].Physics;
					cout << "\n Иностранный язык:\t" << array[i].English;
					cout << "\n Философия:\t" << array[i].Phylosofy;
					cout << "\n Физкультура:\t" << array[i].Fizra;
					cout << "\n История:\t" << array[i].history << endl;
					cout << "=================================" << endl;

				}
			}system("pause");
			
		   }break;
		}
	} while (choose != 9);
	return 0;
}
