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
  - O endereço 127.0.0.0 é reservado para testes de loop local, como o endereço IP 127.0.0.1 ("localhost").
  - O endereço 0.0.0.0 também é reservado.

---

### 6. Máscara de sub-rede
Permite distinguir a parte do endereço usado para roteamento e o que é usado para numerar interfaces (computadores, impressoras, etc.)
Sendo codificado em 4 bytes e consistindo de uma série de 1 e 0, existem 32 possibilidades de máscara

---

### 7. TCP : (Transmission Control Protocol)
O TCP é um protocolo da camada de transporte confiável que tem por objetivo garantir que os dados são integralmente transmitidos para os hosts de destino corretos, na sequência pelo qual foram enviados.

O TCP particiona (segmenta) a informação recebida da Camada Aplicação em blocos menores de informação, conhecidos como datagramas, e embute um cabeçalho de identificação que permite ao host destino fazer a recomposição dos dados. Este cabeçalho contém um conjunto de bits (checksum) que permite a validação dos dados e do próprio cabeçalho.

#### Características do TCP
- Transferência de dados: Padrão full-duplex entre 2 pontos, ou seja, ambos os pontos conectados podem transmitir e receber simultaneamente.
- Transferência de dados com diferentes prioridades: Interpreta as sinalizações de prioridades e organiza o encaminhamento dos datagramas segundo ela.
- Estabelecimento e libertação de conexões: Solicita e aceita o início e o término das transmissões entre hosts.
- Sequenciação: Ordenação dos pacotes recebidos.
- Segmentação e reassemblagem: Divide uma informação maior em pacotes menores para transmissão. Dessa forma, identificando-os afim de serem reagrupados adequadamente em seu recebimento.
- Controle de fluxo: Analista as condições da transmissão (velocidade, meio físico, tráfego, etc.) e adapta os datagramas para essa transmissão.
- Controle de erros: Através do conjunto de bits (checksum) do seu cabeçalho, verifica se os dados transmitidos estão livres de erros. Além da detecção, é possível também a sua correção.
- Multiplexagem de IP: Uma vez que é utilizado o conceito de portas, é possível enviar dados de diferentes tipos de serviços (portas diferentes) para o mesmo host de destino.
- O TCP não suporta transmissão.
- O TCP é comparativamente mais lento que o UDP.
- O TCP fornece extensos mecanismos de verificação de erros. Isso ocorre porque fornece controle de fluxo e reconhecimento de dados.
- O TCP é confiável, pois garante a entrega de dados ao roteador de destino.
- A seqüência de dados é um recurso do TCP (isso significa que os pacotes chegam em ordem ao receptor).
- TCP é um protocolo orientado a conexão.

---

  ### 8. UDP : (User Datagram Protocol)
  Permite a troca entre dois usuários de uma maneira simples, cada um definido por um endereço IP e uma porta. Não é necessário ter comunicação prévia para estabelecer a conexão, ao contrário do TCP, que usa handshaking _ (Princípio em que duas entidades primeiro realizam uma "negociação" antes de uma comunicação) _. Os pacotes enviados no UDP são prefixados com um cabeçalho que contém o endereço de destino, suficiente para o seu envio.

  #### > Propriedades:
  - Não retém informações sobre o status das mensagens UDP. É definido como um protocolo não confiável
  - "Orientado a transações", prático para protocolos simples de solicitação-resposta
  - Fornece datagramas úteis para modelar outros protocolos
  - Diz-se sem estado, prático para streaming
  - Sem limite de tempo, prático em tempo real (bate-papos por voz, videogame etc.)
  - Eficaz para comunicações unidirecionais

  ### > Resumo:
  - UDP suporta transmissão.
  - O UDP é mais rápido, mais simples e mais eficiente que o TCP.
  - UDP é um protocolo orientado a datagramas.
  - O UDP possui apenas o mecanismo básico de controle de erros.
  - A entrega de dados para o destino não pode ser garantida no UDP.
  - Não há seqüência de dados no UDP. Se o pedido for necessário, ele deverá ser gerenciado pela camada do aplicativo.

---

### 9. Modelo OSI: (Open Systems Interconnection)
 É um padrão de comunicação, em rede, para todos os sistemas de computadores, possui uma arquitetura em camadas. É proposto pela ISO (International Organization for Standardization)

#### > Camadas:
  - Aplicação
  - Apresentação
  - Transporte de Sessão
  - Rede
  - Link de Dados
  - Físico

---

### 10. Servidor e protocolo DHCP:
  É um serviço que entrega endereços IP a computadores que se conectam à rede. O servidor emitirá uma concessão de DHCP para o computador, que inclui:
  - A vida útil da concessão (libera o endereço depois de um tempo. Se o computador ainda estiver conectado, ele fornecerá um novo endereço IP. Este sistema permite que os endereços IP sejam rotacionados).
  - Um endereço IP (endereço dinâmico: alocação estática).
  - E parâmetros de rede (endereço de gateway, endereço DNS).
  - Suporta IPv4 e IPv6.
  - Usa o protocolo UDP na camada de transporte.
  - Mecanismo que automatiza a configuração de IP, incluindo endereço IP, máscara de sub-rede, gateway padrão e informações de DNS.

---

### 11. DNS:
  O DNS — do inglês Domain Name System — é uma sigla para sistema de nomes de domínio. Como o nome sugere, é um registro que contém nomes de sites e respectivos endereços IP associados. Essa correlação favorece a transferência de dados entre computadores e permite o acesso à internet. Converte nomes de domínio da Internet e nomes de host em endereços IP.

---

### 12. Observações:

  - O **Ping** usa o protocolo ICMP.

#### > Um gateway:
  Dispositivo para conectar duas redes de computadores de diferentes tipos:
  - Repetidor (nível 1)
  - Ponte (nível 2)
  - Roteador (nível 3)

  Um gateway é mais conhecido como roteador, conectando uma rede local à Internet. Também serve como firewall e proxy. Um gateway padrão é um gateway que gerencia o roteamento no nível do IP.
