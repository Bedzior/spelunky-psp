#pragma once

#include <cstdint>

// Symbols are in the same order as in the ASCII table, with an offset of -32.
// Only UPPER case letters are included.

const std::int8_t FONT_ASCII_OFFSET = -32;

enum class FontSpritesheetFrames : int16_t
{
    SPACE = 0,
    EXCLAMATION_MARK,
    QUOTE,
    NUMBER_SIGN,
    DOLLAR_SIGN,
    PERCENT_SIGN,
    AMPERSAND,
    APOSTROPHE,
    ROUND_BRACKET_LEFT,
    ROUND_BRACKET_RIGHT,
    STAR,
    PLUS,
    COMMA,
    MINUS,
    DOT,
    STROKE,
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    COLON,
    SEMICOLON,
    DIAMOND_BRACKET_LEFT,
    EQUAL_SIGN,
    DIAMOND_BRACKET_RIGHT,
    QUESTION_MARK,
    WEB_AT_SIGN,
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z,
    _SIZE
};
