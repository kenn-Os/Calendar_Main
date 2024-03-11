    int day;
    for (day = 1; day <= maxDay; day++)
    {
        printf("%3d ", day);

        if (++startDay > 6)
        {
            printf("\n");
            startDay = 0;
        }
    }

    printf("\n");

    return 0;
}