#pragma once

#include <cstdint>

namespace imgproc
{
    class Pixel
    {
    public:
        // Default Constructor
        Pixel();

        // Parameterized Constructor
        Pixel(uint8_t r, uint8_t g, uint8_t b);

        // Getters
        uint8_t getRed() const;
        uint8_t getGreen() const;
        uint8_t getBlue() const;

        // Setters
        void setRed(uint8_t r);
        void setGreen(uint8_t g);
        void setBlue(uint8_t b);

    private:
        uint8_t red;
        uint8_t green;
        uint8_t blue;
    };
}