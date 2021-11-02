#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/Course.h"
#include <streambuf>

Course course("code","title",0,1.0);

TEST_CASE( "Overloaded equality operators check the course code", "[Overloaded]" ) {
    Course different_course = course;
    different_course.setGrade(2.0);
    REQUIRE(different_course == course);

    different_course.setCode("something different");
    REQUIRE(different_course != course);
}

TEST_CASE("Course gives the output an expected line using <<","[Overloaded]"){
    std::string expected = "Code: " + course.getCode() + "\nTitle: " + course.getTitle()
                              + "\nGrade: " + to_string(course.getGrade()) + "\nCredit Hour: " + to_string(course.getCredit_hour());

}