#include <stdio.h>
#define LENGTH 5

int inputElems(int mass[], int size){
    int i;
    for(i=0;i<size;i++){
        scanf("%d", &mass[i]);
    }
    return i;
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
    printf("%.3f",sumElems(a,LENGTH)/LENGTH);
    return 0;
}