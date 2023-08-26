#ifndef Piano_H
#define Piano_H

#include <core/components/cube.h>
#include <core/containers/array.h>
#include "pianokey.h"

const unsigned int WHITE_KEYS_QUANTITY = 52;
const unsigned int BLACK_KEYS_QUANTITY = 36;

class Piano : public Component
{
public:
    Piano();
    Array<PianoKey> whiteKeys;
    Array<PianoKey> blackKeys;

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
