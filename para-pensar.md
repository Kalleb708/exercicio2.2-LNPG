1 - Basicamente no python, o // faz a divisão inteira, e o / faz a divisão real, no exemplo da atividade, com os números 17 e 5,  com uma / vira 3.4, já com // vira 3. Já no C, não existe //, o // serve só para comentários no código, sendo usado só o /, que se adapta a váriavel usada.

2 -  No exemplo da atividade, 100 em celsius seria 132 farenhait utilizando c * (9 /5), que estaria errado, o certo seria 212, e isso acontece pois foi adicionado os parenteses, que modifica a regra de prioridade, pois o que está contido entre os parenteses são realizados primeiro, mudando todo o resultado final.

3 - Pelo C ser uma linguagem de mais baixo nível que Python, o nível de abstração é menor, tornando o True número 1, pois é mais próximo da máquina, e o False é o 0, pelo mesmo motivo.

4 - Transformando o primeiro código que é o "01-idade.c" para assembly, a parte da subtração do código acontece na seguinte parte:
movl	-16(%rbp), %edx
movl	-12(%rbp), %eax
subl	%edx, %eax
movl	%eax, %esi

Essa é uma linguagem muito próximo da máquina, onde é quase zero abstração, nas primeiras duas linhas, ele está movendo as váriaveis estipuladas no código que é ANO_ATUAL e ANO da memória, na terceira realiza a subtração e na quarta transfere o resultado final que vai ser utilizado pelo printf.