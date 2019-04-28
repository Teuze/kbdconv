#include "convertisseur.h"
#include "conversion.h"

keycode recuperer(PS2KeyRaw keyboard)
{

    keycode result;

    int l[3] = {0,0,0};

    int keynum = 0;
    
    result.breaking = false;
    result.special  = false;
    result.key = 0;

    if( keyboard.available() )
    {
        // read the next key
        l[0] = keyboard.read();
        delay(30);
        
        if ( l[0] > 0 ) 
        {
            if (l[0] == 0xE0) 
            {
                result.special = true; keynum++;
                l[keynum] = keyboard.read();
                delay(30);
            }
            if ((l[0] == 0xF0) || (l[1] == 0xF0)) 
            {
                result.breaking = true; keynum++;
                l[keynum] = keyboard.read();
                delay(30);
            }
            
            result.key = l[keynum];
        }
    }
    
    return(result);
}

unsigned char traduire(keycode in)
{
    unsigned char result = 0;
    
    int comp;
    
    comp = in.key;
    
    if (in.special) comp += 0xE000;
    
    while (result < 232)
    {        
        if (comp == board[result]) break;
        
        result++;
    }
    
    return(result);
}

void envoyer(SoftwareSerial BT, pile p, char modifiers)
{
    int i;
    
    BT.write(0xFD);
    BT.write(modifiers);
    BT.write((byte)0x00);
    
    for (i=0; i < p.size; i++) BT.write(p.keys[i]);
    
    for (i = p.size; i < MAX_KEYS; i++) BT.write((byte)0x00);
    
}
