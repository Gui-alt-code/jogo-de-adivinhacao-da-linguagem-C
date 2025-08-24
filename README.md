# 🎯 Jogo de Adivinhação em C

# 📌 Descrição do Projeto

Este projeto é um simples jogo de adivinhação em linguagem C, executado via terminal. O jogador deve tentar adivinhar um número secreto gerado aleatoriamente pelo programa, dentro de um intervalo de 0 a 99. O número de tentativas disponíveis depende do nível de dificuldade escolhido.

Durante o jogo, o jogador recebe dicas indicando se o número digitado é maior ou menor que o número secreto, além de uma pontuação que diminui conforme a diferença entre o chute e o número correto.

O projeto é ideal para iniciantes que desejam praticar conceitos fundamentais de programação como:

✔️ Entrada e saída de dados;

✔️ Estruturas condicionais (if, else);

✔️ Laços de repetição (for);

✔️ Manipulação de variáveis;

✔️ Uso de bibliotecas padrão em C;

✔️ Controle de fluxo com break e continue;

✔️ Geração de números aleatórios com rand() e srand().

# 🛠️ Ferramentas e Tecnologias Utilizadas

✨ Linguagem: C;

✨ Compilador: gcc (pode ser outro compatível com C, como clang);

✨ Bibliotecas padrão:

  ⚙️ stdio.h – Para entrada e saída de dados;

  ⚙️ stdlib.h – Para funções utilitárias (ex: rand(), abs());

  ⚙️ time.h – Para gerar uma semente de número aleatório baseada no tempo;  

  # 🧩 Funcionalidades:

➜  Apresentação visual do jogo com arte ASCII;

➜  Geração aleatória do número secreto;

➜ Escolha de níveis de dificuldade:

  🎯 Fácil: 20 tentativas

  🎯 Médio: 15 tentativas

  🎯 Difícil: 6 tentativas

💡 Validação para impedir chutes negativos;

💡Sistema de pontuação baseado na diferença entre chute e número secreto;

💡Mensagens de feedback ao jogador (acerto, erro, dicas, fim de jogo);

💡Exibição de ASCII art personalizada ao final do jogo, indicando vitória ou derrota;

# 🧪 Como Testar o Código:

# ✅ Pré-requisitos:

Você precisa de um compilador C instalado. Em sistemas Unix/Linux ou MacOS, use o GCC. No Windows, você pode usar o MinGW, WSL, ou Code::Blocks.

# 🔧 Compilando o código:

Salve o código em um arquivo com extensão .c, por exemplo:

`jogo_adivinhacao.c`

No terminal, navegue até o diretório onde está o arquivo e compile com:

`gcc jogo_adivinhacao.c -o jogo`

Esse comando criará um executável chamado jogo.

# ▶️ Executando o jogo:

No terminal, execute o jogo com:

`./jogo`

No Windows:

`jogo.exe`

# 🎮 Jogando

1 ) Escolha o nível de dificuldade (1, 2 ou 3).



2 ) Digite seus chutes até acertar o número ou esgotar suas tentativas.



3 ) Evite digitar números negativos — eles serão ignorados.



4 ) Observe suas pontuações e dicas fornecidas a cada tentativa.



# 📄 Licença

Este projeto é de livre uso para fins educacionais. Sinta-se à vontade para modificar, adaptar ou expandir!
