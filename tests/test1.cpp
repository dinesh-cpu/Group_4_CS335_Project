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
    // arr{10};  will give error here
    int n = sizeof(arr) / sizeof(arr[0]);
    int *a = new int;
    delete a;
    string a = "dinesh";
    printf("%s", a);
    int c = 7;
    Array(arr, n);
    return 0;
}