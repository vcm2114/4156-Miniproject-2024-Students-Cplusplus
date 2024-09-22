// Copyright 2024 vcm2114
#ifndef _USERS_VIRGILEMISON_DOCUMENTS_COLUMBIA_FALL24_ADV_SWE_4156_MINIPROJECT_2024_STUDENTS_CPLUSPLUS_INDIVIDUALMINIPROJECTCPP_INCLUDE_ROUTECONTROLLER_H_
#define _USERS_VIRGILEMISON_DOCUMENTS_COLUMBIA_FALL24_ADV_SWE_4156_MINIPROJECT_2024_STUDENTS_CPLUSPLUS_INDIVIDUALMINIPROJECTCPP_INCLUDE_ROUTECONTROLLER_H_

#include "../external_libraries/Crow-1.2.0/include/crow.h"
#include "Globals.h"
#include "MyFileDatabase.h"

class RouteController {
 private:
        MyFileDatabase* myFileDatabase;

 public:
        void initRoutes(crow::App<>& app);  // NOLINT
        void setDatabase(MyFileDatabase* db);

        void index(crow::response& res);  // NOLINT
        void retrieveDepartment(const crow::request& req, crow::response& res);  // NOLINT
        void retrieveCourse(const crow::request& req, crow::response& res);  // NOLINT
        void isCourseFull(const crow::request& req, crow::response& res);  // NOLINT
        void getMajorCountFromDept(const crow::request& req, crow::response& res);  // NOLINT
        void identifyDeptChair(const crow::request& req, crow::response& res);  // NOLINT
        void findCourseLocation(const crow::request& req, crow::response& res);  // NOLINT
        void findCourseInstructor(const crow::request& req, crow::response& res);  // NOLINT
        void findCourseTime(const crow::request& req, crow::response& res);  // NOLINT
        void addMajorToDept(const crow::request& req, crow::response& res);  // NOLINT
        void removeMajorFromDept(const crow::request& req, crow::response& res);  // NOLINT
        void setEnrollmentCount(const crow::request& req, crow::response& res);  // NOLINT
        void setCourseLocation(const crow::request& req, crow::response& res);  // NOLINT
        void setCourseInstructor(const crow::request& req, crow::response& res);  // NOLINT
        void setCourseTime(const crow::request& req, crow::response& res);  // NOLINT
        void dropStudentFromCourse(const crow::request&, crow::response& res);  // NOLINT
};

#endif  // _USERS_VIRGILEMISON_DOCUMENTS_COLUMBIA_FALL24_ADV_SWE_4156_MINIPROJECT_2024_STUDENTS_CPLUSPLUS_INDIVIDUALMINIPROJECTCPP_INCLUDE_ROUTECONTROLLER_H_"
