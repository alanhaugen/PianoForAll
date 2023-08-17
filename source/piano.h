#ifndef Piano_H
#define Piano_H

#include <core/components/cube.h>
#include <core/containers/array.h>

const unsigned int WHITE_KEYS_QUANTITY = 52;
const unsigned int BLACK_KEYS_QUANTITY = 36;

class Piano : public Component
{
public:
    Piano();
    Array<Cube> whiteKeys;
    Array<Cube> blackKeys;

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
