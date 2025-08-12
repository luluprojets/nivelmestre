#include <stdio.h>
#include <stdlib.h>
#include <time.h>

        // Desafio: Super Trunfo De Paises!;
        // Dividir Para Conquistar!

        int main() {

        // Declarando as Variaveis!

          srand(time(NULL));
      
          char Pais1[50], Pais2[50];
          char Capital1[50], Capital2[50];

          unsigned int Codigo1 = rand() % 101, Codigo2 = rand() % 101;
          unsigned int PontosTuristicos1, PontosTuristicos2;
          unsigned int Populacao1, Populacao2;
          unsigned int Menu;
          unsigned int Cartas;
          int Segredo, Secreto;

          float Area1, Area2;
          float PIB1, PIB2;
          float DensidadePopulacional1, DensidadePopulacional2;
          float PIBperCapita1, PIBperCapita2;
          float SuperPoder1, SuperPoder2;

          


    printf("\n\n ('Menu De Jogos') \n\n");

    printf("1.Super Trunfo de Pais!\n");
    printf("2.Jogo de Adivinha!\n\n");

    printf("Digite Sua Opção: ");
     scanf("%d", &Cartas);

    system ("clear");

    switch(Cartas){
    case 1: {     
        
  // Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.

  // Exibir As Perguntas da Carta 1

    printf("\033[1;34m Desafio Super Trunfo! \033[0m \n ");
      printf("    (Carta 1)\n\n");

    printf("Digite o Pais: ");
    scanf("%s", Pais1);
   
    printf("Digite a Capital: ");
    scanf("%s", Capital1);

    printf("Didite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%u", &PontosTuristicos1);

  // Limpar Informações da Carta 1 da Tela!

    system("clear");

  // Exibir As Perguntas Da Carta 2

    printf("\033[1;31m Desafio Super Trunfo!\033[0m \n ");
      printf("    (Carta 2)\n\n");

    printf("Digite o Pais: ");
    scanf("%s", Pais2);

    printf("Digite a Capital: ");
    scanf("%s", Capital2);

    printf("Didite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%u", &PontosTuristicos2); 

  // Limpar Informações da Carta 2 da Tela!

    system("clear");

  // Conversão dos Resultados Digitados:
  // Calculando a Densidade Populacional e PIBperCapita.

    DensidadePopulacional1 = Populacao1 / Area1;
    DensidadePopulacional2 = Populacao2 / Area2;

    PIBperCapita1 = PIB1 / Populacao1;
    PIBperCapita2 = PIB2 / Populacao2;

  /*Calcular o Super Poder:Para cada carta, calcule o "Super Poder"
  somando todos os atributos numéricos população, área, PIB, 
  número de pontos turísticos, PIB per capita e o inverso da densidade 
  populacional – quanto menor a densidade, maior o poder:*/


    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + 
    PIBperCapita1 + (DensidadePopulacional1 / 1);
   
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + 
    PIBperCapita2 + (DensidadePopulacional2 / 1);

    

   /** Exibir as Informações da Carta 1 */
  // Exibir os Resultados das Comparações!
  // Adicionei Cor para Diferenciar as Cartas e os Valores!

    
    printf("\n\n \033[1;34m Informações_Da_Carta 1: \033[0m \n\n");

    printf("Pais: \033[1;34m%s\033[0m \n", Pais1);
    printf("Código: \033[1;34m%u\033[0m \n", Codigo1);
    printf("Capital: \033[1;34m%s\033[0m \n", Capital1);
    printf("População: \033[1;34m%'.3d Mi\033[0m \n", Populacao1);
    printf("Área: \033[1;34m%'.1fkm²\033[0m \n", Area1);
    printf("PIB: \033[1;34m%'.2f Bi\033[0m \n", PIB1);
    printf("Pontos Turísticos: \033[1;34m%u Lugares\033[0m \n", PontosTuristicos1);

  // exibir a Densidade Populacional e PIB Capita da Carta 1:

    printf("Densidade Populacional: \033[1;34m%'.2f Hab/km²\033[0m \n", DensidadePopulacional1);
    printf("PIB per Capita: \033[1;34m%'.2f R$\033[0m \n", PIBperCapita1);

  // Exibir o Super_Poder:

    printf("Super Poder: \033[1;34m%'.2f Pontos\033[0m \n\n", SuperPoder1);


   /** Exibir as Informações da Carta 2 */
  // Exibir os Resultados das Comparações:

    printf("\n\n \033[1;31m Informações_Da_Carta 2: \033[0m \n\n");

    printf("Pais: \033[1;31m%s\033[0m \n", Pais2);
    printf("Código: \033[1;31m%u\033[0m \n", Codigo2);
    printf("Capital: \033[1;31m%s\033[0m \n", Capital2);
    printf("População: \033[1;31m%'.3d Mi\033[0m \n", Populacao2);
    printf("Área: \033[1;31m%'.1fkm²\033[0m \n", Area2);
    printf("PIB: \033[1;31m%'.2f Bi\033[0m \n", PIB2);
    printf("Pontos Turísticos: \033[1;31m%u Lugares\033[0m\n", PontosTuristicos2);

  // exibir a Densidade Populacional e PIB Capita da Carta 2:

  printf("Densidade Populacional: \033[1;31m%'.2f Hab/\033[0m \n", DensidadePopulacional2);
  printf("PIB per Capita: \033[1;31m%'.2f R$\033[0m \n", PIBperCapita2);

  // Exibir o Super Poder Destacado!

  printf("Super Poder: \033[1;31m%'.2f Pontos\033[0m \n", SuperPoder2);
  

  // Exibindo as Comparações entre as Cartas!

  //Menu Interativo:/

  printf("\n\n\033[1;33m Comparações entre as Cartas! \033[0m\n\n");

  printf("1.(Populacação 1 vs População 2)\n");
  printf("2.(Área km² 1 vs Área km² 2)\n");
  printf("3.(PIB 1 vs PIB 2)\n");
  printf("4.(Densidade 1 vs Densidade 2)\n");
  printf("5.(SuperPoder 1 vs SuperPoder 2)\n");
  printf("6.(Pontos Turísticos 1 vs Pontos Turísticos 2)\n\n");

  printf("Digite Sua Opção: ");
  scanf("%d", &Menu);

  system("clear");

  switch (Menu) {
  case 1: {
  printf("Capital: \033[1;33m%s vs %s\033[0m\n",Capital1, Capital2);
  printf("População: \033[1;33m%u vs %u\033[0m\n",Populacao1, Populacao2);

  int Media1 = Populacao1 + Populacao2 / 2;

  printf("Diferença: \033[1;33m%.2d População\033[0m\n",Media1);

// Operadores Ternarios!

  Populacao1 > Populacao2 ? printf("Vencedor é %s: \033[1;33m%.2u População\033[0m\n",Capital1, Populacao1) 
  : printf("Vencedor é %s: \033[1;33m%.2u População\033[0m\n\n",Capital2, Populacao2);
  }
  break;
  
  case 2: {
  printf("Capital: \033[1;33m%s vs %s\033[0m\n",Capital1, Capital2);
  printf("Áreas km²: \033[1;33m%.1f vs %.1f\033[0m\n",Area1, Area2);

  int Media2 = Area1 + Area2 / 2;
  printf("Diferença: \033[1;33m%d Área km²\033[0m\n",Media2);

  // Operadores Ternarios!

  Area1 > Area2 ? printf("Vencedor é %s: \033[1;33m%f Área km²\033[0m\n",Capital1, Area1) : printf("Vencedor é %s: \033[1;33m%f Área km²\033[0m\n\n",Capital2, Area2);
  
  break;
  }

  case 3: {
  printf("Capital: \033[1;33m%s vs %s\033[0m\n",Capital1, Capital2);
  printf("PIB: \033[1;33m%.2f vs %.2f\033[0m\n",PIB1, PIB2);

  int Media3 = PIB1 + PIB2 / 2;
  printf("Diferença: \033[1;33m%.2d De Money\033[0m\n",Media3);

    // Operadores Ternarios!

  PIB1 > PIB2 ? printf("Vencedor é %s: \033[1;33m%.2f De Money\033[0m\n",Capital1, PIB1) : printf("Vencedor é %s: \033[1;33m%.2f De Money\033[0m\n\n",Capital2, PIB2);
    printf("Vencedor é %s: \033[1;33m%.2f De Money\033[0m\n",Capital1, PIB1);
  break;
  }

  case 4: {
  printf("Capital: \033[1;33m%s vs %s\033[0m\n",Capital1, Capital2);
  printf("Densidade: \033[1;33m%.2f vs %.2f\033[0m\n",DensidadePopulacional1, DensidadePopulacional2);

  int Media4 = DensidadePopulacional1 + DensidadePopulacional2 / 2;
  printf("Diferença: \033[1;33m%.2d\033[0m\n",Media4);

  // Operadores Ternarios!

  DensidadePopulacional1 < DensidadePopulacional2 ? printf("Vencedor é %s: \033[1;33m%.2f\033[0m\n",Capital1, DensidadePopulacional1) :
  DensidadePopulacional2 < DensidadePopulacional1 ? printf("Vencedor é %s: \033[1;33m%.2f\033[0m\n\n",Capital2, DensidadePopulacional2) : printf("Resultado:(Empate)\n");
  break;
  }

  case 5: {
  printf("Capital: \033[1;33m%s vs %s\033[0m\n",Capital1, Capital2);
  printf("Super Poder: \033[1;33m%.2f vs %.2f\033[0m\n",SuperPoder1, SuperPoder2);

  int Media5 = SuperPoder1 + SuperPoder2 / 2;
  printf("Diferença: \033[1;33m%.2d\033[0m\n", Media5);

  // Operadores Ternarios!

  SuperPoder1 > SuperPoder2 ? printf("Vencedor é %s: \033[1;33m%.2f De Poder.\033[0m\n",Capital1, SuperPoder1) : printf("Vencedor é %s: \033[1;33m%.2f De Poder.\033[0m\n\n",Capital2, SuperPoder2);
  }
  break;
  
  case 6: {
  printf("Capital: \033[1;33m%s vs %s\033[0m\n",Capital1, Capital2);
  printf("Pontos Turisticos: \033[1;33m%.2u vs %.2u\033[0m\n",PontosTuristicos1, PontosTuristicos2);

  int Media6 = PontosTuristicos1 + PontosTuristicos2 / 2;
      printf("Diferença: \033[1;33m%.2u\033[0m\n",Media6);

  // Operadores Ternarios!

  PontosTuristicos1 > PontosTuristicos2 ? printf("Vencedor é %s: \033[1;33m%.2u Lugares\033[0m\n",Capital1, PontosTuristicos1) : printf("Vencedor é %s: \033[1;33m%.2u lugares\033[0m\n\n",Capital2, PontosTuristicos2);
  }
  break;
  
  default:
  printf("Opção Invalida!\n");
  break;
   } 
  
  break;
 
  /* Jogo de adivinha!*/

  case 2:{
   srand(time(NULL));
      Secreto = rand() % 10 + 1;
      printf("Adivinhe o número (entre 1 e 10): \n");
       scanf("%d", &Segredo);
   
  system("clear");

  Segredo == Secreto ? printf("Você Acertou em Cheio!\n"), printf("Numero correto era: %d\n", Secreto) : printf("Você Errou Baby!\n"), printf("Número correto Era: %d\n\n", Secreto);
  }
  break;

  default:
  printf("Opção Invalida!\n");
  break;
    }
  }

  return 0;
}