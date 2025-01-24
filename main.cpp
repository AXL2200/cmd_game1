#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>  
#include <ctime>

using namespace std;

int d[10][10];

int m = rand() % 9;
int n = rand() % 9;

void dot(int& scor, char space[10][10]) {
	space[m][n] = '@';
	
		srand(time(0));
space[m=rand() % 9][n=rand() % 9] = '.';
		scor += 10;

}

void map(char size[10][10], char space[10][10],char move[10][10],int& x,int& y,int& scor) {
	
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			if (i == 0)
				cout << size[i][o];
			else if (o == 0)
				cout << size[i][o];
			else if (i == 9)
				cout << size[i][o];
			else if (o == 9)
				cout << size[i][o];
			if (x == 5 && y == 8) {
				space[5][8] = '@';
			}
			for(int i=0;i<3;i++)
			if (space[m][n] == '@') {
				dot(scor, space);
			}
			 if (i != 0 && i != 9 && o != 0 && o != 9)
				cout << space[i][o];
		}
		cout << endl;
	}
}

void player(char move[10][10],char space[10][10],int& i,int& o,char input) {
	char a;
			
			if (input == 'w') {
				a = '@';
				space[i][o] = ' ';
				
				space[i-1][o] = a;
				i = i - 1;
			}
			if (input == 'd') {
				a = '@';
				space[i][o] = ' ';
				
				space[i][o+1] = a;
				o = o + 1;
			}
			if (input == 's') {
				a = '@';
				space[i][o] = ' ';
				
				space[i +1][o] = a;
				i = i + 1;
			}
			if (input == 'a') {
				a = '@';
				space[i][o] = ' ';
				
				space[i][o-1] = a;
				o = o - 1;
			}
}

int main()
{
	
	//////////////////
	char move[10][10];
	char size[10][10];
	char space[10][10];
	int x = 5;
	int y = 8;
	int scor = 0;
	//////////////////

	cout << "\t\t\t--->START<---" << endl;

	//////////////////
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			move[i][o] = '@';
			size[i][o] = '*';
			space[i][o] = ' ';
		}
	}
	///////////////////
	space[rand()%9][rand()%9] = '.';
	for (int i = 0;; ){
		
		map(size, space, move, x, y,scor);
		
char input= _getch();
		player(move, space,x,y,input);
	;
		if (x == 0 || x == 9 || y == 0 || y == 9) {
			cout <<"scor : "<<scor << "\t\t\t--->GAME OVER<---" << endl;
			return 0;
		}
		system("cls");
		cout << "\t\t\t--->START<---" << endl;
	}
}
