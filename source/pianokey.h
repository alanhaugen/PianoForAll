#ifndef PIANOKEY_H
#define PIANOKEY_H

#include <core/components/component.h>

class PianoKey : public Component
{
public:
    PianoKey();

    void Update();
    void UpdateAfterPhysics();
};

#endif
