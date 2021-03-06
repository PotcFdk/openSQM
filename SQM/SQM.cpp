/**
Copyright 2014 PotcFdk

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
**/

#include <SQM.hpp>

uint64_t SQM::pow (uint64_t b, uint64_t e, uint64_t mod)
{
    uint64_t result = 1;
    unsigned significant = 1;
    {
        uint64_t e_t = e;

        while (e_t >>= 1)
        {
            ++significant;
        }
    }

    for (int pos = significant-1; pos >= 0; --pos)
    {
        bool bit = e & (1 << pos);
        result = (result * result) % mod;

        if (bit)
            result = (result * b) % mod;
    }

    return result;
}
