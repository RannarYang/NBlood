#pragma once


enum CALLBACK_ID {
    CALLBACK_ID_NONE = -1,
    CALLBACK_ID_0 = 0,
    CALLBACK_ID_1,
    CALLBACK_ID_2,
    CALLBACK_ID_3,
    CALLBACK_ID_4,
    CALLBACK_ID_5,
    CALLBACK_ID_6,
    CALLBACK_ID_7,
    CALLBACK_ID_8,
    CALLBACK_ID_9,
    CALLBACK_ID_10,
    CALLBACK_ID_11,
    CALLBACK_ID_12,
    CALLBACK_ID_13,
    CALLBACK_ID_14,
    CALLBACK_ID_15,
    CALLBACK_ID_16,
    CALLBACK_ID_17,
    CALLBACK_ID_18,
    CALLBACK_ID_19,
    CALLBACK_ID_20,
    CALLBACK_ID_21,
    kCallbackMax
};

extern void (*gCallback[kCallbackMax])(int);