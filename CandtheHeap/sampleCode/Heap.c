/**
 * This sample code is used on the slides HeapMemory, 
 * providing examples to explain memory usage. 
 * 
 * @author Albert Lionelle
 * @date 2025.04.09
 */



int* newArray(int size) {
    //int arr_stack[size]; 
    int *arr_heap = (int *) malloc(sizeof(int) * 5);
    return arr_heap;
}

int main(){
    int *arr = newArray(5);
    return 0;
}
