/* 
  Palavras reservadas do C
  - auto      - double    - int       - struct
  - break     - else      - long      - switch
  - case      - enum      - register  - typedef
  - char      - extern    - return    - union
  - const     - float     - short     - unsigned
  - continue  - for       - signed    - void
  - default   - goto      - sizeof    - volatile
  - do        - if        - static    - while 
*/
int main()
{ // início do bloco main
    // case-sensitive
    int numero = 1,
        Numero = 1,
        NUMERO = 1; // a linha termina com ;

    if (numero == Numero)
    {                             // início do bloco if
        numero = numero + NUMERO; // a linha termina com ;
        Numero = numero - NUMERO; // a linha termina com ;
    }                             // fim do bloco if

    return 0; // a linha termina com ;
} // fim do bloco main