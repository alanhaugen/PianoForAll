#include "piano.h"

Piano::Piano()
{
    whiteKeys.Resize(WHITE_KEYS_QUANTITY);
    blackKeys.Resize(BLACK_KEYS_QUANTITY);

    for (int i = 0; i < WHITE_KEYS_QUANTITY; i++)
    {
        whiteKeys[i].key.matrix.Translate(glm::vec3(-20.0f + i, -5.0f, -10.0f));
        whiteKeys[i].key.matrix.Scale(glm::vec3(1, 1, 3));
        //whiteKeys[i].matrix.Rotate(0.4f, glm::vec3(1.0f,0.0f,0.0f));
    }

    for (int i = 0; i < BLACK_KEYS_QUANTITY; i++)
    {
        //blackKeys[i].matrix.Translate(glm::vec3(-10.0f + i, 0.0f, -10.0f));
    }
};

void Piano::Update()
{
    for (int i = 0; i < WHITE_KEYS_QUANTITY; i++)
    {
        whiteKeys[i].key.Update();
        whiteKeys[i].key.Uniform("colour", glm::vec4(0.0f, 0.0f, 1.0f, 1.0f));
    }
};

void Piano::UpdateAfterPhysics()
{
};

