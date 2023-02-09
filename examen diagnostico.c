#include <stdio.h>
#include <stdlib.h>
struct arreglo{
    int *arr;
    int size;
};
typedef struct arreglo t_arreglo;


void addAtTail (t_arreglo *arr, int data);
void addAtFront (t_arreglo *arr, int data);
int getSize(t_arreglo *arr);
void removeAll(t_arreglo *arr);
int getAt(t_arreglo *arr, int index);

void addAtTail (t_arreglo *arr, int data){
    (arr->size) ++;
    realloc(arr->arr, (arr->size) * sizeof(int));
    
    int *i;
    for (i = arr->arr; i < (arr->arr) + arr->size; i++){
    }
    *i = data;
}

void addAtFront (t_arreglo *arr, int data){
    (arr->size) ++;
    realloc(arr->arr, (arr->size) * sizeof(int));

    int *i;
    for (i = arr->arr; i < (arr->arr) + arr->size; i++){    //no muy eficiente pero nunca realmente se utilizo insertar
                                                            //al inicio de un arreglo, muy rara vez se utilizo el realloc
    }                                                       //era preferible utilizar estructuras
    
    while (i != arr->arr){
        int *temp = i;
        i--;
        *temp = *i;
    }
    *i = data;
}

int getSize(t_arreglo *arr){
    return arr->size;
}

void removeAll(t_arreglo *arr){
    for (int *i = arr->arr; i < arr->arr + arr->size; i++){
        int *temp = i;
        i++;
        free(temp);
    }
    arr->arr = NULL;
    arr->size = 0;
}

int getAt (t_arreglo *arr, int index){
    int *i;
    for (i = arr->arr; i < arr->arr + index; i++){
    }
    return *i;
}
