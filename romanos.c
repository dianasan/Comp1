#include <stdio.h>
#include <string.h>

// Dado um valor inteiro decimal retorna o correspondente em formato romano

int main() {

    char p[5];
    int paginas;

    printf("Digite o valor: ");
    scanf("%s", p);
    paginas = strlen(p);

    if(paginas==3)
    {
        if(p[0]=='1') printf("C");
        else if(p[0]=='2') printf("CC");
        else if(p[0]=='3') printf("CCC");
        else if(p[0]=='4') printf("CD");
        else if(p[0]=='5') printf("D");
        else if(p[0]=='6') printf("DC");
        else if(p[0]=='7') printf("DCC");
        else if(p[0]=='8') printf("DCCC");
        else if(p[0]=='9') printf("CM");

        if(p[1]=='1') printf("X");
        else if(p[1]=='2') printf("XX");
        else if(p[1]=='3') printf("XXX");
        else if(p[1]=='4') printf("XL");
        else if(p[1]=='5') printf("L");
        else if(p[1]=='6') printf("LX");
        else if(p[1]=='7') printf("LXX");
        else if(p[1]=='8') printf("LXXX");
        else if(p[1]=='9') printf("XC");

        if(p[2]=='1') printf("I");
        else if(p[2]=='2') printf("II");
        else if(p[2]=='3') printf("III");
        else if(p[2]=='4') printf("IV");
        else if(p[2]=='5') printf("V");
        else if(p[2]=='6') printf("VI");
        else if(p[2]=='7') printf("VII");
        else if(p[2]=='8') printf("VIII");
        else if(p[2]=='9') printf("IX");
    }
    else if(paginas==2)
    {
        if(p[0]=='1') printf("X");
        else if(p[0]=='2') printf("XX");
        else if(p[0]=='3') printf("XXX");
        else if(p[0]=='4') printf("XL");
        else if(p[0]=='5') printf("L");
        else if(p[0]=='6') printf("LX");
        else if(p[0]=='7') printf("LXX");
        else if(p[0]=='8') printf("LXXX");
        else if(p[0]=='9') printf("XC");
        
        if(p[1]=='1') printf("I");
        else if(p[1]=='2') printf("II");
        else if(p[1]=='3') printf("III");
        else if(p[1]=='4') printf("IV");
        else if(p[1]=='5') printf("V");
        else if(p[1]=='6') printf("VI");
        else if(p[1]=='7') printf("VII");
        else if(p[1]=='8') printf("VIII");
        else if(p[1]=='9') printf("IX");
    }
    else if(paginas==1)
    {
        if(p[0]=='1') printf("I");
        else if(p[0]=='2') printf("II");
        else if(p[0]=='3') printf("III");
        else if(p[0]=='4') printf("IV");
        else if(p[0]=='5') printf("V");
        else if(p[0]=='6') printf("VI");
        else if(p[0]=='7') printf("VII");
        else if(p[0]=='8') printf("VIII");
        else if(p[0]=='9') printf("IX");
    }
    
    return 0;
}