#pragma once

#include "TestRegistry.hpp"
#include "TestRunner.hpp"
#include "TestResult.hpp"

#include "DefaultSettings.hpp"
#include "CharPointer.hpp"

namespace pankey{

	namespace Support{

		namespace Data{

			namespace Test{

				void DataStructure_DefaultSettings_Testing_1(pankey::Utility::Test::TestResult& a_result){
					DefaultSettings<pankey::Utility::Test::CharPointer> i_settings;
					i_settings.putInt("test", 15);
					int i_test = i_settings.getInt("test");

					a_result.assertEqual(0, "test value should be 15", i_test, 15);
				}

				void DataStructure_DefaultSettings_Testing(pankey::Utility::Test::TestRunner& a_runner){
						a_runner.test("Int, put, get", DataStructure_DefaultSettings_Testing_1);
				}

				PANKEY_TEST_REGISTER(DataStructure_DefaultSettings_Testing)

			}

		}

	}

}


