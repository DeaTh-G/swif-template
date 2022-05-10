typedef struct {
    float Left;
    float Top;
    float Right;
    float Bottom;
} SRS_IMAGE<optimize=false, bgcolor=0xFFFF00,
    read=Str("[%f, %f, %f, %f]", Left, Top, Right, Bottom)>;

typedef struct {
    local uint64 p<hidden=true>;

    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
    ushort Width;
    ushort Height;
    uint Flags;
    uint ImageCount;
    size_t ImageOffset;
    size_t UserDataOffset; p = FTell();
    if (ImageOffset.offset && ImageCount)
    {
        FSeek(ImageOffset.offset); SRS_IMAGE Images[ImageCount];
    } FSeek(p);
} SRS_TEXTURE<optimize=false, bgcolor=0x002D72, read=Name.Name>;