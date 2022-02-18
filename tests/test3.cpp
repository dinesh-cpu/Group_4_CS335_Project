struct rec
{
    int l;
    int b;
    long int perimeter;
    long int area;
};

int main()
{
    struct rec rec1;
    struct rec rec2;

    // rectangles
    rec1->l = 2;
    rec1->b = 7;

    rec2->l = 3;
    rec2->b = 9;

    rec1->perimeter = 2 * (rec1.l + rec1.b);
    rec2->perimeter = 2 * (rec2.l + rec2.b);

    rec1.area = (rec1.l * rec1.b);
    rec2.area = (rec2.l * rec2.b);
    return 0;
}