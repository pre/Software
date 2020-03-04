#pragma once

#include "software/new_geom/circle.h"
#include "software/world/world.h"

// TODO: doc comment here

namespace Evaluation
{
    /**
     * Finds good points to chip the ball to
     *
     * @param world The world. We assume the ball is being chipped from its current
     * position
     *
     * @return a vector of circles where the center is a good point to chip to, and the
     *         radius is the distance to the nearest enemy
     */
    std::vector<Circle> findGoodChipTargets(const World& world);
}  // namespace Evaluation
