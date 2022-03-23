void Array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        i++;
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1};
    int c = 7;
    // arr{10};  will give error here
    int n = sizeof(arr) / sizeof(arr[0]);
    int *a = new int;
    Array(arr, n);
    printf("hello");
    a = 2;
    if(1){
        int a = 2;
    }
    else{
        
    }
    delete a;
    delete b;
    return 0;
}

// put all declarators at the start of the files