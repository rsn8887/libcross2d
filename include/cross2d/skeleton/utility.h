//
// Created by cpasjuste on 22/06/18.
//

#ifndef C2D_UTILITY_H
#define C2D_UTILITY_H

namespace c2d {

    class Utility {

    public:

        static bool startWith(const std::string &str, const std::string &value);

        static bool endsWith(const std::string &value, const std::string &ending);

        static std::string removeLastSlash(const std::string &string);

        static std::string removeExt(const std::string &str);
    };

}

#endif //C2D_UTILITY_H
