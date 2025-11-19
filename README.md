# Monitoramento-Energetico-ESP32_SERS_GS.2

## Integrantes
Gustavo Cordeiro Braga - RM: 562247

Murilo Justino Arcanjo - RM: 565470

Rafael Quattrer Dalla Costa - RM: 562052

# Sistema de Monitoramento de Energia Luminosa com ESP32 + LDR

Este projeto apresenta um sistema simples para **monitorar a intensidade de luz (energia luminosa)** dentro de um ambiente ou equipamento, utilizando um **ESP32**, um **sensor LDR** e três LEDs indicadores (baixo, médio e alto).  
A solução demonstra como o monitoramento luminoso pode apoiar práticas mais sustentáveis, ao revelar quando a iluminação é insuficiente, adequada ou excessiva.

---

## Dados Utilizados

O sistema utiliza **dados de luminosidade coletados em tempo real** por um sensor **LDR**.  
O valor lido pelo ESP32 (escala de 0 a 4095) representa a quantidade de energia luminosa absorvida pelo ambiente.

**Fonte dos dados:** medições diretas do sensor LDR conectado ao ESP32.

---

## Componentes Utilizados

- ESP32 DevKit V1  
- Sensor LDR  
- Resistor (divisor resistivo)  
- 3 LEDs (Vermelho = Baixo, Amarelo = Médio, Verde = Alto)  
- Resistores de 220Ω   
- Simulação no Wokwi

---

## Objetivo do Projeto

Analisar e interpretar o nível de energia luminosa presente em um ambiente, utilizando IoT para:

- auxiliar na otimização do consumo de iluminação,  
- identificar momentos de desperdício ou baixa luminosidade,  
- servir como base para automações inteligentes voltadas à eficiência energética.

---

## Funcionamento da Solução

1. O LDR capta a quantidade de luz no ambiente.  
2. O ESP32 lê esse valor via conversor analógico-digital.  
3. O microcontrolador classifica a luminosidade em três níveis:  
   - **Baixa (LED Vermelho)**  
   - **Média (LED Amarelo)**  
   - **Alta (LED Verde)**  
4. As medições são exibidas em tempo real no **Serial Monitor**.  
5. Todo o sistema funciona tanto no **Wokwi** quanto em um ESP32 real.

---

## 📄 Código do Projeto

O código completo está disponível em:

`/codigo/luminosidade_esp32.ino`

Ele realiza:
- Leitura analógica do LDR  
- Classificação dos níveis de energia luminosa  
- Acionamento dos LEDs  
- Impressão no Serial Monitor

---

## 🧪 Simulação (Wokwi)

O repositório inclui:

`/simulacao_wokwi/diagram.json`

Para executar:

1. Acesse **https://wokwi.com**  
2. Clique em **Import Project**  
3. Selecione `diagram.json`  
4. Cole o código na aba do ESP32  
5. Execute e observe os LEDs + Serial Monitor

---

## Execução no ESP32 (Real)

1. Abra o `.ino` no Arduino IDE ou PlatformIO  
2. Selecione **ESP32 DevKit V1**  
3. Envie o código  
4. Abra o Serial Monitor em **115200 baud**  
5. Varie a luminosidade e observe a resposta dos LEDs

---

## Conexão com o Futuro do Trabalho

A transição para ambientes de trabalho mais sustentáveis depende cada vez mais do monitoramento inteligente dos recursos que utilizamos diariamente. A iluminação, embora muitas vezes negligenciada, representa uma das parcelas mais significativas do consumo energético em escritórios, laboratórios, indústrias e setores administrativos. Ao implementar sensores capazes de interpretar a quantidade de energia luminosa disponível no ambiente, abre-se a possibilidade de criar espaços mais eficientes, que se ajustam automaticamente às necessidades reais de iluminação.

O uso do ESP32 aliado ao LDR demonstra como tecnologias acessíveis e de baixo custo podem contribuir diretamente para o futuro do trabalho. A partir da coleta contínua de dados e da interpretação desses valores em tempo real, torna-se viável reduzir o desperdício de energia, melhorar o conforto visual dos colaboradores, orientar decisões sobre infraestrutura e até servir como ponto de partida para sistemas maiores, como automações de prédios inteligentes, integração com painéis solares ou controle centralizado da energia. Esse tipo de solução reforça o papel da IoT na construção de ambientes produtivos que unem eficiência, economia e responsabilidade ambiental.

---

## Conclusão

Este projeto demonstra, de forma prática e acessível, como a integração entre sensores e microcontroladores pode contribuir para a criação de espaços de trabalho mais inteligentes e alinhados aos princípios da sustentabilidade. Ao monitorar continuamente a quantidade de luz presente no ambiente, o sistema permite compreender padrões de consumo energético, identificar horários de maior desperdício e avaliar condições inadequadas de iluminação. Esses dados podem orientar desde ajustes simples no dia a dia até a implementação de soluções mais avançadas de automação e gestão energética.

Mesmo sendo um protótipo simples, ele evidencia o potencial das tecnologias de IoT como instrumentos poderosos para aprimorar processos, otimizar rotinas e favorecer um uso mais consciente dos recursos naturais. Assim, o monitoramento luminoso apresentado aqui se torna um exemplo claro de como pequenas soluções podem gerar impactos significativos quando aplicadas ao contexto do futuro do trabalho.


