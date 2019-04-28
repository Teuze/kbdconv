#include <PS2KeyRaw.h>
#include <SoftwareSerial.h>

#define MAX_KEYS 6

// Bits du modifier

    #define LCTRL_PIN   (1 << 0)
    #define LSHIFT_PIN  (1 << 1)
    #define LALT_PIN    (1 << 2)
    #define LGUI_PIN    (1 << 3)
    #define RCTRL_PIN   (1 << 4)
    #define RSHIFT_PIN  (1 << 5)
    #define RALT_PIN    (1 << 6)
    #define RGUI_PIN    (1 << 7)


// Macros de test des touches spé. (code USB !)

    #define IS_LSHIFT(X)  (X == 0xE1)
    #define IS_RSHIFT(X)  (X == 0xE5)

    #define IS_LALT(X)  (X == 0xE2)
    #define IS_RALT(X)  (X == 0xE6)

    #define IS_LCTRL(X) (X == 0xE0)
    #define IS_RCTRL(X) (X == 0xE4)

    #define IS_LGUI(X)  (X == 0xE3)
    #define IS_RGUI(X)  (X == 0xE7)

// Définition des structures de données utilisées

typedef struct pile
{
    char keys[MAX_KEYS];
    int size;
} pile;

typedef struct keycode
{
    bool breaking;
    bool special;
    unsigned char key;
} keycode;

// Prototype des fonctions utilitaires (récupération des codes de clé, traduction, envoi)

unsigned char    traduire(keycode in);
keycode recuperer(PS2KeyRaw keyboard);
void    envoyer(SoftwareSerial BT, pile p, char modifiers);

// Prototype des fonctions exploitant la structure "pile" (pour la gestion des touches multiples)

pile creer();

bool plein(pile p);
bool  vide(pile p);

char depiler(pile p);

pile empiler(pile p, char element);

int chercher(pile p, char elt);
pile retirer(pile p, int indice);

char getModifiers(pile p);
