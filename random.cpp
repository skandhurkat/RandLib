//random.cpp

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

#include "random.h"
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "constants.h"
using namespace std;

void seedRand()
{
    srand(time(NULL));
}

void seedRand(uint64_t seed)
{
    srand(seed);
}

float uniformRand()
{
    return static_cast<float>(rand()) / RAND_MAX;
}

float exponentialRand(float lambda)
{
    return -1.0/lambda * log(uniformRand());
}


bool binaryRand(float p)
{
    return (uniformRand() < p)  ;
}

float normalRand(float mean, float stdDev)
{
	return sqrt(-2*log(uniformRand())) * cos(2*PI*uniformRand())*stdDev + mean;
}

uint32_t poissonRand(float lambda)  //algorithm poisson random number (Knuth):
{
    float L = exp(-lambda), k = 0 , p = 1;
    while (p > L)
	{
         k = k+1;
         p = p * uniformRand();
    }
    return k-1;
}
