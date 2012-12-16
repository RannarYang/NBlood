#ifndef __dxdidf_h__
#define __dxdidf_h__

// Joystick

static DIOBJECTDATAFORMAT c_dfDIJoystick_odf[] = {
    { &GUID_XAxis, 0, 0x80FFFF03, 0x00000100 },
    { &GUID_YAxis, 4, 0x80FFFF03, 0x00000100 },
    { &GUID_ZAxis, 8, 0x80FFFF03, 0x00000100 },
    { &GUID_RxAxis, 12, 0x80FFFF03, 0x00000100 },
    { &GUID_RyAxis, 16, 0x80FFFF03, 0x00000100 },
    { &GUID_RzAxis, 20, 0x80FFFF03, 0x00000100 },
    { &GUID_Slider, 24, 0x80FFFF03, 0x00000100 },
    { &GUID_Slider, 28, 0x80FFFF03, 0x00000100 },
    { &GUID_POV, 32, 0x80FFFF10, 0x00000000 },
    { &GUID_POV, 36, 0x80FFFF10, 0x00000000 },
    { &GUID_POV, 40, 0x80FFFF10, 0x00000000 },
    { &GUID_POV, 44, 0x80FFFF10, 0x00000000 },
    { NULL, 48, 0x80FFFF0C, 0x00000000 },
    { NULL, 49, 0x80FFFF0C, 0x00000000 },
    { NULL, 50, 0x80FFFF0C, 0x00000000 },
    { NULL, 51, 0x80FFFF0C, 0x00000000 },
    { NULL, 52, 0x80FFFF0C, 0x00000000 },
    { NULL, 53, 0x80FFFF0C, 0x00000000 },
    { NULL, 54, 0x80FFFF0C, 0x00000000 },
    { NULL, 55, 0x80FFFF0C, 0x00000000 },
    { NULL, 56, 0x80FFFF0C, 0x00000000 },
    { NULL, 57, 0x80FFFF0C, 0x00000000 },
    { NULL, 58, 0x80FFFF0C, 0x00000000 },
    { NULL, 59, 0x80FFFF0C, 0x00000000 },
    { NULL, 60, 0x80FFFF0C, 0x00000000 },
    { NULL, 61, 0x80FFFF0C, 0x00000000 },
    { NULL, 62, 0x80FFFF0C, 0x00000000 },
    { NULL, 63, 0x80FFFF0C, 0x00000000 },
    { NULL, 64, 0x80FFFF0C, 0x00000000 },
    { NULL, 65, 0x80FFFF0C, 0x00000000 },
    { NULL, 66, 0x80FFFF0C, 0x00000000 },
    { NULL, 67, 0x80FFFF0C, 0x00000000 },
    { NULL, 68, 0x80FFFF0C, 0x00000000 },
    { NULL, 69, 0x80FFFF0C, 0x00000000 },
    { NULL, 70, 0x80FFFF0C, 0x00000000 },
    { NULL, 71, 0x80FFFF0C, 0x00000000 },
    { NULL, 72, 0x80FFFF0C, 0x00000000 },
    { NULL, 73, 0x80FFFF0C, 0x00000000 },
    { NULL, 74, 0x80FFFF0C, 0x00000000 },
    { NULL, 75, 0x80FFFF0C, 0x00000000 },
    { NULL, 76, 0x80FFFF0C, 0x00000000 },
    { NULL, 77, 0x80FFFF0C, 0x00000000 },
    { NULL, 78, 0x80FFFF0C, 0x00000000 },
    { NULL, 79, 0x80FFFF0C, 0x00000000 }
};

const DIDATAFORMAT c_dfDIJoystick = { sizeof(DIDATAFORMAT), sizeof(DIOBJECTDATAFORMAT), 0x00000001, 80, 44, c_dfDIJoystick_odf };

#endif // __dxdidf_h__
