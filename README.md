 Sistema Inteligente de Monitoramento Industrial

Descrição

Este projeto foi desenvolvido em linguagem **C** como parte do desafio de programação **"Sistema Inteligente de Monitoramento Industrial"**.

O programa simula um sistema de monitoramento de temperatura de uma máquina industrial. O usuário informa um limite de temperatura e, em seguida, cadastra diversas medições realizadas por um sensor.

Ao final, o sistema apresenta um relatório com informações importantes sobre as temperaturas registradas e verifica se ocorreram **3 temperaturas consecutivas acima do limite estabelecido**.

---

 Objetivo

Desenvolver um programa em C utilizando a estrutura de repetição **`do...while`**, trabalhando com:

- Entrada e validação de dados;
- Cálculos matemáticos;
- Estruturas condicionais;
- Contadores;
- Variáveis acumuladoras;
- Análise de temperaturas consecutivas;
- Geração de relatório final.

---

##  Funcionalidades

O programa possui as seguintes funcionalidades:

-  Solicita e valida o limite de temperatura;
-  Recebe diversas temperaturas do sensor;
-  Valida as temperaturas informadas;
- Calcula a temperatura média;
-  Identifica a maior temperatura registrada;
-  Identifica a menor temperatura registrada;
-  Conta quantas temperaturas ficaram acima do limite;
-  Verifica se ocorreram 3 temperaturas consecutivas acima do limite;
-  Exibe um relatório final com os resultados.

## Escolha das estruturas de repetição

Escolhi utilizar principalmente a estrutura `do...while`, pois ela permite que o programa execute pelo menos uma vez antes de verificar a condição. Isso foi importante principalmente na leitura das temperaturas, pois o programa precisa solicitar pelo menos uma temperatura antes de perguntar se o usuário deseja continuar inserindo outras.

Também utilizei `do...while` para validar o limite de temperatura. Dessa forma, o programa solicita o limite pelo menos uma vez e continua solicitando enquanto o valor informado estiver fora do intervalo permitido.

A diferença entre testar a condição antes ou depois da execução foi importante porque, nesse caso, a primeira entrada sempre precisa ser realizada antes de verificar se o usuário deseja continuar. Se fosse utilizado apenas `while`, seria necessário fazer uma verificação antes da primeira leitura, tornando essa parte do algoritmo mais complexa.

Portanto, o `do...while` foi escolhido porque se adapta melhor às situações em que pelo menos uma execução é obrigatória, enquanto a condição determina se o processo deve continuar.
