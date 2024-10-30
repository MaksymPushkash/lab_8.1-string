#include "pch.h"
#include "CppUnitTest.h"
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

// Оголошуємо функції для тестування
int CountTriple(const string& s);
string ReplaceTriple(string& s);

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        // Тест для функції CountTriple
        TEST_METHOD(TestCountTriple)
        {
            Assert::AreEqual(2, CountTriple("ABCOGOAGADEF"));
            Assert::AreEqual(1, CountTriple("XXXOGOYYY"));
            Assert::AreEqual(0, CountTriple("ABCDEFG"));
            Assert::AreEqual(3, CountTriple("OGOAGAOGO"));
        }

        // Тест для функції ReplaceTriple
        TEST_METHOD(TestReplaceTriple)
        {
            string testStr1 = "ABCOGOAGADEF";
            Assert::AreEqual(string("ABC**DEF"), ReplaceTriple(testStr1));

            string testStr2 = "XXXOGOYYY";
            Assert::AreEqual(string("XXX**YYY"), ReplaceTriple(testStr2));

            string testStr3 = "OGOAGAOGO";
            Assert::AreEqual(string("****"), ReplaceTriple(testStr3));

            string testStr4 = "ABCDEFG";
            Assert::AreEqual(string("ABCDEFG"), ReplaceTriple(testStr4));
        }
    };
}
