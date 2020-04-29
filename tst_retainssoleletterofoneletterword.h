

#ifndef TST_RETAINSSOLELETTEROFONELETTERWORD_H
#define TST_RETAINSSOLELETTEROFONELETTERWORD_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;


// Behalte den einzigen Buchstaben eine Ein-Buchstabenwortes
// Testwörter wie
//   A, N, Z,
// werden durch den Soundex Algorithmus umgewandelt in
//   A   ->  A     Regel 1a
//   A   ->  A000  Regel 4b
//
// Der Algorithmus soll über eine Klasse Soundex implementiert
// werden.
//
// TDD: Fehlschlagende Test leiten die Verbesserung des
//      Code an.
// TestRun 01
TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
    Soundex soundex;
}

#endif // TST_RETAINSSOLELETTEROFONELETTERWORD_H
