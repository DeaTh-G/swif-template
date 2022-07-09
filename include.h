// Generics
#include "utils/types.h"
#include "utils/StringPtr.h"

// Types
#include "SurfRide/types/Math.h"
#include "SurfRide/types/Color.h"
#include "SurfRide/types/ChunkHeader.h"
#include "SurfRide/types/UserData.h"

// Texture
#include "SurfRide/Texture/Texture.h"
#include "SurfRide/Texture/TextureListChunk.h"

// Camera
#include "SurfRide/Project/Camera.h"

// Font
#include "SurfRide/Project/Font.h"

// Image Cast
#include "SurfRide/Cast/Image/CropRef.h"
#include "SurfRide/Cast/Image/FontInfo.h"
#include "SurfRide/Cast/Image/ImageCast.h"

// Slice Cast
#include "SurfRide/Cast/Slice/Slice.h"
#include "SurfRide/Cast/Slice/SliceInfo.h"
#include "SurfRide/Cast/Slice/SliceCast.h"

// Reference Cast
#include "SurfRide/Cast/Reference/ReferenceCast.h"

// Cast
#include "SurfRide/Cast/TRS2D.h"
#include "SurfRide/Cast/TRS3D.h"
#include "SurfRide/Cast/Node.h"

// Animations
#include "SurfRide/Animation/Key/Constant.h"
#include "SurfRide/Animation/Key/Linear.h"
#include "SurfRide/Animation/Key/Hermite.h"
#include "SurfRide/Animation/Key/Individual.h"
#include "SurfRide/Animation/Track.h"
#include "SurfRide/Animation/Motion.h"
#include "SurfRide/Animation/Animation.h"

// Scene
#include "SurfRide/Project/Layer.h"
#include "SurfRide/Project/Scene.h"

// Project
#include "SurfRide/Project/ProjectChunk.h"

// Info
#include "SurfRide/Chunks/InfoChunk.h"
#include "SurfRide/Chunks/OffsetChunk.h"
#include "SurfRide/Chunks/EndChunk.h"