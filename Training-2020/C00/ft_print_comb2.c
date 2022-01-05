#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}


void bouftou(char a, char b){
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(' ');
}


void panoTofu(char a, char b){
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(',');
    ft_putchar(' ');
}


void ft_print_comb2(){
    char a;
    char b;
    char c;
    char d;
    a = '0';
    b = '0';
    c ='0';
    d = '0';
    while(d <= '9'){
        bouftou(a, b);
        panoTofu(c, d);
        d++;
    }
    d--;
    while(c <= '9'){
        bouftou(a, b);
        panoTofu(c, d);
        c++;
    }
    c--;
    while(b <= '9'){
        bouftou(a, b);
        panoTofu(c, d);
        b++;
    }
    b--;

    while(a <= '9'){
        bouftou(a, b);
        panoTofu(c, d);
        a++;
    }
    a--;
    
    
}


int main(){
    ft_print_comb2();
}