#ifndef GTEST_GLOBAL_H
#define GTEST_GLOBAL_H

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::_;
using ::testing::ExpectationSet;
using ::testing::TestWithParam;
using ::testing::ByMove;
using testing::MockFunction;
using ::testing::NotNull;
using ::testing::SetArgPointee;
using ::testing::SetArgReferee;
using ::testing::Test;
using ::testing::ValuesIn;
using ::testing::InSequence;
using ::testing::Return;
using ::testing::HasSubstr;
using ::testing::ReturnRef;
using ::testing::Mock;
using ::testing::Invoke;
using ::testing::TypedEq;
using ::testing::SaveArg;
using ::testing::DefaultValue;
using ::testing::ExpectationSet;
using ::testing::Eq;
using ::testing::DoAll;
using ::testing::SetArgReferee;
using ::testing::ReturnPointee;
using ::testing::Property;
using ::testing::internal::BuiltInDefaultValue;
using ::testing::StrictMock;
using ::testing::ElementsAre;
using ::testing::ByRef;
using ::testing::Pointee;
using ::testing::MakeMatcher;
using ::testing::Matcher;
using ::testing::MatcherInterface;
using ::testing::MatchResultListener;
using ::testing::PolymorphicMatcher;
using ::testing::MakePolymorphicMatcher;
using ::testing::Truly;
using ::testing::ExplainMatchResult;
using ::testing::MakePolymorphicMatcher;
using ::testing::MatchResultListener;
using ::testing::PolymorphicMatcher;
using testing::internal::Strings;

#endif // GTEST_GLOBAL_H
