/*
O programa deverá solicitar:

Quantidade total de participantes;
Quantidade de jogadores por time;
Quantidade de computadores;
Potência média de cada computador;
Duração do evento;
Preço do kWh de energia;
Preço do kit de alimentação;
Outros custos do evento.
A partir desses dados, o programa deverá calcular:

Quantidade necessária de times;
Consumo estimado de energia;
Custo da energia;
Custo da alimentação;
Custo total do evento;
Custo médio por participante.
Neste projeto, serão utilizados os seguintes conteúdos trabalhados em aula:

Estrutura básica de um programa em C;
Biblioteca stdio.h;
Variáveis dos tipos int e float;
Entrada de dados com scanf();
Saída de dados com printf();
Operadores aritméticos;
Atribuição, parênteses e precedência;
Divisão com números reais;
Conversão de tipos;
Formatação de valores com duas casas decimais;
Uso opcional de math.h e da função ceil().
*/

#include <stdio.h>

int main(){
    int participantes;
    int jogadores_time;
    int pc;
    float potencia_pc;
    float duracao_evento;
    float preco_kwh;
    float preco_kit_alimentacao;
    float custo_diverso;

    printf("Digite a quantidade total de participantes: ");
    scanf("%d", &participantes);

    printf("Digite a quantidade total de jogadores: ");
    scanf("%d", &jogadores_time);

    printf("Digite a quantidade total de computadores: ");
    scanf("%d", &pc);

    printf("Digite a quantidade da Potência média de cada computador em watts: ");
    scanf("%f", &potencia_pc);

    printf("Digite a Duração do evento: ");
    scanf("%f", &duracao_evento);

    printf("Digite o preço do kWh de energia: ");
    scanf("%f", &preco_kwh);

    printf("Digite o preço do kit de alimentação: ");
    scanf("%f", &preco_kit_alimentacao);

    printf("Digite o valor dos outros custos do evento: ");
    scanf("%f", &custo_diverso);

    /**/

    int times = participantes / jogadores_time;
    printf("A quantidade necessária de times é: %d \n", times);

    float potencia_total = pc * potencia_pc;
    float consumo_energia_total = (potencia_total * duracao_evento) / 1000.0;
    
    printf("O Consumo estimado de energia é: %.4f  kwh \n", potencia_total);

    printf("O Custo de energia é: R$%.2f \n", consumo_energia_total);
 
    float custo_alimentacao = participantes * preco_kit_alimentacao;
    printf("O custo estimado de alimentacao é: R$%.2f \n", custo_alimentacao);

    float custo_total = consumo_energia_total + custo_alimentacao + custo_diverso;
    printf("O custo total do evento é: R$%.2f \n", custo_total);

    float custo_medio_participante = custo_total / participantes;
    printf("O Custo médio por participante: R$%.2f \n \n", custo_medio_participante);


}
