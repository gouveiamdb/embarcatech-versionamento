# Conversor de Unidades

## 📝 Sobre o Projeto

Este projeto é um conversor de unidades desenvolvido em C que permite realizar conversões entre diferentes tipos de unidades de medida. O programa foi desenvolvido de forma modular, permitindo fácil manutenção e expansão das funcionalidades.

## 🎯 Funcionalidades

### 1. Conversão de Comprimento
- Metro para Centímetro
- Metro para Milímetro
- Centímetro para Metro
- Centímetro para Milímetro
- Milímetro para Metro
- Milímetro para Centímetro

### 2. Conversão de Área
- Metro quadrado para Centímetro quadrado
- Metro quadrado para Milímetro quadrado
- Centímetro quadrado para Metro quadrado
- Centímetro quadrado para Milímetro quadrado

### 3. Conversão de Dados
- Bytes para Kilobytes
- Bytes para Megabytes
- Kilobytes para Megabytes
- Megabytes para Gigabytes
- Gigabytes para Terabytes

### 4. Conversão de Massa
- Quilograma para Grama
- Quilograma para Miligrama
- Grama para Quilograma
- Grama para Miligrama
- Tonelada para Quilograma

### 5. Conversão de Volume
- Litro para Mililitro
- Litro para Metro cúbico
- Mililitro para Litro
- Metro cúbico para Litro

### 6. Conversão de Temperatura
- Celsius para Fahrenheit
- Celsius para Kelvin
- Fahrenheit para Celsius
- Fahrenheit para Kelvin
- Kelvin para Celsius
- Kelvin para Fahrenheit

### 7. Conversão de Velocidade
- Quilômetros por hora para Metros por segundo
- Quilômetros por hora para Milhas por hora
- Metros por segundo para Quilômetros por hora
- Milhas por hora para Quilômetros por hora

## 🛠️ Requisitos do Sistema

- Compilador GCC
- Sistema operacional Windows, Linux ou macOS
- Mínimo de 64MB de RAM
- 1MB de espaço em disco

## 📂 Estrutura do Projeto

```
conversor-unidades/
├── bin/                    # Arquivos binários compilados
├── src/                   # Código-fonte (.c)
│   ├── main.c
│   ├── conversao_area.c
│   ├── conversao_comprimento.c
│   ├── conversao_dados.c
│   ├── conversao_massa.c
│   ├── conversao_temperatura.c
│   ├── conversao_velocidade.c
│   ├── conversao_volume.c
│   ├── conversoes.h        # Arquivo de cabeçalho
│   └── main.c
├── test/                  # Arquivos de teste
├── docs/                  # Documentação adicional
├── obj/ 
└── README.md             # Este arquivo
```

## ⚙️ Instalação e Compilação

### Pré-requisitos
1. Instale o GCC (GNU Compiler Collection):
   - Windows: MinGW ou MSYS2
   - Linux: `sudo apt-get install gcc` (Ubuntu/Debian)
   - macOS: `xcode-select --install`

### Compilação

1. Clone o repositório:
```bash
git clone https://github.com/gouveiamdb/embarcatech-versionamento
cd embarcatech-versionamento
```

2. Crie o diretório bin (se não existir):
```bash
mkdir -p bin
```

3. Compile o projeto:
```bash
gcc src/main.c src/conversao_comprimento.c src/conversao_area.c src/conversao_dados.c src/conversao_massa.c src/conversao_temperatura.c src/conversao_volume.c src/conversao_velocidade.c -I include -o bin/conversor
```

## 🚀 Como Usar

1. Execute o programa compilado:
```bash
./bin/conversor  # Linux/macOS
.\bin\conversor  # Windows
```

2. Siga as instruções no menu:
   - Escolha o tipo de conversão (1-7)
   - Selecione a conversão específica
   - Digite o valor a ser convertido
   - Visualize o resultado

## 🧪 Testes

Para executar os testes unitários:

```bash
cd test
gcc test_conversoes.c -o test_runner
./test_runner
```

## 👥 Contribuindo

1. Faça um fork do projeto
2. Crie uma branch para sua feature:
```bash
git checkout -b feature/nova-conversao
```
3. Commit suas mudanças:
```bash
git commit -m 'Adiciona nova conversão de unidade'
```
4. Push para a branch:
```bash
git push origin feature/nova-conversao
```
5. Abra um Pull Request


## 🐛 Tratamento de Erros

O programa inclui tratamento para:
- Valores inválidos
- Divisão por zero
- Estouro de buffer
- Limites de conversão

## 🔄 Versionamento

- Versão atual: 1.0.0

## 📜 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## ✨ Contribuidores

- Thiago de Andrade Barros Machado - Conversão de Comprimento - https://github.com/ThiagoMachado2
- Pedro Henrique Ferreira Amorim da Silva - Conversão de Área - https://github.com/PedroHenriqueFAS
- Matheus Gouveia de Deus Bastos - Conversão de Dados - https://github.com/gouveiamdb
- Naylane do Nascimento Ribeiro - Conversão de Massa - https://github.com/naylane
- Marcelo Barbosa de Almeida - Conversão de Volume - https://github.com/marcelofainor
- Marcelo Barbosa de Almeida - Conversão de Temperatura - https://github.com/marcelofainor
- Levi Silva Freitas - Conversão de Velocidade - https://github.com/Lvi01
- Alécio Vinicius Oliveira Silva - Conversão de Watts, quilowatts e cavalos-vapor - https://github.com/Al3ci0
- Joel Junior Nunes Araujo - Interface de usuário - https://github.com/eijoeljunior289
- Maria Luiza Lemos Peixoto - https://github.com/mluizalpx

## 📞 Suporte

Para reportar bugs ou sugerir novas funcionalidades, abra uma issue no GitHub.

## 🔍 FAQ

**P: Como adicionar uma nova unidade de conversão?**
R: Crie novos arquivos .c e .h na estrutura apropriada e adicione a funcionalidade ao menu principal.

**P: O programa suporta números negativos?**
R: Sim, exceto para conversões que não fazem sentido com números negativos (como dados digitais).

**P: Qual é a precisão das conversões?**
R: O programa utiliza double para cálculos, oferecendo precisão de até 15 dígitos decimais.
