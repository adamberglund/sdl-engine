// Warrior.h

#ifndef WARRIOR_H
#define WARRIOR_H

#include "Character.h"

class Warrior: public Character{
    int m_Row, m_Frame, m_FrameCount;
    int m_AnimSpeed;
    
    public:
        Warrior(Properties* props);
        
        virtual void Draw();
        virtual void Clean();
        virtual void Update(float dt);
        
};

#endif // WARRIOR_H