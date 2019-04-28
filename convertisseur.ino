#include "conversion.h"
#include "convertisseur.h"


#define DATAPIN 8
#define IRQPIN  3

#define BT_RX_Pin 11
#define BT_TX_Pin 12

PS2KeyRaw keyboard;

SoftwareSerial BT = SoftwareSerial(BT_TX_Pin,BT_RX_Pin);

pile p = creer();

void afficher(keycode ps2, unsigned char usb, unsigned char modif)
{
        Serial.print("[");
        Serial.print(modif,HEX);
        Serial.print("]\t");
        
        Serial.print("PS2 : ");
        Serial.print(ps2.key,HEX);
        Serial.print(" \t");

        Serial.print("USB : ");
        Serial.print(usb,HEX);
        Serial.print(" \t");

        if (ps2.special)  Serial.print("SPECIAL \t");
        else Serial.print(" -----  \t");
        
        if (ps2.breaking) Serial.print("BREAKING \t");
        else Serial.print(" -----  \t");

        Serial.println();
}
                
void setup()
{
    keyboard.begin( DATAPIN, IRQPIN );
    Serial.begin( 115200 );
    BT.begin(9600);
    
}
                
void loop()
{
    char modifiers;

    pile p_vide = creer();
    keycode res = recuperer(keyboard);

    if (res.key > 0)
    {
        
        unsigned char usb = traduire(res);

        if (res.breaking)
        {
          p = retirer(p, chercher(p,usb));
          envoyer(BT,p_vide,0);
        }
        
        else p = empiler(p,usb);

        modifiers = getModifiers(p);
        
        afficher(res,usb,modifiers);
        
        envoyer(BT,p,modifiers);
    }
    //else p = creer();
    
        
}
