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

#define VERSION "v0.0.1"
#define BUILD "2014/04/22"

#include <iostream>
#include <SQM.hpp>

int main ()
{
    std::cout << "openSQM.  " << VERSION << "  Build: " << BUILD << "  (c) PotcFdk, 2014" << std::endl
         << "========" << std::endl << std::endl;

    uint64_t b, e, mod;

    while (true)
    {
        std::cout << "> base = ";
        std::cin >> b;
        std::cout << "> exp = ";
        std::cin >> e;
        std::cout << "> mod = ";
        std::cin >> mod;

        std::cout << std::endl
             << " " << b << " ^ " << e << " = "
                << SQM::pow (b, e, mod) << " mod " << mod << std::endl << std::endl;
    }

    return 0;
}
