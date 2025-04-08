# -*- coding: utf-8 -*-
import queue

class Graph:
    def __init__(self, n):
        self.num_vertices = n
        self.M = [[0 for _ in range(n)] for _ in range(n)]
        self.L = [[] for _ in range(n)]

    def print(self):
        print("Número de Vértices: " + str(self.num_vertices))
        print("Matriz de adjacência:")
        print(self.M)
        print("Lista de Adjacência:")
        print(self.L)
    
    def num_comp(self):
        pred = self.dfs()
        num = 0
        for v in range(self.num_vertices):
            if pred[v] == -1:
                num += 1
        return num
    
    def dfs(self):
        pred = [-1 for _ in range(self.num_vertices)]
        visitados = [False for _ in range(self.num_vertices)]
        for v in range(self.num_vertices):
            if not visitados[v]:
                self.dfs_rec(v, visitados, pred)
        return pred
        
    def dfs_rec(self, v, visitados, pred):
        print("Vertice: " + str(v))
        visitados[v] = True
        for u in self.L[v]:
            if not visitados[u]:
                pred[u] = v
                self.dfs_rec(u, visitados, pred)
    
    def dfs_iterativo(self):
        pred = [-1 for _ in range(self.num_vertices)]
        visitados = [False for _ in range(self.num_vertices)]

        for v in range(self.num_vertices):
            if not visitados[v]:
                stack = [v]
                while stack:
                    u = stack.pop()
                    if not visitados[u]:
                        visitados[u] = True
                        print(f"Visitando vértice: {u}")
                        for w in self.L[u]:
                            if not visitados[w]:
                                stack.append(w)
                                pred[w] = u
        return pred

    def bfs(self, source):
        visitados = [False for _ in range(self.num_vertices)]
        pred = [-1 for _ in range(self.num_vertices)]
        D = [-1 for _ in range(self.num_vertices)]
        Q = queue.Queue()
        Q.put(source)
        visitados[source] = True
        D[source] = 0
        
        while not Q.empty():
            v = Q.get()
            print("Vertice:" + str(v))
            for u in self.L[v]:
                if not visitados[u]:
                    Q.put(u)
                    visitados[u] = True
                    D[u] = D[v] + 1
                    pred[u] = v
        
        return D, pred
    
    def bfs_caminho(self, source, target):
        visitados = [False for _ in range(self.num_vertices)]
        pred = [-1 for _ in range(self.num_vertices)]
        D = [-1 for _ in range(self.num_vertices)]
        Q = queue.Queue()
        Q.put(source)
        visitados[source] = True
        D[source] = 0

        while not Q.empty():
            v = Q.get()
            for u in self.L[v]:
                if not visitados[u]:
                    Q.put(u)
                    visitados[u] = True
                    D[u] = D[v] + 1
                    pred[u] = v

        # Reconstruir o caminho de s para t
        if not visitados[target]:
            print(f"Não há caminho entre os vértices {source} e {target}.")
            return

        caminho = []
        atual = target
        while atual != -1:
            caminho.append(atual)
            atual = pred[atual]
        caminho.reverse()

        print(f"Caminho entre {source} e {target}: {' -> '.join(map(str, caminho))}")