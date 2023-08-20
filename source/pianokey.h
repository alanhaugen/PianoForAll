#ifndef PIANOKEY_H
#define PIANOKEY_H

#include <core/components/component.h>
#include <core/components/cube.h>

class PianoKey : public Component
{
public:
    PianoKey();
    Cube key;

    void Update();
    void UpdateAfterPhysics();
};

#endif
