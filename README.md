Fluxo de caixa e consolidação:

Este é um aplicativo em C para gerenciamento de fluxo de caixa e consolidação. Ele utiliza uma base de dados para armazenar as informações financeiras e permite ao usuário consultar e gravar novas informações.

repositório:
https://github.com/mbr3d4/fluxocaixa

Utilização:
O aplicativo exibe um menu com as seguintes opções:

Consultar saldo
Consultar extrato
Adicionar entrada
Adicionar saída
Sair
Para selecionar uma opção, digite o número correspondente e pressione Enter.

Consultar saldo
A opção "Consultar saldo" exibe o saldo atual, que é a diferença entre as entradas e saídas registradas na base de dados.

Consultar extrato
A opção "Consultar extrato" exibe as entradas e saídas registradas na base de dados, ordenadas pela data.

Adicionar entrada
A opção "Adicionar entrada" permite ao usuário adicionar uma nova entrada ao fluxo de caixa. Será necessário informar a data, a descrição e o valor.

Adicionar saída
A opção "Adicionar saída" permite ao usuário adicionar uma nova saída ao fluxo de caixa. Será necessário informar a data, a descrição e o valor.

Docker:
Este aplicativo pode ser executado em um contêiner Docker para maior portabilidade e facilidade de instalação. Para isso, siga as instruções abaixo:

Certifique-se de ter o Docker instalado em sua máquina.

Execute o container: docker run -it --rm mbr3d4/fluxocaixa
O comando docker run inicia um novo contêiner com a imagem especificada. A opção --rm faz com que o contêiner seja removido automaticamente após a sua finalização.

Banco de dados:
O aplicativo utiliza o SQLite como banco de dados.


                   +-----------+                +------------+
                   |  Usuário  |                |   Banco    |
                   +-----+-----+                +-----+------+
                         |                            |
             Consulta    |                            |
                         |                            |
                   +-----v-----+                      |
                   |  Aplicação|                      |
                   +-----+-----+                      |
                         |                            |
              Consulta/Gravação                       |
                         |                            |
         +---------------+                            |
         |                                            |
   +-----v-----+                                      |
   |  SQLite   |                                      |
   +-----------+                                      |
         |                                            |
  Consulta/Gravação                                   |
         |                                            |
   +-----v-----+                                      |
   | Arquivo   |                                      |
   +-----------+                                      |
         |                                            |
         +-------------------------------+------------+
