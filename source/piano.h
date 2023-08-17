#ifndef Piano_H
#define Piano_H

#include <core/components/cube.h>
#include <core/containers/array.h>

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
