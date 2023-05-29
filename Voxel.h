//Arquivo pra implementação do struct voxel
#ifndef VOXEL_HPP
#define VOXEL_HPP

struct Voxel {

    float r, g , b; //Cores Red(Vermelho), Green(Verde) e Blue(Azul), respectivamente
    float a; //Alpha, vai definir a tranparência do voxel
    bool isOn; //Indica a ativação do voxel
};
#endif