void    ft_rev_int_tab(int *tab, int size){

    int rTab[size];
    int loop;

    loop = 0;


    while(loop < size){

        rTab[loop] = *(tab + size - loop - 1);
        loop++;
    }
    loop = 0;
    while(loop < size){
        tab[loop] = rTab[loop];
        loop++;
    }
}

