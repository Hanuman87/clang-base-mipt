#include <stdio.h>
#define LENGTH 10

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

int findSecondMaxElem(int mass[], int size, int fist_mx){
    int mx=mass[0];
    for(int i=1;i<size;i++){
        if (mass[i]>mx && fist_mx!=mass[i]){
            mx=mass[i];

        }
    }
    return mx;
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

float sumElems(int mass[], int size){
    float s=0;
    for(int i=0;i<size;i++){
        s=s+mass[i];
    }
    return s;
}

int main(){
    int a[LENGTH];
    inputElems(a,LENGTH);
    //printAllElems(a,LENGTH);
    printf("%d ",findMaxElemPos(a,LENGTH)+1); 
    printf("%d ",findMaxElem(a,LENGTH));
    printf("%d ",findMinElemPos(a,LENGTH)+1);
    printf("%d",findMinElem(a,LENGTH));
    return 0;
}