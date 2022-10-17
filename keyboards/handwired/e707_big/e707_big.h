/* Copyright %YEAR% %YOUR_NAME%
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k703, k704, k705, \
    k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k701, k706, k707, k708, k712, k713, k801, k811, \
    k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313, k702, k709, k710, k711, k802, k803, k804, k812, \
    k401, k402, k403, k404, k405, k406, k407, k408, k409, k410, k411, k412, k413, k805, k806, k807, \
    k501, k502, k503, k504, k505, k506, k507, k508, k509, k510, k511, k512, k513, k808, k809, k810, k813, \
    k601, k602, k603, k604, k605, k606, k607, k608, k609, k610, k611, k612, k613 \
) { \
    { k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113 }, \
    { k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213 }, \
    { k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313 }, \
    { k401, k402, k403, k404, k405, k406, k407, k408, k409, k410, k411, k412, k413 }, \
    { k501, k502, k503, k504, k505, k506, k507, k508, k509, k510, k511, k512, k513 }, \
    { k601, k602, k603, k604, k605, k606, k607, k608, k609, k610, k611, k612, k613 }, \
    { k701, k702, k703, k704, k705, k706, k707, k708, k709, k710, k711, k712, k713 }, \
    { k801, k802, k803, k804, k805, k806, k807, k808, k809, k810, k811, k812, k813 } \
}
