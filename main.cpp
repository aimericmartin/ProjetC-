#include "CMatrice.hh"


int main(){

    int **a = new int*[2];
    int **b = new int*[3];

    for(int i = 0; i<3;i++){
        a[i] = new int[2];
    }

    a[0][0]=0;
    a[0][1] = 1;
    a[1][1] = 3;
    a[1][0] = 2;
    a[1][2] = 2;
    a[0][2] = 2;

    CMatrice<int> matrice(a,2,3);

   /* CMatrice<int> matrice2;

    matrice2 = matrice;

    matrice.MATafficherMatrice();

    matrice2.MATafficherMatrice();*/



    for(int i = 0; i<3;i++){
        b[i] = new int[3];
        for(int j = 0; j < 2; j++){
            b[i][j] = i+j;
        }
    }

    CMatrice<int> * matric = new CMatrice<int>(b,3,2);

    cout << "Matrice A \n";

    matrice.MATafficherMatrice();

    cout << "Matrice B \n";

    matric->MATafficherMatrice();

    CMatrice<int>  matrice2;

    matrice2 = matric->MATtransposee();
    
    matrice2.MATafficherMatrice();

    CMatrice<int> * matrice3 = new CMatrice<int>();

    *matrice3 = matric->MATtransposee();

    matrice3->MATafficherMatrice();

    return 0;
}
    /*
#include "stdafx.h"
#include "CListeMatrice.h"

int main()
{
	CListeMatrice Lis;
	Lis = new CListeMatrice();
	Lis.LISajouter("C:\Users\ZoD\Documents\GitHub\Test");
	return 0;
}*/