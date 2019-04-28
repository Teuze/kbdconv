// Code des clés en PS/2
 
    #define PS2_A   0x1C
    #define PS2_B   0x32
    #define PS2_C   0x21
    #define PS2_D   0x23
    #define PS2_E   0x24
    #define PS2_F   0x2B
    #define PS2_G   0x34
    #define PS2_H   0x33
    #define PS2_I   0x43
    #define PS2_J   0x3B
    #define PS2_K   0x42
    #define PS2_L   0x4B
    #define PS2_M   0x3A
    #define PS2_N   0x31
    #define PS2_O   0x44
    #define PS2_P   0x4D
    #define PS2_Q   0x15
    #define PS2_R   0x2D
    #define PS2_S   0x1B
    #define PS2_T   0x2C
    #define PS2_U   0x3C
    #define PS2_V   0x2A
    #define PS2_W   0x1D
    #define PS2_X   0x22
    #define PS2_Y   0x35
    #define PS2_Z   0x1A
    
    #define PS2_0   0x45
    #define PS2_1   0x16
    #define PS2_2   0x1E
    #define PS2_3   0x26
    #define PS2_4   0x25
    #define PS2_5   0x2E
    #define PS2_6   0x36
    #define PS2_7   0x3D
    #define PS2_8   0x3E
    #define PS2_9   0x46
    
    #define PS2_ENTER       0x5A
    #define PS2_ESCAPE      0x76
    #define PS2_BACKSPACE   0x66
    #define PS2_TAB         0x0D
    #define PS2_SPACE       0x29
    #define PS2_MINUS       0x4E
    #define PS2_EQUAL       0x55
    
    #define PS2_BLEFT   0x54
    #define PS2_BRIGHT  0x5B
    #define PS2_DIV     0x5D
    
    #define PS2_SEMICOLON   0x4C
    #define PS2_APOSTROPHE  0x52
    #define PS2_GRAVE       0x0E
    
    #define PS2_COMMA   0x41
    #define PS2_POINT   0x49
    #define PS2_SLASH   0x4A
    #define PS2_CAPSL   0x58
    
    #define PS2_F1     0x05
    #define PS2_F2     0x06
    #define PS2_F3     0x04
    #define PS2_F4     0x0C
    #define PS2_F5     0x03
    #define PS2_F6     0x0B
    #define PS2_F7     0x83
    #define PS2_F8     0x0A
    #define PS2_F9     0x01
    #define PS2_F10    0x09
    #define PS2_F11    0x78
    #define PS2_F12    0x07
    
    #define PS2_PRNTSCRN    0xE012
    #define PS2_SCROLL    0x7E
    #define PS2_INSERT    0xE070
    #define PS2_HOME    0xE06C
    #define PS2_PGUP    0xE07D
    #define PS2_DEL    0xE071
    #define PS2_END    0xE069
    #define PS2_PGDN    0xE07A
    #define PS2_RIGHT    0xE074
    #define PS2_LEFT    0xE06B
    #define PS2_DOWN    0xE072
    #define PS2_UP    0xE075
    
    #define PS2_NUMKEY     0x77
    #define PS2_NUMSLASH   0xE04A
    #define PS2_NUMSTAR    0x7C
    #define PS2_NUMINUS    0x7B
    #define PS2_NUMPLUS    0x79
    #define PS2_NUMENTER   0xE05A
    
    #define PS2_NUM1    0x69
    #define PS2_NUM2    0x72
    #define PS2_NUM3    0x7A
    #define PS2_NUM4    0x6B
    #define PS2_NUM5    0x73
    #define PS2_NUM6    0x74
    #define PS2_NUM7    0x6C
    #define PS2_NUM8    0x75
    #define PS2_NUM9    0x7D
    #define PS2_NUM0    0x70
    #define PS2_NUMP    0x71
    
    #define PS2_APPS    0xE02F
    #define PS2_POWER   0xE037
    
    #define PS2_LCTRL   0x14
    #define PS2_LSHIFT  0x12
    #define PS2_LALT    0x11
    #define PS2_LGUI    0xE01F
    
    #define PS2_RCTRL   0xE014
    #define PS2_RSHIFT  0x59
    #define PS2_RALT    0xE011
    #define PS2_RGUI    0xE027


// Tableau de conversion USB HID <--> PS/2

const unsigned int board[232]

=   {
          0   ,   0   ,   0   ,   0   , PS2_A , PS2_B , PS2_C , PS2_D , PS2_E , PS2_F , 
        PS2_G , PS2_H , PS2_I , PS2_J , PS2_K , PS2_L , PS2_M , PS2_N , PS2_O , PS2_P , 
        PS2_Q , PS2_R , PS2_S , PS2_T , PS2_U , PS2_V , PS2_W , PS2_X , PS2_Y , PS2_Z , 
        PS2_1 , PS2_2 , PS2_3 , PS2_4 , PS2_5 , PS2_6 , PS2_7 , PS2_8 , PS2_9 , PS2_0 , 
     
        PS2_ENTER, PS2_ESCAPE, PS2_BACKSPACE, PS2_TAB, PS2_SPACE, PS2_MINUS, PS2_EQUAL,
        
        PS2_BLEFT, PS2_BRIGHT, PS2_DIV, 0, PS2_SEMICOLON, PS2_APOSTROPHE, PS2_GRAVE,
        
        PS2_COMMA, PS2_POINT, PS2_SLASH, PS2_CAPSL,
        
        PS2_F1 , PS2_F2 , PS2_F3 , PS2_F4, PS2_F5, PS2_F6, PS2_F7, PS2_F8, PS2_F9, 
        PS2_F10, PS2_F11, PS2_F12,
        
        PS2_PRNTSCRN, PS2_SCROLL, 0, PS2_INSERT, PS2_HOME, PS2_PGUP, PS2_DEL, PS2_END,
        PS2_PGDN, PS2_RIGHT, PS2_LEFT, PS2_DOWN, PS2_UP,
        
        PS2_NUMKEY, PS2_NUMSLASH, PS2_NUMSTAR, PS2_NUMINUS, PS2_NUMPLUS, PS2_NUMENTER,
        
        PS2_NUM1, PS2_NUM2, PS2_NUM3, PS2_NUM4, PS2_NUM5, PS2_NUM6, PS2_NUM7, PS2_NUM8,
        PS2_NUM9, PS2_NUM0, PS2_NUMP,
        
        PS2_APPS, PS2_POWER, 0, 0,

        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    
        PS2_LCTRL, PS2_LSHIFT, PS2_LALT, PS2_LGUI,
        PS2_RCTRL, PS2_RSHIFT, PS2_RALT, PS2_RGUI        
        
    };
