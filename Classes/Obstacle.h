#ifndef __OBSTACLE_H__
#define __OBSTACLE_H__

#include "cocos2d.h"
#include "Paddle.h"

class Obstacle
{
private:
    std::vector<Paddle*> paddles;

    float y, height, halvedHeight;

public:
    static const int NONE = 0, LEFT = 1, MIDDLE = 2, RIGHT = 3, \
                     NO_LEFT = 4, NO_MIDDLE = 5, NO_RIGHT = 6;

    Obstacle(cocos2d::Size windowSize, int type);

    virtual ~Obstacle();

    std::vector<Paddle*> getPaddles() const;

    virtual void update();

    float getY() const;

    float getHeight() const;

    float getHalvedHeight() const;
};

#endif // __OBSTACLE_H__
