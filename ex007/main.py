# -*- coding: utf-8 -*-
from  leitor_arquivo import load_from

# Carregar o grafo a partir do arquivo
g = load_from("pcv4.txt")
g.print()

# Número de componentes conectados
n = g.num_comp()
print("Número de Componentes: " + str(n))

# Testar BFS com caminho entre dois vértices
s, t = 0, 3  # Substitua pelos vértices desejados
print("\nBFS Caminho:")
g.bfs_caminho(s, t)

# Testar DFS iterativo
print("\nDFS Iterativo:")
g.dfs_iterativo()