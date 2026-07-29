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

void bubbleSortFromLastDigit(int mass[], int size){
    for (int i = 0; i < size; i++)
        for (int j = size-1; j > i; j--)
            if(mass[j-1]%10>mass[j]%10)
                swap2Elems(mass,j-1,j);

}

void bubbleSortFrom_pos1_TO_pos2(int mass[], int pos1, int pos2 ){
    for (int i = pos1; i < pos2+1; i++)
        for (int j = pos2; j > i; j--)
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



void inversFrom_pos1_TO_pos2(int mass[], int size, int pos1, int pos2 ){
    int middle=(pos2-pos1)/2;
    for(int i=0;i<=middle;i++){
        swap2Elems(mass, pos1+i, pos2-i);
    }

}


void makeCicleSHR(int mass[], int size ){
    int tmp=mass[size-1];
    for(int i=size-1;i>0;i--){
        mass[i]=mass[i-1];
    }
    mass[0]=tmp;

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


int inputWithZeroDigit(int inp_mass[], int out_mass[], int size){
    int qua=-1;
    for(int i=0;i<size;i++){
        if ((inp_mass[i]/10)%10==0) 
        {   
            qua++; 
            out_mass[qua]=inp_mass[i];
             
        }
    }
    return (qua==-1)? 0: qua+1;
} 


int countElem(int mass[], int size, int elem){
    int qua=0;
    for(int i=0;i<size;i++){
        if (mass[i]==elem)
            qua++;
    }
    return qua;
}

int checkElem(int mass[], int size, int elem){
    
    for(int i=0;i<size;i++){
        if (mass[i]==elem) return 1; 
    }

    return 0;
}

int inputGTOneTime(int inp_mass[], int out_mass[], int size){
    int qua=0;
    int tmp_mass[size];
    for(int i = 0; i < size; i++){
        tmp_mass[i] = 0; 
    }
    for(int i=0;i<size;i++){
        if (countElem(inp_mass, size, inp_mass[i])>1 && !checkElem(tmp_mass,  size, inp_mass[i])) 
        {   
            tmp_mass[qua]=inp_mass[i];
            out_mass[qua]=inp_mass[i];
            qua++;
             
        }
    }
    return qua;
}


int inputWithPositive(int inp_mass[], int out_mass[], int size){
    int qua=0;
    
    for(int i=0;i<size;i++){
        if (inp_mass[i]>0) 
        {   
            
            out_mass[qua]=inp_mass[i];
            qua++;
             
        }
    }
    return qua;
}


int inputWithNegative(int inp_mass[], int out_mass[], int size){
    int qua=0;
    
    for(int i=0;i<size;i++){
        if (inp_mass[i]<0) 
        {   
            
            out_mass[qua]=inp_mass[i];
            qua++;
             
        }
    }
    return qua;
}


int main(){
    int a[LENGTH];
    int b[LENGTH]={0};
    int len_b=0;
    
    int c[LENGTH]={0};
    int len_c=0;

    int m=LENGTH;
    inputElems(a,m);
    len_b=inputWithPositive(a,b,m);
    printAllElems(b,len_b);
    len_c=inputWithNegative(a,c,m);
    printAllElems(c,len_c);
    return 0;
}