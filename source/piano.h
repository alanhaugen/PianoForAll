#ifndef Piano_H
#define Piano_H

#include <core/x-platform/component.h>

class Piano : public Component
{
public:
    Piano();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
