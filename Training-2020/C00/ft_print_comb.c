#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void coiffebouftou(char i, char o, char p){
    ft_putchar(i);
    ft_putchar(o);
    ft_putchar(p);
    if(i == '7' && o == '8' && p =='9'){
        return;
    } else {
        ft_putchar(',');
        ft_putchar(' ');
    }
    
}

void ft_print_comb(){
    char i;
    char o;
    char p;

    i = '0';

    while(i <= '7'){
        o = i + 1;
        while(o <= '8'){
            p = o + 1;
            while (p <= '9'){
                coiffebouftou(i, o, p);
                p ++;
            }
            o ++;
        }
        i ++;
    }
}


int main(){
    ft_print_comb();
}