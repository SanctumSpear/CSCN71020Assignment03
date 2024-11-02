#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../ProjectsAssingment03/Assignment03.h"
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assingment03Tests
{
	TEST_CLASS(RPSTests)
	{
	public:
		
        TEST_METHOD(RockPaperScissorsResult_RockRock_Draw)
        {
            const char* player1Input = "Rock";
            const char* player2Input = "Rock";
            const char* expected = "Draw";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_PaperPaper_Draw)
        {
            const char* player1Input = "Paper";
            const char* player2Input = "Paper";
            const char* expected = "Draw";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_ScissorsScissors_Draw)
        {
            const char* player1Input = "Scissors";
            const char* player2Input = "Scissors";
            const char* expected = "Draw";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        // Player 1 Win Scenarios
        TEST_METHOD(RockPaperScissorsResult_RockScissors_Player1Wins)
        {
            const char* player1Input = "Rock";
            const char* player2Input = "Scissors";
            const char* expected = "Player1";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_PaperRock_Player1Wins)
        {
            const char* player1Input = "Paper";
            const char* player2Input = "Rock";
            const char* expected = "Player1";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_ScissorsPaper_Player1Wins)
        {
            const char* player1Input = "Scissors";
            const char* player2Input = "Paper";
            const char* expected = "Player1";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        // Player 2 Win Scenarios
        TEST_METHOD(RockPaperScissorsResult_ScissorsRock_Player2Wins)
        {
            const char* player1Input = "Scissors";
            const char* player2Input = "Rock";
            const char* expected = "Player2";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_RockPaper_Player2Wins)
        {
            const char* player1Input = "Rock";
            const char* player2Input = "Paper";
            const char* expected = "Player2";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_PaperScissors_Player2Wins)
        {
            const char* player1Input = "Paper";
            const char* player2Input = "Scissors";
            const char* expected = "Player2";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        // Invalid Input Scenarios
        TEST_METHOD(RockPaperScissorsResult_EmptyStrings_Invalid)
        {
            const char* player1Input = "";
            const char* player2Input = "";
            const char* expected = "Invalid";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_NullInputs_Invalid)
        {
            const char* player1Input = nullptr;
            const char* player2Input = nullptr;
            const char* expected = "Invalid";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_InvalidString_Invalid)
        {
            const char* player1Input = "Rock";
            const char* player2Input = "Cheese";
            const char* expected = "Invalid";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }

        TEST_METHOD(RockPaperScissorsResult_InvalidCase_Invalid)
        {
            const char* player1Input = "rock";
            const char* player2Input = "Paper";
            const char* expected = "Invalid";
            Assert::AreEqual(expected, RPSResult(player1Input, player2Input));
        }
	};
}
