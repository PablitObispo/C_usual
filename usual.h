#include <stdio.h>
#include <math.h>

int fonction_triple ( int a)
{
return a*3;
}
int fonction_quadruple(int a)
{
return a*4;
}

void affiche_fonction_with_an_int(int a, int (*pf)(int))
{
    printf("%d\n",(*pf)(a));
}

void insertion_tab(int t[], int n)
{
int buff;
int j;
    for (int i=1;i<n;i++)
    {
    j=i;
    while(j>0 && t[j-1]>t[j])
    {
    buff = t[j-1];
    t[j-1]=t[j];
    t[j]=buff;
    j=j-1;

    }
    }
}
double determinant_tab(double mat[2][2])
{
return mat [0][0]*mat [1][1]-mat[0][1]*mat[1][0];
}

int pgcd(int a, int b)
{
    if (a<b)
{int buff = a;a=b; b=buff;}

int r = a%b;

    while (r>0)
{
a=b;
b=r;
r=a%b;
}
    
    return b;
}
void filltab1(int *tab,int n,int init)
{
    
    for (int i=0;i<n;i++)
    {
    tab[i]= init;

    }
}
void filltab2(int **p,int n,int sizes[100])
{   
   
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<sizes[i];j++)
        p[i][j]=n;


    }
    }

void affiche_matrice(int n, int m, int tab[2][2])
{
for (int i=0;i<n;i++)
{
    for (int j=0;j<m;j++)
    printf ("%d ",tab[i][j]);
    printf("\n");

}

}

