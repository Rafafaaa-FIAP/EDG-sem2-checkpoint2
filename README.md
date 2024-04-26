<h1 align="center">Ano 1 - Semestre 2 - Checkpoint 1 - 1ESPR</h1>

<hr/>

<p align="center">
  <a href="#pushpin-Introdução">Introdução</a>
  &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#bulb-Desafio">Desafio</a>
  &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#hammer_and_wrench-Tecnologias-e-Ferramentas">Tecnologias e Ferramentas</a>
  &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#floppy_disk-Solução">Solução</a>
  &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#gear-Como-Utilizar">Como Utilizar</a>
  &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#technologist-Integrantes">Integrantes</a>
</p>

<hr/>

## :pushpin: Introdução
Este checkpoint teve como objetivo avaliar a compreensão acerca da interação com o [Node-RED](https://nodered.org/).

## :bulb: Desafio
Construção de uma solução de IoT que abrange todas os conceitos de comunicação entre sensores e o [Node-RED](https://nodered.org/).
A solução deve conter a leitura de três sensores a cada 3000ms, disponibilizando as leituras na porta serial, no formato JSON {"":, "":}, os nomes dos sensores, e os valores lidos, respectivamente no DEBUG.
Além disso, deve haver Dashboards no [Node-RED](https://nodered.org/), cuja interface gráfica demonstre o funcionamento de todas os sensores.

## :hammer_and_wrench: Tecnologias e Ferramentas
Este projeto utilizou as seguintes tecnologias e ferramentas:
* [Node-RED](https://nodered.org/)
* [C++](https://pt.wikipedia.org/wiki/C%2B%2B)

## :floppy_disk: Solução
### Circuito
<h4>Componentes</h4>
<ul>
  <li><b>Arduino Uno</b>: uma placa microcontroladora de código aberto.</li>
  <li><b>Sensor Ultrassônico</b>: dispositivo que emite ondas sonoras de alta frequência e mede o tempo que levam para essas ondas serem refletidas para um objeto.</li>
  <li><b>LDR</b>: um resistor cuja resistência varia conforme a intensidade da luz que incide sobre ele.</li>
  <li><b>DHT11</b>: um sensor desenvolvido para medir temperaturas da faixa de 0 a 50°C e umidade de 20 a 90%.</li>
</ul>
<table>
  <tr>
    <td>
      <img src="https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/images/circuit-1.png" alt="circuit 1" width="300" />
    </td>
    <td>
      <img src="https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/images/circuit-2.png" alt="circuit 2" width="300" />
    </td>
    <td>
      <img src="https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/images/circuit-3.png" alt="circuit 3" width="300" />
    </td>
    <td>
      <img src="https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/images/circuit-4.png" alt="circuit 4" width="300" />
    </td>
    <td>
      <img src="https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/images/circuit-5.png" alt="circuit 5" width="300" />
    </td>
  </tr>
</table>

### Fluxo
<img src="https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/images/flow.png" alt="circuit 5" width="500" />
<h6>Acesse o JSON para importação no Node-RED clicando <a href="https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/flows.json">aqui</a>.</h6>

### Dashboard
<img src="https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/images/dashboard.png" alt="circuit 5" width="500" />

## :gear: Como Utilizar
1. Instalar o [Node-RED](https://nodered.org/);
2. Baixar o [código](https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/code.ino) da solução e instalar as bibliotecas ArduinoJson e DHT sensor library;
3. Montar o circuito;
4. Conectar o Arduino no computador e fazer upload do código para o Arduino;
5. Iniciar o [Node-RED](https://nodered.org/) no computador;
6. Importar o [fluxo](https://github.com/studies2023-FIAP-ES-553521-ano1-05-EDG/sem2-checkpoint1/blob/main/flows.json) no [Node-RED](https://nodered.org/) no computador e fazer o deploy.

## :technologist: Integrantes
* RM 552980 - Danilo Vieira
* RM 553377 - Enzo de Oliveira Rodrigues
* RM 552939 - Jonata Rafael
* RM 553403 - Matheus Felippe
* RM 553521 - Rafael Cristofali
