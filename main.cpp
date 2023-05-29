#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include "Sculptor.h"

using namespace std;

int main(){
  int d=100;
  Sculptor Projeto(d,d,d);

  //////////////    PIÃO    /////////////////////////////////////////////////////////////

  Projeto.setColor(0.439, 0.341, 0.137, 0.78); //Marrom claro
  Projeto.putEllipsoid(40, 50, 50, 20, 20, 1);
  Projeto.putEllipsoid(40, 50, 49, 20, 20, 1);
  Projeto.putEllipsoid(40, 50, 48, 20, 20, 1);
  Projeto.putEllipsoid(40, 50, 47, 20, 20, 1);
  Projeto.putEllipsoid(40, 50, 46, 21, 21, 1);
  Projeto.putEllipsoid(40, 50, 45, 22, 22, 1);
  Projeto.putEllipsoid(40, 50, 44, 23, 23, 1);
  Projeto.putEllipsoid(40, 50, 43, 24, 24, 1);
  Projeto.putEllipsoid(40, 50, 42, 25, 25, 1);
  Projeto.putEllipsoid(40, 50, 41, 26, 26, 1);
  Projeto.putEllipsoid(40, 50, 40, 27, 27, 1);
  Projeto.putEllipsoid(40, 50, 39, 28, 28, 1);
  Projeto.putEllipsoid(40, 50, 38, 29, 29, 1);
  Projeto.putEllipsoid(40, 50, 37, 30, 30, 1);
  Projeto.putEllipsoid(40, 50, 36, 31, 31, 1);
  Projeto.putEllipsoid(40, 50, 35, 32, 32, 1);
  Projeto.putEllipsoid(40, 50, 34, 33, 33, 1);
  Projeto.putEllipsoid(40, 50, 33, 34, 34, 1);
  Projeto.putEllipsoid(40, 50, 32, 35, 35, 1);
  Projeto.putEllipsoid(40, 50, 31, 34, 34, 1);
  Projeto.putEllipsoid(40, 50, 30, 33, 33, 1);
  Projeto.putEllipsoid(40, 50, 29, 32, 32, 1);
  Projeto.putEllipsoid(40, 50, 28, 31, 31, 1);
  Projeto.putEllipsoid(40, 50, 27, 30, 30, 1);
  Projeto.putEllipsoid(40, 50, 26, 29, 29, 1);
  Projeto.putEllipsoid(40, 50, 25, 28, 28, 1);
  Projeto.putEllipsoid(40, 50, 24, 27, 27, 1);
  Projeto.putEllipsoid(40, 50, 23, 26, 26, 1);
  Projeto.putEllipsoid(40, 50, 22, 25, 25, 1);
  Projeto.putEllipsoid(40, 50, 21, 24, 24, 1);
  Projeto.putEllipsoid(40, 50, 20, 23, 23, 1);
  Projeto.putEllipsoid(40, 50, 19, 22, 22, 1);
  Projeto.putEllipsoid(40, 50, 18, 21, 21, 1);
  Projeto.putEllipsoid(40, 50, 17, 20, 20, 1);
  Projeto.putEllipsoid(40, 50, 16, 19, 19, 1);
  Projeto.putEllipsoid(40, 50, 15, 18, 18, 1);
  Projeto.putEllipsoid(40, 50, 14, 17, 17, 1);
  Projeto.putEllipsoid(40, 50, 13, 16, 16, 1);
  Projeto.putEllipsoid(40, 50, 12, 15, 15, 1);
  Projeto.putEllipsoid(40, 50, 11, 14, 14, 1);
  Projeto.putEllipsoid(40, 50, 10, 13, 13, 1);
  Projeto.putEllipsoid(40, 50, 9, 12, 12, 1);
  Projeto.putEllipsoid(40, 50, 8, 11, 11, 1);
  Projeto.putEllipsoid(40, 50, 7, 10, 10, 1);
  Projeto.putEllipsoid(40, 50, 6, 9, 9, 1);
  Projeto.putEllipsoid(40, 50, 5, 8, 8, 1);
  Projeto.setColor(0.450, 0.450, 0.450, 0.78); //Cinza
  Projeto.putVoxel(40, 50, 4);
  Projeto.putVoxel(40, 50, 3);
  Projeto.putVoxel(40, 50, 2);
  Projeto.putVoxel(40, 50, 1);
  Projeto.putVoxel(40, 50, 0);
  Projeto.cutVoxel(40, 50, 51);
  
  /////////////    CHUN LI         ////////////////////////////////////////
  Projeto.setColor(0.439, 0.341, 0.137, 0.78); //Preto
  Projeto.putEllipsoid(40, 50, 50, 19, 19, 1);

  //Linha 1
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(31, 39, 50);
  Projeto.putVoxel(32, 39, 50);
  Projeto.putVoxel(33, 39, 50);
  Projeto.putVoxel(34, 39, 50);
  Projeto.putVoxel(35, 39, 50);
  Projeto.putVoxel(36, 39, 50);
  Projeto.putVoxel(37, 39, 50);
  Projeto.putVoxel(38, 39, 50);
  Projeto.putVoxel(42, 39, 50);
  Projeto.putVoxel(43, 39, 50);
  Projeto.putVoxel(44, 39, 50);
  Projeto.putVoxel(45, 39, 50);
  Projeto.putVoxel(46, 39, 50);
  Projeto.putVoxel(47, 39, 50);
  Projeto.putVoxel(48, 39, 50);
  Projeto.putVoxel(49, 39, 50);

  //Linha 2
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(31, 40, 50);
  Projeto.putVoxel(38, 40, 50);
  Projeto.putVoxel(39, 40, 50);
  Projeto.putVoxel(40, 40, 50);
  Projeto.putVoxel(41, 40, 50);
  Projeto.putVoxel(42, 40, 50);
  Projeto.putVoxel(49, 40, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(32, 40, 50);
  Projeto.putVoxel(33, 40, 50);
  Projeto.putVoxel(34, 40, 50);
  Projeto.putVoxel(35, 40, 50);
  Projeto.putVoxel(36, 40, 50);
  Projeto.putVoxel(37, 40, 50);
  Projeto.putVoxel(43, 40, 50);
  Projeto.putVoxel(44, 40, 50);
  Projeto.putVoxel(45, 40, 50);
  Projeto.putVoxel(46, 40, 50);
  Projeto.putVoxel(47, 40, 50);
  Projeto.putVoxel(48, 40, 50);

  //Linha 3
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(32, 41, 50);
  Projeto.putVoxel(48, 41, 50);
  Projeto.setColor(1,1,0, 0.5); //Amarelo
  Projeto.putVoxel(38, 41, 50);
  Projeto.putVoxel(39, 41, 50);
  Projeto.putVoxel(40, 41, 50);
  Projeto.putVoxel(41, 41, 50);
  Projeto.putVoxel(42, 41, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(33, 41, 50);
  Projeto.putVoxel(34, 41, 50);
  Projeto.putVoxel(35, 41, 50);
  Projeto.putVoxel(36, 41, 50);
  Projeto.putVoxel(37, 41, 50);
  Projeto.putVoxel(43, 41, 50);
  Projeto.putVoxel(44, 41, 50);
  Projeto.putVoxel(45, 41, 50);
  Projeto.putVoxel(46, 41, 50);
  Projeto.putVoxel(47, 41, 50);

  //Linha 4
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(33, 42, 50);
  Projeto.putVoxel(34, 42, 50);
  Projeto.putVoxel(46, 42, 50);
  Projeto.putVoxel(47, 42, 50);
  Projeto.setColor(0.694, 0.509, 0.164, 1); //Marrom
  Projeto.putVoxel(35, 42, 50);
  Projeto.putVoxel(36, 42, 50);
  Projeto.putVoxel(37, 42, 50);
  Projeto.putVoxel(43, 42, 50);
  Projeto.putVoxel(44, 42, 50);
  Projeto.putVoxel(45, 42, 50);
  Projeto.setColor(1,1,0, 0.5); //Amarelo
  Projeto.putVoxel(38, 42, 50);
  Projeto.putVoxel(42, 42, 50);
  Projeto.setColor(0, 0, 0.619, 1); //Azul Escuro
  Projeto.putVoxel(39, 42, 50);
  Projeto.putVoxel(40, 42, 50);
  Projeto.putVoxel(41, 42, 50);

  //Linha 5
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(35, 43, 50);
  Projeto.putVoxel(45, 43, 50);
  Projeto.setColor(0.694, 0.509, 0.164, 1); //Marrom
  Projeto.putVoxel(36, 43, 50);
  Projeto.putVoxel(37, 43, 50);
  Projeto.putVoxel(43, 43, 50);
  Projeto.putVoxel(44, 43, 50);
  Projeto.setColor(1,1,0, 0.5); //Amarelo
  Projeto.putVoxel(38, 43, 50);
  Projeto.putVoxel(42, 43, 50);
  Projeto.setColor(0, 0, 0.619, 1); //Azul Escuro
  Projeto.putVoxel(39, 43, 50);
  Projeto.putVoxel(40, 43, 50);
  Projeto.putVoxel(41, 43, 50);

  //Linha 6
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(36, 44, 50);
  Projeto.putVoxel(44, 44, 50);
  Projeto.setColor(0.694, 0.509, 0.164, 1); //Marrom
  Projeto.putVoxel(37, 44, 50);
  Projeto.putVoxel(43, 44, 50);
  Projeto.setColor(1,1,0, 0.5); //Amarelo
  Projeto.putVoxel(38, 44, 50);
  Projeto.putVoxel(42, 44, 50);
  Projeto.setColor(0, 0, 0.619, 1); //Azul Escuro
  Projeto.putVoxel(39, 44, 50);
  Projeto.putVoxel(40, 44, 50);
  Projeto.putVoxel(41, 44, 50);

  //Linha 7
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(33, 45, 50);
  Projeto.putVoxel(34, 45, 50);
  Projeto.putVoxel(35, 45, 50);
  Projeto.putVoxel(36, 45, 50);
  Projeto.putVoxel(37, 45, 50);
  Projeto.putVoxel(43, 45, 50);
  Projeto.putVoxel(44, 45, 50);
  Projeto.putVoxel(45, 45, 50);
  Projeto.putVoxel(46, 45, 50);
  Projeto.putVoxel(47, 45, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(38, 45, 50);
  Projeto.putVoxel(39, 45, 50);
  Projeto.putVoxel(40, 45, 50);
  Projeto.putVoxel(41, 45, 50);
  Projeto.putVoxel(42, 45, 50);

  //Linha 8
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(32, 46, 50);
  Projeto.putVoxel(36, 46, 50);
  Projeto.putVoxel(37, 46, 50);
  Projeto.putVoxel(43, 46, 50);
  Projeto.putVoxel(44, 46, 50);
  Projeto.putVoxel(48, 46, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(38, 46, 50);
  Projeto.putVoxel(39, 46, 50);
  Projeto.putVoxel(40, 46, 50);
  Projeto.putVoxel(41, 46, 50);
  Projeto.putVoxel(42, 46, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(33, 46, 50);
  Projeto.putVoxel(34, 46, 50);
  Projeto.putVoxel(35, 46, 50);
  Projeto.putVoxel(45, 46, 50);
  Projeto.putVoxel(46, 46, 50);
  Projeto.putVoxel(47, 46, 50);

  //Linha 9
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(32, 47, 50);
  Projeto.putVoxel(36, 47, 50);
  Projeto.putVoxel(37, 47, 50);
  Projeto.putVoxel(43, 47, 50);
  Projeto.putVoxel(44, 47, 50);
  Projeto.putVoxel(48, 47, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(33, 47, 50);
  Projeto.putVoxel(34, 47, 50);
  Projeto.putVoxel(35, 47, 50);
  Projeto.putVoxel(45, 47, 50);
  Projeto.putVoxel(46, 47, 50);
  Projeto.putVoxel(47, 47, 50);
  Projeto.setColor(1,1,0, 0.5); //Amarelo
  Projeto.putVoxel(39, 47, 50);
  Projeto.putVoxel(42, 47, 50);
  Projeto.setColor(0, 0, 0.619, 1); //Azul Escuro
  Projeto.putVoxel(38, 47, 50);
  Projeto.putVoxel(40, 47, 50);
  Projeto.putVoxel(41, 47, 50);

  //Linha 10
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(31, 48, 50);
  Projeto.putVoxel(35, 48, 50);
  Projeto.putVoxel(36, 48, 50);
  Projeto.putVoxel(44, 48, 50);
  Projeto.putVoxel(45, 48, 50);
  Projeto.putVoxel(49, 48, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(32, 48, 50);
  Projeto.putVoxel(34, 48, 50);
  Projeto.putVoxel(48, 48, 50);
  Projeto.putVoxel(46, 48, 50);
  Projeto.setColor(1,1,0, 0.5); //Amarelo
  Projeto.putVoxel(38, 48, 50);
  Projeto.putVoxel(40, 48, 50);
  Projeto.putVoxel(43, 48, 50);
  Projeto.setColor(0, 0, 0.619, 1); //Azul Escuro
  Projeto.putVoxel(37, 48, 50);
  Projeto.putVoxel(39, 48, 50);
  Projeto.putVoxel(41, 48, 50);
  Projeto.putVoxel(42, 48, 50);
  Projeto.setColor(0.450, 0.450, 0.450, 0.78); //Cinza
  Projeto.putVoxel(33, 48, 50);
  Projeto.putVoxel(47, 48, 50);

  //Linha 11
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(32, 49, 50);
  Projeto.putVoxel(36, 49, 50);
  Projeto.putVoxel(44, 49, 50);
  Projeto.putVoxel(48, 49, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(33, 49, 50);
  Projeto.putVoxel(34, 49, 50);
  Projeto.putVoxel(47, 49, 50);
  Projeto.putVoxel(46, 49, 50);
  Projeto.setColor(1,1,0, 0.5); //Amarelo
  Projeto.putVoxel(35, 49, 50);
  Projeto.putVoxel(37, 49, 50);
  Projeto.putVoxel(42, 49, 50);
  Projeto.putVoxel(45, 49, 50);
  Projeto.setColor(0, 0, 0.619, 1); //Azul Escuro
  Projeto.putVoxel(38, 49, 50);
  Projeto.putVoxel(39, 49, 50);
  Projeto.putVoxel(40, 49, 50);
  Projeto.putVoxel(41, 49, 50);
  Projeto.putVoxel(43, 49, 50);

  //Linha 12
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(33, 50, 50);
  Projeto.putVoxel(39, 50, 50);
  Projeto.putVoxel(40, 50, 50);
  Projeto.putVoxel(41, 50, 50);
  Projeto.putVoxel(42, 50, 50);
  Projeto.putVoxel(47, 50, 50);
  Projeto.setColor(1,1,0, 0.5); //Amarelo
  Projeto.putVoxel(34, 50, 50);
  Projeto.putVoxel(38, 50, 50);
  Projeto.putVoxel(46, 50, 50);
  Projeto.setColor(0, 0, 0.619, 1); //Azul Escuro
  Projeto.putVoxel(35, 50, 50);
  Projeto.putVoxel(36, 50, 50);
  Projeto.putVoxel(37, 50, 50);
  Projeto.putVoxel(43, 50, 50);
  Projeto.putVoxel(44, 50, 50);
  Projeto.putVoxel(45, 50, 50);

  //Linha 13
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(30, 51, 50);
  Projeto.putVoxel(34, 51, 50);
  Projeto.putVoxel(38, 51, 50);
  Projeto.putVoxel(43, 51, 50);
  Projeto.putVoxel(46, 51, 50);
  Projeto.setColor(0, 0, 0.619, 1); //Azul Escuro
  Projeto.putVoxel(35, 51, 50);
  Projeto.putVoxel(36, 51, 50);
  Projeto.putVoxel(37, 51, 50);
  Projeto.putVoxel(44, 51, 50);
  Projeto.putVoxel(45, 51, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(39, 51, 50);
  Projeto.putVoxel(40, 51, 50);
  Projeto.putVoxel(41, 51, 50);
  Projeto.putVoxel(42, 51, 50);

  //Linha 14
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(29, 52, 50);
  Projeto.putVoxel(31, 52, 50);
  Projeto.putVoxel(35, 52, 50);
  Projeto.putVoxel(36, 52, 50);
  Projeto.putVoxel(37, 52, 50);
  Projeto.putVoxel(44, 52, 50);
  Projeto.putVoxel(45, 52, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(30, 52, 50);
  Projeto.setColor(0.917, 0.388, 0.756, 1); //Rosa
  Projeto.putVoxel(40, 52, 50);
  Projeto.putVoxel(41, 52, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(38, 52, 50);
  Projeto.putVoxel(39, 52, 50);
  Projeto.putVoxel(42, 52, 50);
  Projeto.putVoxel(43, 52, 50);

  //Linha 15
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(28, 53, 50);
  Projeto.putVoxel(29, 53, 50);
  Projeto.putVoxel(30, 53, 50);
  Projeto.putVoxel(32, 53, 50);
  Projeto.putVoxel(36, 53, 50);
  Projeto.putVoxel(45, 53, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(31, 53, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(37, 53, 50);
  Projeto.putVoxel(38, 53, 50);
  Projeto.putVoxel(39, 53, 50);
  Projeto.putVoxel(42, 53, 50);
  Projeto.putVoxel(44, 53, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(40, 53, 50);
  Projeto.putVoxel(41, 53, 50);
  Projeto.putVoxel(43, 53, 50);

  //Linha 16
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(27, 54, 50);
  Projeto.putVoxel(30, 54, 50);
  Projeto.putVoxel(31, 54, 50);
  Projeto.putVoxel(33, 54, 50);
  Projeto.putVoxel(35, 54, 50);
  Projeto.putVoxel(40, 54, 50);
  Projeto.putVoxel(41, 54, 50);
  Projeto.putVoxel(43, 54, 50);
  Projeto.putVoxel(45, 54, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(28, 54, 50);
  Projeto.putVoxel(29, 54, 50);
  Projeto.putVoxel(32, 54, 50);
  Projeto.setColor(0.164, 0.105, 0, 1); //Marrom Escuro
  Projeto.putVoxel(36, 54, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(37, 54, 50);
  Projeto.putVoxel(38, 54, 50);
  Projeto.putVoxel(42, 54, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(39, 54, 50);
  Projeto.putVoxel(44, 54, 50);

  //Linha 17
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(28, 55, 50);
  Projeto.putVoxel(29, 55, 50);
  Projeto.putVoxel(31, 55, 50);
  Projeto.putVoxel(32, 55, 50);
  Projeto.putVoxel(34, 55, 50);
  Projeto.putVoxel(40, 55, 50);
  Projeto.putVoxel(41, 55, 50);
  Projeto.putVoxel(43, 55, 50);
  Projeto.putVoxel(45, 55, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(30, 55, 50);
  Projeto.putVoxel(33, 55, 50);
  Projeto.setColor(0.164, 0.105, 0, 1); //Marrom Escuro
  Projeto.putVoxel(35, 55, 50);
  Projeto.putVoxel(36, 55, 50);
  Projeto.putVoxel(38, 55, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(37, 55, 50);
  Projeto.putVoxel(42, 55, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(39, 55, 50);
  Projeto.putVoxel(44, 55, 50);

  //Linha 18
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(30, 56, 50);
  Projeto.putVoxel(32, 56, 50);
  Projeto.putVoxel(34, 56, 50);
  Projeto.putVoxel(45, 56, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(31, 56, 50);
  Projeto.putVoxel(33, 56, 50);
  Projeto.setColor(0.164, 0.105, 0, 1); //Marrom Escuro
  Projeto.putVoxel(35, 56, 50);
  Projeto.putVoxel(36, 56, 50);
  Projeto.putVoxel(37, 56, 50);
  Projeto.putVoxel(38, 56, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(39, 56, 50);
  Projeto.putVoxel(42, 56, 50);
  Projeto.putVoxel(44, 56, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(40, 56, 50);
  Projeto.putVoxel(41, 56, 50);
  Projeto.putVoxel(43, 56, 50);

  //Linha 19
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(31, 57, 50);
  Projeto.putVoxel(33, 57, 50);
  Projeto.putVoxel(35, 57, 50);
  Projeto.putVoxel(45, 57, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(32, 57, 50);
  Projeto.putVoxel(34, 57, 50);
  Projeto.setColor(0.164, 0.105, 0, 1); //Marrom Escuro
  Projeto.putVoxel(36, 57, 50);
  Projeto.putVoxel(37, 57, 50);
  Projeto.putVoxel(38, 57, 50);
  Projeto.putVoxel(39, 57, 50);
  Projeto.putVoxel(43, 57, 50);
  Projeto.putVoxel(44, 57, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(40, 57, 50);
  Projeto.putVoxel(41, 57, 50);
  Projeto.putVoxel(42, 57, 50);

  //Linha 20
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(32, 58, 50);
  Projeto.putVoxel(33, 58, 50);
  Projeto.putVoxel(34, 58, 50);
  Projeto.putVoxel(45, 58, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(36, 58, 50);
  Projeto.setColor(0.164, 0.105, 0, 1); //Marrom Escuro
  Projeto.putVoxel(37, 58, 50);
  Projeto.putVoxel(38, 58, 50);
  Projeto.putVoxel(39, 58, 50);
  Projeto.putVoxel(40, 58, 50);
  Projeto.putVoxel(42, 58, 50);
  Projeto.putVoxel(43, 58, 50);
  Projeto.putVoxel(44, 58, 50);
  Projeto.setColor(0.984, 0.682, 0.435, 0.89); //Pele
  Projeto.putVoxel(41, 58, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(35, 58, 50);

  //Linha 21
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(34, 59, 50);
  Projeto.putVoxel(44, 59, 50);
  Projeto.putVoxel(46, 59, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(37, 59, 50);
  Projeto.setColor(0.164, 0.105, 0, 1); //Marrom Escuro
  Projeto.putVoxel(38, 59, 50);
  Projeto.putVoxel(39, 59, 50);
  Projeto.putVoxel(40, 59, 50);
  Projeto.putVoxel(41, 59, 50);
  Projeto.putVoxel(42, 59, 50);
  Projeto.putVoxel(43, 59, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(35, 59, 50);
  Projeto.putVoxel(36, 59, 50);
  Projeto.putVoxel(45, 59, 50);

  //Linha 22
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(34, 60, 50);
  Projeto.putVoxel(43, 60, 50);
  Projeto.putVoxel(46, 60, 50);
  Projeto.setColor(0.603, 0.729, 0.854, 0.89); //Azul Claro
  Projeto.putVoxel(38, 60, 50);
  Projeto.setColor(0.164, 0.105, 0, 1); //Marrom Escuro
  Projeto.putVoxel(39, 60, 50);
  Projeto.putVoxel(40, 60, 50);
  Projeto.putVoxel(41, 60, 50);
  Projeto.putVoxel(42, 60, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(35, 60, 50);
  Projeto.putVoxel(36, 60, 50);
  Projeto.putVoxel(37, 60, 50);
  Projeto.putVoxel(44, 60, 50);
  Projeto.putVoxel(45, 60, 50);

  //Linha 23
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(35, 61, 50);
  Projeto.putVoxel(38, 61, 50);
  Projeto.putVoxel(39, 61, 50);
  Projeto.putVoxel(40, 61, 50);
  Projeto.putVoxel(41, 61, 50);
  Projeto.putVoxel(42, 61, 50);
  Projeto.putVoxel(45, 61, 50);
  Projeto.setColor(1, 1, 1, 1); //Branco
  Projeto.putVoxel(36, 61, 50);
  Projeto.putVoxel(37, 61, 50);
  Projeto.putVoxel(43, 61, 50);
  Projeto.putVoxel(44, 61, 50);

  //Linha 24
  Projeto.setColor(0, 0, 0, 1); //Preto
  Projeto.putVoxel(36, 62, 50);
  Projeto.putVoxel(37, 62, 50);
  Projeto.putVoxel(43, 62, 50);
  Projeto.putVoxel(44, 62, 50);
  

  
  Projeto.writeOFF((char*)"PiaoChunLi.off");
}