#include "Sculptor.hpp"

int main()
{
    Sculptor model(100,100,100); // Tamanho do modelo
    
    // Colocando Voxels em espaços estratégicos para medir as distâncias dos eixos com mais clareza
    model.setColor(0,255,0,1);
    model.putVoxel(50,50,0);
    model.setColor(153,102,204,1); 
    model.putVoxel(50,50,99);
    model.setColor(255,255,0,1);
    model.putVoxel(50, 99, 50);
    model.setColor(220,20,60,1);
    model.putVoxel(99, 50, 50);
    model.setColor(255,255,0,1);

    // Criando o PacMan
    model.putSphere(50,50,50,25);

    // Retirando esferas para fazer os olhos
    model.cutSphere(69,52,64,2); 
    model.cutSphere(69,52,36,2); 
    model.setColor(0,0,0,1);

    // Colocando os olhos
    model.putSphere(69,52,64,2);
    model.putSphere(69,52,36,2);

    // Boca do PacMan
    model.cutBox(50,60,20,65,20,99);

    // Implementando pequenos alimentos para o PacMan
    model.setColor(255,117,24,1);
    model.putBox(52,54,14,18,48,54);
    model.setColor(255,0,255,1);
    model.putEllipsoid(52,8,51,2,2,2);
    model.setColor(255,36,0,1);
    model.putSphere(52,1,51,2);
    
    model.cutVoxel(28,51,58); // Removendo um voxel aleatório

    // Criando o arquivo
    model.writeOFF("model.off");
    return 0;
}