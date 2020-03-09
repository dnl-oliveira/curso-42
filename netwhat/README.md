### Resumo para estudo no projeto netwhat👌
#### Para mais informações consulte o pdf na pasta [Subject](https://github.com/dnl007/curso-42/blob/master/netwhat/Subject/netwhat_en.subject.pdf).

#### > IP (Internet Protocol) IPv4 e IPv6 :
  - ##### IPv4: (comprimento de 32 bits ou 4 bytes)
    - O intervalo de alocação se estende de 0.0.0.0 a 255.255.255.255
  - ##### IPv6: (comprimento de 128 bits ou 16 bytes)
    - 2<sup>128 possibilidades de endereço exclusivo.
    - 16 bits na forma de quatro dígitos hexadecimais * 8 separados por 2 pontos (":")
    - 64 bits são reservados para o endereço de rede e os 64 bits restantes permanecem para fornecer detalhes sobre a interface de rede host
    > Exemplo:
    > 2001:0DB8:AC10:FE01:0000:0000:0000:0000

  - ##### Principais diferenças entre IPv4 e IPv6
    - Espaços de endereço IPv6 maiores
    - O IPv6 foi criado para tornar a transferência de pacotes mais segura
    - Melhores recursos de multicast para IPv6
---

* **"Domain name system (DNS)"** converte nomes de domínio da Internet e nomes de host em endereços IP.
* O **Ping** usa o protocolo ICMP.

### 2. Classes de IP

* As classes vão de **A a E**.
* **"A"** possui um conjunto de endereços que vão desde o 1.0.0.0 até 127.0.0.0, onde o primeiro octeto (primeiros 8 bits **N**.H.H.H) de um endereço IP identifica  a rede e os 3 octetos restantes (24 bits) irão identificar um determinado host nessa rede.
  - 1 byte para identificar a rede.
  - 3 bytes para identificar máquinas.
  - 16.777.214 endereços possíveis.
  - Sempre começa com a sequência de bits 0, portanto, entre 0 e 127, mas determinados endereços são reservados para usos específicos.
  - Intervalo de endereços de 0.0.0.0 a 127.255.255.255.
  - Exemplo de um endereço Classe A – 120.2.1.0.
* **"B"** possui um conjunto de endereços que vão desde o 128.0.0.0 até 191.255.0.0, onde os dois primeiros octetos (16 bits **N**.**N**.H.H) de um endereço IP identificam  a rede e os 2 octetos restantes (16 bits) irão identificar um determinado host nessa rede.
  - 2 bytes para identificar a rede.
  - 2 bytes para identificar máquinas.
  - 65.535 endereços possíveis.
  - Sempre começa com a sequência dos bits 10, portanto entre 128 e 191.
  - Intervalo de endereços de 128.0.0.0 a 191.255.255.255
  - Exemplo de um endereço Classe B – 152.13.4.0.
* **"C"** possui um conjunto de endereços que vão desde o 192.0.0.0 até 223.255.255.0, onde os três primeiros octetos (24 bits **N**.**N**.**N**.H) de um endereço IP identificam  a rede e o octeto restante (8 bits) irão identificar um determinado host nessa rede.
  - 3 bytes para identificar a rede
  - 1 byte para identificar máquinas
  - 256 endereços possíveis
  - Sempre começa com a sequência dos bits 110, portanto entre 192 e 223.
  - Intervalo de endereços de 192.0.0.0 a 223.255.255.255
  - Exemplo de um endereço Classe C – 192.168.10.0.
  - A máscara de sub-rede padrão para uma rede de classe C é 255.255.255.0
* **"D"** utilizada para multicast, a classe D é um pouco diferente das três primeiras classes. Possui um primeiro bit com valor 1, um segundo bit com valor 1, um terceiro bit com valor 1 e um quarto bit com valor 0. Os outros 28 bits são usados ​​para identificar o grupo de computadores aos quais a mensagem multicast é endereçada.
  - Um transmissor para vários receptores
  - Sempre começa com a sequência dos bits 1110, portanto, entre 224 e 239.
  - Intervalo de endereços de 225.0.0.0 a 239.255.255.255
* **"E"** é usada apenas para fins experimentais. Como a classe D, é diferente das três primeiras classes. Ele possui um primeiro bit com valor 1, um segundo bit com valor 1, um terceiro bit com valor 1 e um quarto bit com valor 1. Os outros 28 bits são usados ​​para identificar o grupo de computadores aos quais a mensagem multicast é endereçada.
  - Apenas para uso da IANA (Internet Assigned Numbers Authority | Autoridade para Atribuição de Números da Internet)
  - Sempre começa com a sequência de bits 1111, portanto, entre 240 e 255.
  - Intervalo de endereços de 240.0.0.0 a 255.255.255.255.

### 3. Endereços de IP privados entre classes:

* Classe A **10.0.0.0** à **10.255.255.255** (total de _16.777.216_ Endereços de IP);
* Classe B **172.16.0.0** à **172.31.255.255** (total de _1.048.576_ Endereços de IP);
* Classe C **192.168.0.0** à **192.168.255.255** (total de _65.536_ Endereços de IP);

- Tabela Resumo :

  | Classe    | Bits do inicio | Inicio    | Fim             | Máscara       |  Máscara de sub-rede padrão       |
  | --------- | -------------- | --------- | --------------- | ------------- | --------------------------------- |
  | Classe A  | 0              | 0.0.0.0   | 127.255.255.255 | /8            | 255.0.0.0                         |
  | Classe B  | 10             | 128.0.0.0 | 191.255.255.255 | /16           | 255.255.0.0                       |
  | Classe C  | 110            | 192.0.0.0 | 223.255.255.255 | /24           | 255.255.255.0                     |
  | Classe D  | 1110           | 224.0.0.0 | 239.255.255.255 |               | Não definido                      |
  | Classe E  | 1111           | 240.0.0.0 | 255.255.255.255 |               | Não definido                      |

---

### 4. Endereço de transmissão (broadcast) :
É um endereço pelo qual todos os dispositivos conectados à rede podem receber pacotes. Uma mensagem enviada para um endereço de broadcast pode ser recebida por todos os hosts conectados à rede. É o endereço IP mais alto de acordo com o endereço de rede.

---

### 5. Diferença entre IP privado e público
  ##### - Privado:
  Esses endereços não estão na Internet, mas apenas em redes privadas. Eles reforçam a segurança porque não estão diretamente conectados à Internet, mas a um roteador conectado à Internet. Para permitir que um endereço privado acesse a Internet, o endereço deve ser traduzido para um endereço público
  ##### - Público:
  Esses endereços permitem que os computadores na rede se comuniquem entre si na Internet. Esses endereços são fornecidos pelo ISP (provedor de serviços de Internet). Cada endereço é único no mundo.
  ##### Exceções:
  - A rede 127.0.0.0 é reservada para testes de loop local, como o endereço IP 127.0.0.1 ("localhost").
  - A rede 0.0.0.0 também é reservada.

