<!-- Proje Başlığı -->
<h1 align="center">42 - Minitalk 📡</h1>

<!-- Proje Açıklaması -->
<p align="center">
Minitalk projesi, Unix tabanlı işletim sistemlerinde bir sunucu ve bir istemci arasında iletişim kurmayı sağlayan bir programdır. Bu iletişim kanalı, Unix'in sinyal mekanizmasını kullanarak oluşturulur. Proje, temel bir konsept olan sinyal işleme ve IPC (Inter-Process Communication - Süreçler Arası İletişim) konularını anlamak ve uygulamak için bir fırsat sunar.
</p>

<!-- Proje Logosu veya Görseli -->
<p align="center">
  <img src="https://github.com/ayogun/42-project-badges/blob/main/badges/minitalkm.png" alt="Proje Logo">
</p>

## Projenin Amacı 🎯

Minitalk projesinin temel amacı, Unix sinyallerini kullanarak iki süreç arasında iletişim kurmak ve bilgi alışverişi yapmaktır. Bu proje, Unix işletim sistemi hakkında derinlemesine bir anlayış kazanmamıza ve sistem seviyesinde programlama becerilerimizi geliştirmemize yardımcı olur.

Sunucu ve istemci arasındaki iletişim, iki ayrı programın çalıştırılmasıyla gerçekleşir: bir sunucu programı ve bir istemci programı. Sunucu programı, belirli bir sinyal yakalayarak mesajları alır ve işler. İstemci programı ise sunucuya mesaj göndermek için bir sinyal gönderir. Bu şekilde, iki program arasında veri alışverişi yapılabilir.

Proje, özellikle ağ uygulamalarında ve sunucu-istemci mimarisinde temel bir rol oynayan IPC kavramını anlamak için bir fırsat sunar. Ayrıca, Unix işletim sistemlerinin temel özelliklerinden biri olan sinyal mekanizmasını uygulamak ve işlemek için pratik bir deneyim sağlar.

Minitalk projesi, Unix sinyal mekanizmasını kullanarak basit bir iletişim kanalı oluştururken, aynı zamanda temel bir ağ uygulamasının nasıl çalıştığını anlamak için önemli bir fırsat sunar. Bu proje, işletim sistemi ve ağ konularında derinlemesine bir anlayış geliştirmek isteyenler için ideal bir öğrenme aracıdır.

## Kullanım Senaryoları 📜

Minitalk projesi, aşağıdaki kullanım senaryolarını içerebilir:

- Bir sunucu ve istemci oluşturma
- Sunucu ve istemci arasında mesaj gönderme
- İletişim kanalını doğru bir şekilde kurma ve yönetme

## Proje İçeriği 📁

Minitalk projesi, aşağıdaki bileşenleri içerebilir:

- **minitalk.h**: Kütüphane dosyası.
- **server.c**: Sunucu işlevlerini ve sinyal işleyicisini içeren C dosyası.
- **client.c**: İstemci işlevlerini ve sinyal işleyicisini içeren C dosyası.
- **utils.c**: Yardımcı işlevlerin ve veri yapılarının bulunduğu C dosyası.
- **Makefile**: Projenin derlenmesini ve yürütülmesini otomatikleştirmek için kullanılan bir Makefile.

## Bonus Kısım  🌟

- **client_bonus.c**: İstemci işlevlerini ve sinyal işleyicisini içeren bonus C dosyası.
- **server_bonus.c**: Sunucu işlevlerini ve sinyal işleyicisini içeren bonus C dosyası.
- **utils_bonus.c**: Bonus kısım için yardımcı işlevlerin ve veri yapılarının bulunduğu C dosyası.
- **Makefile**: Projenin derlenmesini ve yürütülmesini otomatikleştirmek için kullanılan bir Makefile.

## Gereksinimler  ⚙️

Minitalk projesini çalıştırmak için aşağıdaki gereksinimlerin sağlanması gerekir:

- Unix tabanlı bir işletim sistemi (Linux, macOS)
- GCC derleyici

## Kurulum  🛠️

Projeyi yerel bir makinede çalıştırmak için aşağıdaki adımları izleyin:

1. Repoyu yerel makinenize klonlayın: `git clone https://github.com/deryaxacar/minitalk.git`
2. Proje dizinine gidin: `cd minitalk`
3. Sunucu ve istemciyi derlemek için Makefile'ı çalıştırın: `make`

## Kullanım 🚀

Sunucu ve istemciyi çalıştırmak için aşağıdaki adımları izleyin:

1. Sunucuyu başlatın: `./server`
2. İstemciyi başlatın ve sunucuya bir mesaj gönderin: `./client [sunucu_pid] [mesaj]`
