#include <stdio.h>
#define LENGTH 12

int inputElems(int mass[], int size){
    int i;
    for(i=0;i<size;i++){
        scanf("%d", &mass[i]);
    }
    return i;
}

int findMinElem(int mass[], int size){
    int mn=mass[0];
    for(int i=1;i<size;i++){
        if (mass[i]<mn){
            mn=mass[i];

        }
    }
    return mn;
}


int findMaxElem(int mass[], int size){
    int mx=mass[0];
    for(int i=1;i<size;i++){
        if (mass[i]>mx){
            mx=mass[i];

        }
    }
    return mx;
}

void swap2Elems(int mass[], int pos1, int pos2){
    int tmp=mass[pos1];
    mass[pos1]=mass[pos2];
    mass[pos2]=tmp;
}

void bubbleSort(int mass[], int size){
    for (int i = 0; i < size; i++)
        for (int j = size-1; j > i; j--)
            if(mass[j-1]>mass[j])
                swap2Elems(mass,j-1,j);

}


int findMinElemPos(int mass[], int size){
    int mn=mass[0];
    int pos=0;
    for(int i=1;i<size;i++){
        if (mass[i]<mn){
            mn=mass[i];
            pos=i;

        }
    }
    return pos;
}


int findMaxElemPos(int mass[], int size){
    int mx=mass[0];
    int pos=0;
    for(int i=1;i<size;i++){
        if (mass[i]>mx){
            mx=mass[i];
            pos=i;

        }
    }
    return pos;
}





void printAllElems(int mass[], int size){
    for(int i=0;i<size;i++){
        printf("%d ", mass[i]);
    }

}

int sumElems(int mass[], int size){
    float s=0;
    for(int i=0;i<size;i++){
        s=s+mass[i];
    }
    return s;
}

int sumPositiveElems(int mass[], int size){
    float s=0;
    for(int i=0;i<size;i++){
        if (mass[i]>0) s=s+mass[i];
    }
    return s;
}

int main(){
    int a[LENGTH];
    int m;
    inputElems(a,LENGTH);
    bubbleSort(a,LENGTH);
    //printAllElems(a,LENGTH);
    printf("%.2f",1.0*sumElems(a,LENGTH)/LENGTH);
    return 0;
}