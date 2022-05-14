#include "raylib.h"


typedef struct{
    Vector2 posicao;
    Rectangle colisao;
    float velocidade;
} jogador;


typedef struct {
    Rectangle projet;
    Vector2 vel;
    bool active;
    Color color;
} shoot;

typedef struct {
    Rectangle projet;
    Vector2 vel;
    bool active;
    Color color;
} shootInimigo;

typedef struct EnvItem {
    Rectangle rect;
    int blocking;
    Color color;
} EnvItem;



void movPlayer (int *direcao, int *totalFrame, jogador *player, int *pulo);

void carregaPlayer();

void atirar(int *shootRate, shoot **disparo, jogador *player);
Texture2D loadMap();

void colisionMap(Rectangle grid[], jogador *player);
