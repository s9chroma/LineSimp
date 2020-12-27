#ifndef LINESIMP_H
#define LINESIMP_H
#pragma once

template <class PointIterator, class PointOutputIterator, class Traits>
PointOutputIterator
compute_allowed_shortcuts(PointIterator polygonal_chain_start,
                          PointIterator polygonal_chain_end,
                          double tolerance,
                          PointOutputIterator allowed_shortcuts,
                          const Traits& traits);

template <class PointIterator, class PointOutputIterator, class Traits>
PointOutputIterator
compute_tangent_splitters(PointIterator polygonal_chain_start,
                          PointIterator polygonal_chain_end,
                          int point_index,
                          PointOutputIterator tangent_splitters,
                          const Traits& traits);

template <class PointIterator, class PointOutputIterator, class Traits>
PointOutputIterator
distribute_points(PointIterator subdivision_start,
                  PointIterator subdivision_end,
                  int i,
                  PointIterator points_to_distribute_start,
                  PointIterator points_to_distribute_end,
                  PointOutputIterator distributed_points,
                  const Traits& traits);

template <class PointIterator, class PointOutputIterator, class Traits>
PointOutputIterator
subdivision_simplification(PointIterator polygonal_chain_start,
                           PointIterator polygonal_chain_end,
                           PointIterator reference_points_start,
                           PointIterator reference_points_end,
                           PointOutputIterator simplified_chain,
                           double tolerance,
                           const Traits& traits);

#endif