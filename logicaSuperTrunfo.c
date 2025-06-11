#include <stdio.h>

int main(){

    char pais1[20];
    char pais2[20];
    char CodigoDaCarta1[20], CodigoDaCarta2[20];
    
    char NomeDaCidade1[20];
    char NomeDaCidade2[20];
    int populacao1, populacao2= 0;
    float AreaEmKM1, AreaEmKM2= 0;
    float pib1, pib2= 0;
    int NumeroDePontosTuristicos1, NumeroDePontosTuristicos2 =0;
    float DensidadePopulacional1, DensidadePopulaciona2 = 0;
    float PIBperCapita1, PIBperCapita2 = 0;
       
   
    //Cadastroda carta 01 atravez do terminal 
printf("    **** SUPER TRUNFO ****\n");
printf("Digite qual o Pais: \n");
scanf("%s", pais1);

printf("Digite o Codigo da carta: \n");
scanf("%s", CodigoDaCarta1);

printf("Digite o nome da Cidade: \n");
scanf("%s", &NomeDaCidade1);

printf("Digite qual a População da cidade: \n");
scanf("%d", &populacao1);

printf("Digite qual o valor da Area em KM2: \n");
scanf("%f", &AreaEmKM1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos \n");
scanf("%d", &NumeroDePontosTuristicos1);

// calculo da Densidade populacional e o PIB per capita
     DensidadePopulacional1 = populacao1 / AreaEmKM1;
     PIBperCapita1 = (float) pib1 / populacao1;

     // Saida dos dados cadastrados na carta 01 
printf("    **** SUPER TRUNFO ****\n");
     printf("\n");
printf("       CARTA-01   \n");
printf("\n");
printf("Pais: %s \n", pais1);
printf("Cidade: %s \n", NomeDaCidade1);
printf("População: %d \n", populacao1);
printf("Area: %.3f KM² \n", AreaEmKM1);
printf("PIB: R$ %.1f Bilhões de Reais\n", pib1);
printf("Numero de pontos turisticos: %d \n",NumeroDePontosTuristicos1);
printf("Dencidade Populacional: %.3f hab/km² \n",DensidadePopulacional1);
printf("PIB Per Capita: %.3f Reais\n", PIBperCapita1);
printf("Codigo da Carta: %s \n", CodigoDaCarta1);
printf("\n");


 
    //  //Cadastro da carta 02 atravez do terminal
printf("    **** SUPER TRUNFO ****\n");
    printf("Digite qual o pais: \n");
scanf("%s", pais2);

printf("Digite o Codigo da carta: \n");
scanf("%s", CodigoDaCarta2);

printf("Digite o nome da Cidade: \n");
scanf("%s", &NomeDaCidade2);

printf("Digite qual a População da cidade: \n");
scanf("%d", &populacao2);

printf("Digite qual o valor da Area em KM2: \n");
scanf("%f", &AreaEmKM2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos \n");
scanf("%d", &NumeroDePontosTuristicos2);

// calculo da Densidade populaciona e o PIB per capita
     DensidadePopulaciona2 = populacao2 / AreaEmKM2;
     PIBperCapita2 = (float) pib2 / populacao2;
// Saida dos dados cadastrados na carta 02 
printf("    **** SUPER TRUNFO ****\n");
printf("\n");
printf("       CARTA-02   \n");
printf("\n");
printf("Pais: %s \n", pais2);
printf("Cidade: %s \n", NomeDaCidade2);
printf("População: %d \n", populacao2);
printf("Area: %.3f KM² \n", AreaEmKM2);
printf("PIB: R$ %.1f Bilhões de Reais\n", pib2);
printf("Numero de pontos turisticos: %d \n",NumeroDePontosTuristicos2);
printf("Dencidade Populacional: %.2f hab/km² \n",DensidadePopulaciona2);
printf("PIB Per Capita: %.3f Reais\n", PIBperCapita2);
printf("Codigo da Carta: %s \n", CodigoDaCarta2);
printf("\n");


// menu para escolha do primeiro atributo
int atributo1 = 0;
int resultado1 = 0;

printf("     **** SUPER TRUNFO ****\n");
printf("###Você tera que escolher dois atributos para disputar###\n");
printf("Esculha o primeiro atributo\n");
printf("1. População\n");
printf("2. Área em km²\n");
printf("3. PIB\n");
printf("4. Numero de pontos turisticos\n");
printf("5. Densidade demografica\n");
scanf("%d",&atributo1);

if (atributo1 < 1 || atributo1 > 5) {
    printf("Atributo inválido.\n");
    return 1;}

  

switch (atributo1)
{
case 1:
     printf("    **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: População\n");
     resultado1 = populacao1 > populacao2 ? 1 : 0;
                
break;

case 2:
    printf("   **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: Area\n");
    resultado1 = AreaEmKM1 > AreaEmKM2 ? 1 : 0;
   
break;

case 3:
    printf("    **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: PIB\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
   
break;

case 4:
    printf("   **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: Numero de pontos turisticos\n");
    resultado1 = NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2 ? 1 : 0;
    
    break;

case 5:
    printf("    **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: Densidade demografica\n");
    resultado1 = DensidadePopulacional1 < DensidadePopulaciona2 ? 1 : 0;
    
    break;

 default:

printf("Opção invalida!\n");

    break;
}


// menu para escolha do segundo atributo
int atributo2 = 0; // esta sendo usada tanto no menu quanto para o resultado que sera comparado
int resultado2 = 0;
printf("     **** SUPER TRUNFO ****\n");
printf("###Observação, Você nao pode escolher o mesmo atributo###\n");
printf("Esculha o segundo atributo\n");
printf("1. População\n");
printf("2. Área em km²\n");
printf("3. PIB\n");
printf("4. Numero de pontos turisticos\n");
printf("5. Densidade demografica\n");
scanf("%d",&atributo2);

if (atributo1 < 1 || atributo1 > 5) {
    printf("Atributo inválido.\n");
    return 1;}

  
if (atributo2 == atributo1){
    printf("Você Escolheu o mesmo atributo");
}else{
switch (atributo2)
{
case 1:
     printf("    **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: População\n");
    printf("\n");
    printf("\n");
    printf("\n");
     resultado2 = populacao1 > populacao2 ? 1 : 0;
                
break;

case 2:
    printf("   **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: Area\n");
    printf("\n");
    printf("\n");
    printf("\n");
    resultado2 = AreaEmKM1 > AreaEmKM2 ? 1 : 0;
   
break;

case 3:
    printf("    **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: PIB\n");
    printf("\n");
    printf("\n");
    printf("\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
   
break;

case 4:
    printf("   **** SUPER TRUNFO ****\n");
    printf("O atributo escolhido foi: Numero de pontos turisticos\n");
    printf("\n");
    printf("\n");
    printf("\n");

    resultado2 = NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2 ? 1 : 0;
    
    break;

case 5:
    printf("    **** SUPER TRUNFO ****\n");
    printf("O 2º atributo escolhido foi: Densidade demografica\n");
    printf("\n");
    printf("\n");
    printf("\n");
        resultado2 = DensidadePopulacional1 < DensidadePopulaciona2 ? 1 : 0;
    
    break;

 default:

printf("Opção invalida!\n");
printf("\n");
printf("\n");
printf("\n");


    break;
}
}










//Varivais para amarzenda o valor dos atributos escolhidos na carta1 e na carta2 para imprimir no teminal.
int valor1Carta1 = 0, valor1Carta2 = 0;
int valor2Carta1 = 0, valor2Carta2 = 0;
const char* atributoPrint1 = ""; // para imprimir o nome do atributo escolhido na tela.
const char* atributoPrint2 = "";// para imprimir o nome do atributo escolhido na tela.

// quanto o 1º atributo e o 2º for selecionado atraves do menu interativo o switch moverar o valor para dentro das variaveis a cima. 
switch (atributo1)
{
case 1 :
    valor1Carta1 = populacao1;
    valor1Carta2 = populacao2;
    atributoPrint1 = "POPULAÇÂO";
break;

case 2 :
    valor1Carta1 = AreaEmKM1;
    valor1Carta2 = AreaEmKM2;
    atributoPrint1 = "AREA KM²";
break;

case 3 :
    valor1Carta1 = pib1;
    valor1Carta2 = pib2;
    atributoPrint1 = "PIB";
break;

case 4 :
    valor1Carta1 = NumeroDePontosTuristicos1;
    valor1Carta2 = NumeroDePontosTuristicos2;
    atributoPrint1 = "Numero de pontos turisticos";
break;

case 5 :
    valor1Carta1 =DensidadePopulacional1;
    valor1Carta2 = DensidadePopulaciona2;
    atributoPrint1 = "Densidade Populacional";
break;

default:
    valor1Carta1 =0 ;
    valor1Carta2 = 0;
break;
}

switch (atributo2)
{
case 1 :
    valor2Carta1 = populacao1;
    valor2Carta2 = populacao2;
    atributoPrint2 = "POPULAÇÂO";
break;

case 2 :
    valor2Carta1 = AreaEmKM1;
    valor2Carta2 = AreaEmKM2;
    atributoPrint2 ="AREA KM²";
break;

case 3 :
    valor2Carta1 = pib1;
    valor2Carta2 = pib2;
    atributoPrint2  = "PIB";
break;

case 4 :
    valor2Carta1 = NumeroDePontosTuristicos1;
    valor2Carta2 = NumeroDePontosTuristicos2;
    atributoPrint2 = "Numero de pontos turisticos";
break;

case 5 :
    valor2Carta1 =DensidadePopulacional1;
    valor2Carta2 = DensidadePopulaciona2;
    atributoPrint2 = "Densidade Populacional";
break;

default:
    valor2Carta1 =0 ;
    valor2Carta2 = 0;
break;
}

//soma dos atributos de cada carta
float somaCarta1 = valor1Carta1 + valor2Carta1;
float somaCarta2 = valor1Carta2 + valor2Carta2;


//exibição do resultado
if (resultado1 && resultado2){
       printf("Pais carta 01: %s ** Pais carta 02: %s\n",pais1, pais2);
       printf("1º Atributo: %s - 2º Atributo: %s\n",atributoPrint1, atributoPrint2);
       printf("Carta 01 Valor do 1º Atributo: %d - 2º Atributo: %d\n", valor1Carta1, valor2Carta1);
       printf("Carta 02 Valor do 1º Atributo: %d - 2º Atributo: %d\n", valor1Carta2, valor2Carta2);
       printf("Soma dos Atributos da carta 01: %.2f - carta 02: %.2f\n",somaCarta1,somaCarta2);
       printf("###Parabens Carta 01 Ganhou!###\n");
}else if (resultado1 != resultado2){
       printf("Pais carta 01: %s ** Pais carta 02: %s\n",pais1, pais2);
       printf("1º Atributo: %s - 2º Atributo: %s\n",atributoPrint1, atributoPrint2);
       printf("Carta 01 Valor do 1º Atributo: %d - 2º Atributo: %d\n", valor1Carta1, valor2Carta1);
       printf("Carta 02 Valor do 1º Atributo: %d - 2º Atributo: %d\n", valor1Carta2, valor2Carta2);
       printf("Soma dos Atributos da carta 01: %.2f - carta 02: %.2f\n",somaCarta1,somaCarta2);
       printf("  ###O jogo Empatou!###");     
}else{
       printf("Pais carta 01: %s ** Pais carta 02: %s\n",pais1, pais2);
       printf("1º Atributo: %s - 2º Atributo: %s\n",atributoPrint1, atributoPrint2);
       printf("Carta 01 Valor do 1º Atributo: %d - 2º Atributo: %d\n", valor1Carta1, valor2Carta1);
       printf("Carta 02 Valor do 1º Atributo: %d - 2º Atributo: %d\n", valor1Carta2, valor2Carta2);
       printf("Soma dos Atributos da carta 01: %.2f - carta 02: %.2f\n",somaCarta1,somaCarta2);
       printf("###Parabens Carta 02 Ganhou!###\n");

}





return 0;

}

