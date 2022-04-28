int main()
{
    int x = 2;
    int p=1;
    switch (x) {
    case 1:
        p++;
        break;
    case 2:
        p+=2;
        break;
    case 3:
        p+=3;
        break;
    default:
        p+=4;
        break;
    }
    return 0;
}