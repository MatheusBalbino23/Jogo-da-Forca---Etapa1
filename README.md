# Jogo da Forca - Palavra Secreta

Este é um programa simples em C que oculta a palavra secreta inserida pelo usuário, exibindo apenas o número de letras na palavra sob a forma de underscores.

## Funcionamento

O programa solicita ao usuário que insira a palavra secreta. Em seguida, ele substitui cada letra da palavra por um underscore, ocultando assim a palavra. O objetivo é criar a base para o jogo da forca, onde o jogador tenta adivinhar a palavra secreta letra por letra.

## Como Executar

1. Certifique-se de ter um compilador C instalado em seu sistema.
2. Abra um terminal na pasta onde está o arquivo fonte (`forca_palavra_secreta.c`).
3. Compile o programa usando o compilador C. Por exemplo, usando o GCC:
   ```bash
   gcc -o forca_palavra_secreta forca_palavra_secreta.c
   ```
4. Execute o programa:
   ```bash
   ./forca_palavra_secreta
   ```

## Exemplo de Uso

```
Digite a palavra secreta:abacaxi
_ _ _ _ _ _ _
```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
