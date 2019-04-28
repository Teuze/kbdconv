#include "convertisseur.h"

struct pile creer(void)
{
    int i;
    pile p;
    
    p.size = 0;
    for (i=0; i < MAX_KEYS; i++) p.keys[i] = 0;
    
    return(p);
}

bool vide(pile p)
{
    if (p.size == 0) return(true);
    else return(false);
}

bool plein(pile p)
{
    if (p.size == MAX_KEYS) return(true);
    else return(false);
}

pile empiler(pile p, char element)
{
    if (!(plein(p)) && (chercher(p, element) == -1))
    {
        p.keys[p.size] = element;
        p.size++;
    }
    
    return(p);
}

char depiler(pile p)
{
    char result = 0;
    
    if (!(vide(p)))
    {
        result = p.keys[p.size-1];
        p.size--;
    }
    
    return(result);
}

int chercher(pile p, char elt)
{
    int indice = -1;
    
    int i;
    
    for (i=0; i < p.size; i++)
    {
        if (p.keys[i] == elt) {indice = i; break;}
    }
    
    return(indice);
}

pile retirer(pile p1, int indice)
{
    int i;
    pile p2 = creer();
    
    if (indice >= 0)
    {
       for (i=0; i < p1.size; i++)
        {
          if (i == indice) continue;
          else p2 = empiler(p2, p1.keys[i]);
        }
    }
        
    return(p2);
}

char getModifiers(pile p)
{
    unsigned char modifiers = 0;

    int comp = 0;
    int i;
    
    for (i=0; i < p.size; i++)
    {
        comp = p.keys[i] - 0xFFFFFF00;
        
        if IS_LSHIFT(comp)  modifiers |= LSHIFT_PIN;
        if IS_RSHIFT(comp)  modifiers |= RSHIFT_PIN;
        
        if IS_LCTRL(comp)   modifiers |= LCTRL_PIN;
        if IS_RCTRL(comp)   modifiers |= RCTRL_PIN;
        
        if IS_LALT(comp)    modifiers |= LALT_PIN;
        if IS_RALT(comp)    modifiers |= RALT_PIN;
        
        if IS_LGUI(comp)    modifiers |= LGUI_PIN;
        if IS_RGUI(comp)    modifiers |= RGUI_PIN;        
    }
    
    return (modifiers);    
}
