#include "tut01.h"
#include <core/application.h>

Tut01::Tut01()
{
}

void Tut01::Init()
{
    description = new Text(
        "\
        GETTING TO KNOW THE KEYBOARD\
        \
        FIND MIDDLE C.\
        \
        THE C NOT NEAREST THE CENTRE IS THE C KEY, NEXT TO TWO BLACK KEYS.\
        \
        IT IS GENERALLY JUST SLIGHTLY LEFT TO THE MIDDLE OF YOUR KEYBOARD.\
        ");

    piano  = new Piano();
    camera = new Camera();

    components.Add(description);
    components.Add(piano);
    components.Add(camera);
}

void Tut01::Update()
{
    if (input.Pressed(input.Key.SPACE))
    {
        Application::NextScene();
    }
}

void Tut01::UpdateAfterPhysics()
{
}

