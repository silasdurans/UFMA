
import json
import os

ARQUIVO = "livros.json"

def carregar_dados():
    if os.path.exists(ARQUIVO):
        with open(ARQUIVO, "r") as f:
            return json.load(f)
    return []

def salvar_dados(livros):
    with open(ARQUIVO, "w") as f:
        json.dump(livros, f, indent=4)

def cadastrar_livro():
    try:
        nome = input("Nome: ")
        ano = int(input("Ano: "))
        categoria = input("Categoria: ")
        livro = {"nome": nome, "ano": ano, "categoria": categoria}
        livros = carregar_dados()
        livros.append(livro)
        salvar_dados(livros)
        print("Livro cadastrado com sucesso!")
    except Exception as e:
        print(f"Erro ao cadastrar: {e}")

def listar_livros():
    livros = carregar_dados()
    if not livros:
        print("Nenhum livro cadastrado.")
    else:
        for i, livro in enumerate(livros, start=1):
            print(f"{i}. {livro['nome']} - {livro['ano']} ano de publicação - Categoria: {livro['categoria']}")


def pesquisar_livro():
    livros = carregar_dados()
    if not livros:
        print("Nenhum livro cadastrado.")
        return

    print("Pesquisar por:")
    print("1. Nome")
    print("2. Categoria")
    print("3. Ano de publicação")
    opcao = input("Escolha uma opção: ")

    termo = input("Digite o termo de busca: ").lower()
    encontrados = []

    if opcao == "1":
        encontrados = [l for l in livros if termo in l["nome"].lower()]
    elif opcao == "2":
        encontrados = [l for l in livros if termo in l["categoria"].lower()]
    elif opcao == "3":
        encontrados = [l for l in livros if termo == str(l["ano"])]
    else:
        print("Opção inválida.")
        return

    if encontrados:
        print("Resultados encontrados:")
        for l in encontrados:
            print(f"{l['nome']} - {l['ano']} - Categoria: {l['categoria']}")
    else:
        print("Nenhum livro encontrado.")


def alterar_livro():
    listar_livros()
    livros = carregar_dados()
    try:
        idx = int(input("Digite o número do livro que deseja alterar: ")) - 1
        if 0 <= idx < len(livros):
            livros[idx]["nome"] = input("Novo nome: ")
            livros[idx]["ano"] = int(input("Nova ano: "))
            livros[idx]["categoria"] = input("Novo categoria: ")
            salvar_dados(livros)
            print("Livro atualizado!")
        else:
            print("Índice inválido.")
    except Exception as e:
        print(f"Erro ao alterar: {e}")

def remover_livro():
    listar_livros()
    livros = carregar_dados()
    try:
        idx = int(input("Digite o número do livro que deseja remover: ")) - 1
        if 0 <= idx < len(livros):
            livros.pop(idx)
            salvar_dados(livros)
            print("Livro removido!")
        else:
            print("Índice inválido.")
    except Exception as e:
        print(f"Erro ao remover: {e}")

def relatorios():
    while True:
        print("\nRELATÓRIOS")
        print("1. Total de livros cadastrados")
        print("2. Livros por categoria")
        print("0. Voltar")
        opcao = input("Escolha uma opção: ")
        if opcao == "1":
            livros = carregar_dados()
            print(f"Total de livros: {len(livros)}")
        elif opcao == "2":
            livros = carregar_dados()
            categorias = {}
            for a in livros:
                categorias[a["categoria"]] = categorias.get(a["categoria"], 0) + 1
            for categoria, qtd in categorias.items():
                print(f"- {categoria}: {qtd} livro(s)")
        elif opcao == "0":
            break
        else:
            print("Opção inválida.")

def menu():
    while True:
        print("\nMENU PRINCIPAL")
        print("1. Cadastrar livro")
        print("2. Listar livros")
        print("3. Pesquisar livro")
        print("4. Alterar livro")
        print("5. Remover livro")
        print("6. Relatórios")
        print("0. Sair")
        opcao = input("Escolha uma opção: ")
        try:
            if opcao == "1":
                cadastrar_livro()
            elif opcao == "2":
                listar_livros()
            elif opcao == "3":
                pesquisar_livro()
            elif opcao == "4":
                alterar_livro()
            elif opcao == "5":
                remover_livro()
            elif opcao == "6":
                relatorios()
            elif opcao == "0":
                break
            else:
                print("Opção inválida.")
        except Exception as e:
            print(f"Erro no menu: {e}")

if __name__ == "__main__":
    menu()
