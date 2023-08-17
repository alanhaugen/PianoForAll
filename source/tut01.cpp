#include "tut01.h"
#include <core/application.h>

Tut01::Tut01()
{
}

void Tut01::Init()
{
    triangle = renderer->CreateDrawable(vertices, indices, shaders, NULL);
    description = new Text("PIANO GAME");

    camera = new Camera();

    components.Add(description);
    components.Add(camera);
}

void Tut01::Update()
{
    renderer->Draw(triangle);

    if (input.Pressed(input.Key.SPACE))
    {
        Application::NextScene();
    }
}

void Tut01::UpdateAfterPhysics()
{
}

