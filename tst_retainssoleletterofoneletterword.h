#include <string>

class Soundex {
    // Die Verschlüsselungsmethode 'encode
public:

    std::string encode(const std::string& word){
       std::string result = word;
       return result;
    }
};


#ifndef TST_RETAINSSOLELETTEROFONELETTERWORD_H
#define TST_RETAINSSOLELETTEROFONELETTERWORD_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

// Unser Testwörter sind Wörter aus einem Buchstaben wie
//   A,  N, Z
// TestRun 01:   Prüfe Methodensignatur
TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
Soundex soundex;

EXPECT_EQ(soundex.encode("A"), "A");
}

#endif // TST_RETAINSSOLELETTEROFONELETTERWORD_H
