# -*- coding: utf-8 -*-

class Tabuleiro:
    DESCONHECIDO = 0
    JOGADOR_0 = 1
    JOGADOR_X = 4

    def __init__(self):
        self.matriz = [ [Tabuleiro.DESCONHECIDO, Tabuleiro.DESCONHECIDO, Tabuleiro.DESCONHECIDO], 
                        [Tabuleiro.DESCONHECIDO, Tabuleiro.DESCONHECIDO, Tabuleiro.DESCONHECIDO],
                        [Tabuleiro.DESCONHECIDO, Tabuleiro.DESCONHECIDO, Tabuleiro.DESCONHECIDO]]
       
        
    def tem_campeao(self):
         # Verifica linhas
        for linha in self.matriz:
            if linha[0] == linha[1] == linha[2] != Tabuleiro.DESCONHECIDO:
                return linha[0]
         # Verifica colunas
        for col in range(3):
            if self.matriz[0][col] == self.matriz[1][col] == self.matriz[2][col] != Tabuleiro.DESCONHECIDO:
                return self.matriz[0][col]
         # Verifica diagonais
        if self.matriz[0][0] == self.matriz[1][1] == self.matriz[2][2] != Tabuleiro.DESCONHECIDO:
            return self.matriz[0][0]
        if self.matriz[0][2] == self.matriz[1][1] == self.matriz[2][0] != Tabuleiro.DESCONHECIDO:
            return self.matriz[0][2]
          
        return Tabuleiro.DESCONHECIDO
    