/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <conio.h>
#include <time.h>
 #include <windows.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

void setcolor (unsigned short color)
{   HANDLE hCon = GetStdHandle (STD_OUTPUT_HANDLE);

SetConsoleTextAttribute (hCon, color);

}


int
main ()
{
  // Game pokemon
  /*
     1 
     2
     3
     4
     5
     6
     7
   */

//    int panjangPeta = 20; // x
//    int lebarPeta = 16; // y

//    int posisiKarakterY = 15;
//    int posisiKarakterX = 4;

  struct posisi
  {
    int panjangPeta;
    int lebarPeta;
    int koordinatY;
    int koordinatX;
    int koordinat;
  };

  struct pokeDex
  {
    struct pokemonTemplate
    {
      string pokemonName;
      string pokemonMoves[3];
      int hPoint;
      int pokemonLevel;
      int baseATK;
      int baseDEF;
      int baseSPATK;
      int baseSPDEF;
      int baseSPEED;
    };
    pokemonTemplate Bulbasaur;
    pokemonTemplate Pikachu;
  };

  pokeDex myPoke;
  posisi myPosisi;

  myPosisi.panjangPeta = 40;
  myPosisi.lebarPeta = 24;
  myPosisi.koordinatY = 2;
  myPosisi.koordinatX = 9;


  cout << "Karakter ada di y:" << myPosisi.koordinatX << ", x:" << myPosisi.
    koordinatY << "\n";

  int peta[myPosisi.lebarPeta][myPosisi.panjangPeta] = {
    {8, 8, 8, 8, 8, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {8, 8, 8, 8, 8, 8, 1, 1, 1, 1, 1, 2, 1, 5, 5, 1, 1, 1, 1, 1},
    {8, 8, 8, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 5, 5, 1, 1, 1, 1, 1},
    {8, 8, 8, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 8, 8, 8, 8, 8, 8, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 8, 8, 8, 8, 8, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 1, 1, 1},
    {1, 1, 1, 5, 5, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1},
    {1, 1, 1, 5, 5, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6},
    {1, 1, 5, 5, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1},
    {1, 1, 5, 5, 1, 1, 1, 1, 4, 4, 4, 1, 1, 4, 4, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  };


  int arrowKey;
  /*
     #define KEY_UP 72
     #define KEY_DOWN 80
     #define KEY_LEFT 75
     #define KEY_RIGHT 77
   */

  while (1)
    {
      // Input Keyboard
      cout << "Masukan arrow key ";
      arrowKey = (getch());
      cout << "Arrow key yang dimasukan " << myPosisi.koordinat << "\n";
      
      // Aturan menggerakkan karakter ke atas
      if (arrowKey == KEY_UP
	  && peta[myPosisi.koordinatY - 1][myPosisi.koordinatX] < 4)
	{
	  myPosisi.koordinatY -= 1;
	  myPosisi.koordinatY < 0 ? myPosisi.koordinatY =
	    0 : myPosisi.koordinatY;
	}
      else if (arrowKey == KEY_DOWN
	       && peta[myPosisi.koordinatY + 1][myPosisi.koordinatX] < 4)
	{
	  myPosisi.koordinatY += 1;
	  myPosisi.koordinatY > 15 ? myPosisi.koordinatY =
	    15 : myPosisi.koordinatY;
	}
      else if (arrowKey == KEY_LEFT
	       && peta[myPosisi.koordinatY][myPosisi.koordinatX - 1] < 4)
	{
	  myPosisi.koordinatX -= 1;
	  myPosisi.koordinatX < 0 ? myPosisi.koordinatX =
	    0 : myPosisi.koordinatX;
	}
      else if (arrowKey == KEY_RIGHT
	       && peta[myPosisi.koordinatY][myPosisi.koordinatX + 1] < 4)
	{
	  myPosisi.koordinatX += 1;
	  myPosisi.koordinatX > 19 ? myPosisi.koordinatX =
	    19 : myPosisi.koordinatX;
	}
      else
	{
	  // nothing to do
	};
	
	myPosisi.koordinat = peta[myPosisi.koordinatY][myPosisi.koordinatX];
	system("cls");
	for (int i = 0; i < myPosisi.lebarPeta; i++)
	{
	  for (int j = 0; j < myPosisi.panjangPeta; j++)
	    {
	      if (myPosisi.koordinatX == j && myPosisi.koordinatY == i
		  && myPosisi.koordinat < 4)
		{
		  setcolor (10);
		  cout << "&";
		  setcolor (7);
		}
	      else if (peta[i][j] == 1)
		{
		  cout << "_";
		}
	      else if (peta[i][j] == 2)
		{
		  cout << "m";
		}
	      else if (peta[i][j] == 3)
		{
		  cout << "~";
		}
	      else if (peta[i][j] == 4)
		{
		  cout << "^";
		}
	      else if (peta[i][j] == 5)
		{
		  cout << "|";
		}
	      else if (peta[i][j] == 6)
		{
		  cout << "o";
		}
	      else if (peta[i][j] == 7)
		{
		  cout << "G";
		}
	      else if (peta[i][j] == 8)
		{
		  cout << "#";
		}
	      else
		{
		  // nothing to do
		}
	    }
	  cout << "\n";

	};

    
    // summon pokemon   
    if (myPosisi.koordinat == 2 || myPosisi.koordinat == 3) {
        int chance;
        srand(time(NULL));
        chance = rand() % 10;
//        cout << chance << endl;
        if (chance < 3) {
            int choice;
            
            cout << "\n\nyou found pokemon!\n";
			cout << "what will you do?\n1) fight\n2) run\n";
			cout << "decision: ";
			cin >> choice;
			
//			system("clear");
			if (choice == 1) {
			    myPoke.Bulbasaur.baseATK = 100;
			    myPoke.Bulbasaur.hPoint = 200;
			    myPoke.Pikachu.baseATK = 150;
			    myPoke.Pikachu.hPoint = 500;
			    
			    cout << "Pikachu: " << endl;
			    cout << "\tHealth Point: " << myPoke.Pikachu.hPoint - myPoke.Bulbasaur.baseATK << endl;
			    
			    cout << "Bulbasaur: " << endl;
			    cout << "\tHealth Point: " << myPoke.Bulbasaur.hPoint - myPoke.Pikachu.baseATK << endl;
			    getch();
			}
        }
    }
    };

  return 0;
};
