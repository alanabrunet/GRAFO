#include "estruturas.cpp"

int main(){
    
    dataItem *G = Grafo((char*) "cidades.csv",(char*) "coordenada.csv");
    float D[] = {0.05,0.1,0.15,0.20,0.25};
 
   vizinhanca S;
    for(int i = 0; i < 5; i++){
    
    
    S = matriz_adj(G,D[i]);
    printf("\n a distancia minima D = %.3f, da cidade com mais vizinhos esta"
    "\nna posicao [%i] %s com %i vizinhos\n",D[i], S.pos,G[S.pos].city.cidade, S.Qnbr);

    if(S.posvoid == -1){
        printf("\nNao tem cidade sem vizinhos com distancia minima %.3f\n", D[i]);
    }
    
    else if(S.posvoid != -1){
        printf("\nA cidade nao possui vizinhos com a distancia minima %.3f esta"
    "\nna posicao [%i] %s", D[i], S.posvoid, G[S.posvoid].city.cidade);
        }
    
    }

    return 0;
}