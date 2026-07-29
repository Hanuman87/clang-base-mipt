#include <stdio.h>


void listOfDevidors(int mass[], int iks)
{
    for(int i=2;i<=iks;i++)
        for(int j=2;j<=9;j++)
            if (i%j==0)
                mass[j-2]++;

}

void printListOfDevidors(int mass[])
{
    for(int i=0;i<8;i++)
        printf("%d %d\n",i+2,mass[i]);

}


int main(){
    int list[8]={0};
    int N;
    scanf("%d", &N);
    listOfDevidors(list,N);
    printListOfDevidors(list);
    return 0;
}