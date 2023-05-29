#ifndef SCULPTOR_HPP
#define SCULPTOR_HPP
#include "Voxel.h"

class Sculptor{

private:
  Voxel ***v; // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color

public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void setColor(float red, float green, float blue, float alpha);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void putBox(int xi, int xf, int yi, int yf, int zi, int zf);
  void cutBox(int xi, int xf, int yi, int yf, int zi, int zf);
  void putSphere(int xc, int yc, int zc, int raio);
  void cutSphere(int xc, int yc, int zc, int raio);
  void putEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz);
  void cutEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz);
  void writeOFF(const char* filename);
};

#endif