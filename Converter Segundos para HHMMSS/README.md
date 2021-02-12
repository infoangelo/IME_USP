#  Funções: Converter Segundos para HH:MM:SS #

Construa uma função de nome converte_hora que converta um total de segundos para horas, minutos e segundos. Esta função deverá receber 1 parâmetro por valor que represente o total em segundos e 3 parâmetros por referência que referenciem horas, minutos e segundos. A declaração da função deve seguir o seguinte formato: void converte_hora(int total_segundos, int *hora, int *min, int *seg).

Seu programa principal deverá receber do usuário um valor inteiro n>=0 que represente um total de segundos. Em seguida, use a função converte_hora e imprima a quantidade informada no formato HH:MM:SS.

__Obs.:__ Utilize %02d na impressão dos inteiros correspondentes a hora, min e seg para que eles sempre tenham 2 dígitos. Para tempo total de 7469 segundos temos: Hora = 2, Minuto = 4 e Segundo = 29. A impressão utilizando %d ao invés de %02d gera 2:4:29, sendo que a saída esperada é 02:04:29.

__Entrada esperada:__ _um número inteiro correspondente ao tempo total em segundos._
__Saída esperada:__ _3 inteiros de 2 digitos cada separados por : para formar HH:MM:SS._ 
