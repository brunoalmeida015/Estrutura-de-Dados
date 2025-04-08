# -*- coding: utf-8 -*-
from graph import Graph

def load_from(file_name):
    with open(file_name, 'r') as f:
        n = int(f.readline().strip())
        g = Graph(n)
        
        l = 0
        for line in f:
            line = line.strip()
            numeros = line.split("\t")
            c = 0
            for i in numeros:
                if c == n:
                    break
                g.M[l][c] = int(i)
                if int(i) != 0:
                    g.L[l].append(c)
                c += 1
            l += 1
    
    return g