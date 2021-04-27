#include "raylib.h"

#define MAX_LIGHTS 4 // Max dynamic lights supported by shader

// Light data
typedef struct {
    int type;
    Vector3 position;
    Vector3 target;
    Color color;
    bool enabled;

    // Shader locations
    int enabledLoc;
    int typeLoc;
    int posLoc;
    int targetLoc;
    int colorLoc;
} Light;

// Light type
typedef enum {
    LIGHT_DIRECTIONAL,
    LIGHT_POINT
} LightType;

static int lightsCount = 0;    // Current amount of created lights

Light CreateLight(int type, Vector3 position, Vector3 target, Color color, Shader shader);
void UpdateLightValues(Shader shader, Light light);
