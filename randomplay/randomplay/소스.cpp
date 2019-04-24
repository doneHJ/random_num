#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class test {

private:
	int save1[5];
	int save2[7];
	int i;
public:

	void choice() {
		int selection;

		cout << "È¦¼ö¿Í Â¦¼öÁß ¹«¾ùÀ» ¼±ÅÃÇÒ°Å¾ß(È¦¼ö¸é 1,Â¦¼ö¸é2):" << endl;
		cin >> selection;
		if (selection == 1)
		{
			even();
		}
		if (selection == 2)
		{
			odd();
		}

	};
	void odd() {
		int random1;



		srand((unsigned int)time(NULL));
		for (i = 0; i < 5; i++) {
			random1 = rand() % 100;

			if (random1 % 2 == 0)
			{
				save1[i] = random1;
			}
			else
			{
				save1[i] = random1 + 1;
			}
			oddshow();
		}
	};
	void even() {
		int random2;

		srand((unsigned int)time(NULL));
		for (i = 0; i < 7; i++) {
			random2 = rand() % 100;

			if (random2 % 2 == 1)
			{
				save2[i] = random2;
			}
			else
			{
				save2[i] = random2 + 1;
			}
			evenshow();
		}

	};
	void oddshow() {
		cout << save1[i] << endl;
	}
	void evenshow() {
		cout << save2[i] << endl;
	}
};
int main(void) {
	test abc;
	abc.choice();
	return 0;
}