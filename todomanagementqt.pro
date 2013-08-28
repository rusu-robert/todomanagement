TEMPLATE = app
TARGET = todomanagementqt
QT += core \
    gui
HEADERS += src/Modules/Todo/Views/MainWindow.h \
    src/Modules/ApplicationTest.h \
    src/Modules/Todo/Controllers/ListController.h \
    src/Modules/Todo/Exceptions/CorruptDataException.h \
    src/Modules/Todo/Exceptions/Exception.h \
    src/Modules/Todo/Exceptions/NotFoundException.h \
    src/Modules/Todo/Exceptions/ValidationException.h \
    src/Modules/Todo/Models/Entities/Item.h \
    src/Modules/Todo/Models/Entities/List.h \
    src/Modules/Todo/Models/Repositories/AbstractListRepository.h \
    src/Modules/Todo/Models/Repositories/InFileListRepository.h \
    src/Modules/Todo/Models/Repositories/ListRepository.h \
    src/Modules/Todo/Models/Validators/ItemValidator.h \
    src/Modules/Todo/Models/Validators/ListValidator.h \
    src/Modules/Todo/Tests/Controllers/ListControllerTest.h \
    src/Modules/Todo/Tests/Exceptions/CorruptDataExceptionTest.h \
    src/Modules/Todo/Tests/Exceptions/ExceptionTest.h \
    src/Modules/Todo/Tests/Exceptions/NotFoundExceptionTest.h \
    src/Modules/Todo/Tests/Exceptions/ValidationExceptionTest.h \
    src/Modules/Todo/Tests/Models/Entities/ItemTest.h \
    src/Modules/Todo/Tests/Models/Entities/ListTest.h \
    src/Modules/Todo/Tests/Models/Repositories/InFileListRepositoryTest.h \
    src/Modules/Todo/Tests/Models/Repositories/ListRepositoryTest.h \
    src/Modules/Todo/Tests/Models/Validators/ItemValidatorTest.h \
    src/Modules/Todo/Tests/Models/Validators/ListValidatorTest.h \
    src/Modules/Todo/TodoModuleTest.h \
    src/Modules/Util/Models/StringHelper.h \
    src/Modules/Util/Models/TypeConvertor.h \
    src/Modules/Util/Tests/Models/StringHelperTest.h \
    src/Modules/Util/Tests/Models/TypeConvertorTest.h \
    src/Modules/Util/UtilModuleTest.h
SOURCES += src/Modules/Todo/Views/MainWindow.cpp \
    app/app.cpp \
    src/Modules/ApplicationTest.cpp \
    src/Modules/Todo/Controllers/ListController.cpp \
    src/Modules/Todo/Exceptions/CorruptDataException.cpp \
    src/Modules/Todo/Exceptions/Exception.cpp \
    src/Modules/Todo/Exceptions/NotFoundException.cpp \
    src/Modules/Todo/Exceptions/ValidationException.cpp \
    src/Modules/Todo/Models/Entities/Item.cpp \
    src/Modules/Todo/Models/Entities/List.cpp \
    src/Modules/Todo/Models/Repositories/InFileListRepository.cpp \
    src/Modules/Todo/Models/Repositories/ListRepository.cpp \
    src/Modules/Todo/Models/Validators/ItemValidator.cpp \
    src/Modules/Todo/Models/Validators/ListValidator.cpp \
    src/Modules/Todo/Tests/Controllers/ListControllerTest.cpp \
    src/Modules/Todo/Tests/Exceptions/CorruptDataExceptionTest.cpp \
    src/Modules/Todo/Tests/Exceptions/ExceptionTest.cpp \
    src/Modules/Todo/Tests/Exceptions/NotFoundExceptionTest.cpp \
    src/Modules/Todo/Tests/Exceptions/ValidationExceptionTest.cpp \
    src/Modules/Todo/Tests/Models/Entities/ItemTest.cpp \
    src/Modules/Todo/Tests/Models/Entities/ListTest.cpp \
    src/Modules/Todo/Tests/Models/Repositories/InFileListRepositoryTest.cpp \
    src/Modules/Todo/Tests/Models/Repositories/ListRepositoryTest.cpp \
    src/Modules/Todo/Tests/Models/Validators/ItemValidatorTest.cpp \
    src/Modules/Todo/Tests/Models/Validators/ListValidatorTest.cpp \
    src/Modules/Todo/TodoModuleTest.cpp \
    src/Modules/Util/Models/StringHelper.cpp \
    src/Modules/Util/Models/TypeConvertor.cpp \
    src/Modules/Util/Tests/Models/StringHelperTest.cpp \
    src/Modules/Util/Tests/Models/TypeConvertorTest.cpp \
    src/Modules/Util/UtilModuleTest.cpp
FORMS += src/Modules/Todo/Views/MainWindow.ui
RESOURCES += 
