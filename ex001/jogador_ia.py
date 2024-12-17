# -*- coding: utf-8 -*-
from random import randint
from jogador import Jogador
from tabuleiro import Tabuleiro

class JogadorIA(Jogador):
    def __init__(self, tabuleiro: Tabuleiro, tipo: int):
        super().__init__(tabuleiro, tipo)

    def getJogada(self) -> (int, int):
        # R1: Verifica se pode ganhar
        for l in range(3):
            for c in range(3):
                if self.matriz[l][c] == Tabuleiro.DESCONHECIDO:
                    # Tenta a jogada
                    self.matriz[l][c] = self.tipo
                    if self.tabuleiro.tem_campeao() == self.tipo:
                        self.matriz[l][c] = Tabuleiro.DESCONHECIDO
                        return (l, c)
                    self.matriz[l][c] = Tabuleiro.DESCONHECIDO

        # R2: Verifica se pode bloquear o oponente
        oponente = Tabuleiro.JOGADOR_0 if self.tipo == Tabuleiro.JOGADOR_X else Tabuleiro.JOGADOR_X
        for l in range(3):
            for c in range(3):
                if self.matriz[l][c] == Tabuleiro.DESCONHECIDO:
                    self.matriz[l][c] = oponente
                    if self.tabuleiro.tem_campeao() == oponente:
                        self.matriz[l][c] = Tabuleiro.DESCONHECIDO
                        return (l, c)
                    self.matriz[l][c] = Tabuleiro.DESCONHECIDO

        # R3: Se o quadrado central estiver livre, marque-o
        if self.matriz[1][1] == Tabuleiro.DESCONHECIDO:
            return (1, 1)

        # R4: Se o oponente tiver marcado um dos cantos, marque o canto oposto
        cantos = [(0, 0), (0, 2), (2, 0), (2, 2)]
        opostos = {(0, 0): (2, 2), (0, 2): (2, 0), (2, 0): (0, 2), (2, 2): (0, 0)}
        for canto in cantos:
            if self.matriz[canto[0]][canto[1]] == oponente:
                oposto = opostos[canto]
                if self.matriz[oposto[0]][oposto[1]] == Tabuleiro.DESCONHECIDO:
                    return oposto

        # Verifica se há uma jogada que cria duas sequências de duas marcações
        for l in range(3):
            for c in range(3):
                if self.matriz[l][c] == Tabuleiro.DESCONHECIDO:
                    self.matriz[l][c] = self.tipo
                    sequencias = self.conta_sequencias(self.tipo)
                    self.matriz[l][c] = Tabuleiro.DESCONHECIDO
                    if sequencias >= 2:
                        return (l, c)

        # Se não há jogada de vitória, bloqueio ou criação de duas sequências, escolhe aleatoriamente
        lista = []
        for l in range(3):
            for c in range(3):
                if self.matriz[l][c] == Tabuleiro.DESCONHECIDO:
                    lista.append((l, c))

        if len(lista) > 0:
            p = randint(0, len(lista) - 1)
            return lista[p]
        else:
            return None

    def conta_sequencias(self, tipo: int) -> int:
        sequencias = 0
        # Verifica linhas
        for linha in self.matriz:
            if linha.count(tipo) == 2 and linha.count(Tabuleiro.DESCONHECIDO) == 1:
                sequencias += 1
        # Verifica colunas
        for col in range(3):
            coluna = [self.matriz[row][col] for row in range(3)]
            if coluna.count(tipo) == 2 and coluna.count(Tabuleiro.DESCONHECIDO) == 1:
                sequencias += 1
        # Verifica diagonais
        diagonal1 = [self.matriz[i][i] for i in range(3)]
        diagonal2 = [self.matriz[i][2 - i] for i in range(3)]
        if diagonal1.count(tipo) == 2 and diagonal1.count(Tabuleiro.DESCONHECIDO) == 1:
            sequencias += 1
        if diagonal2.count(tipo) == 2 and diagonal2.count(Tabuleiro.DESCONHECIDO) == 1:
            sequencias += 1
        return sequencias