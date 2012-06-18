//random.h

/*     This file is part of RandLib.
 *
 *     RandLib is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     RandLib is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with RandLib.  If not, see <http://www.gnu.org/licenses/>.
 */

 #ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include <inttypes.h>
using namespace std;

void seedRand();
void seedRand(uint64_t seed);
float uniformRand();
float exponentialRand(float lambda);
bool binaryRand(float p);
float normalRand(float mean, float stdDev);
uint32_t poissonRand(float lambda);
//uint32_t rayleighRand(float sigma);

#endif // RANDOM_H_INCLUDED
