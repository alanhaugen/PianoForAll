#include "Piano.h"

Piano::Piano()
{
    whiteKeys.Resize(WHITE_KEYS_QUANTITY);
    blackKeys.Resize(BLACK_KEYS_QUANTITY);

    for (int i = 0; i < WHITE_KEYS_QUANTITY; i++)
    {
        whiteKeys[i].matrix.Translate(glm::vec3(-10.0f + i, 0.0f, -10.0f));
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
        whiteKeys[i].Update();
    }
};

void Piano::UpdateAfterPhysics()
{
};

