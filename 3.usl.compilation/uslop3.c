//Борислав Стойнев 9бклас//
#include<stdio.h>
void selectionsort(int arr[], int size){
    int i,j,min,c;
    for(i=0;i<size-1;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }

            c=arr[i];
            arr[i]=arr[min];
            arr[min]=c;
        
    }
        
        for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
        }
    
}

void bubblesort(int arr[], int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}

void insertionsort(int arr[], int size){
    for(int i=1; i<size; i++){
        int a = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>a){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = a;
    }
     for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}

void razmqna(int arr[], int size){
    
    for(int i=0; i < size / 2 ;i++){
        int temp = arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1] =temp;
    }
     for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}


int main(){
    int i,j,arr[] = {10,4,2,8,34,28,6,12};
    int size=sizeof (arr)/ sizeof (arr[0]);

    #ifdef _WIN32
    bubblesort(arr, size);
    #elif defined __linux__
    selectionsort(arr, size);
    #elif defined __ARRLE__
    insertionsort(arr, size);
    #else 
    razmqna(arr, size);
    #endif

    return 0;
}