void sort_by_area(triangle* tr, int n)
{
	double calculate_area(triangle tr)
    {
    double s = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(s * (s - tr.a) * (s - tr.b) * (s - tr.c));
}

int compare(const void *a, const void *b) 
{
    triangle *tr1 = (triangle *)a;
    triangle *tr2 = (triangle *)b;
    double area1 = calculate_area(*tr1);
    double area2 = calculate_area(*tr2);
    if (area1 < area2) return -1;
    if (area1 > area2) return 1;
    return 0;
}
    qsort(tr, n, sizeof(triangle), compare);
}
