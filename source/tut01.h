#ifndef TUT01_H
#define TUT01_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class Tut01 : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    Tut01();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

