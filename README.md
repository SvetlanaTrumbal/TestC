# TestC
Тестирование По лабораторная

# Задания:
  1. Изучить пример проекта
  2. Реализовать функцию вычисления корней квадратного уравнения.
  3. Написать план тестирования.
  4. Опубликовать код приложения и план на Github.
  5. Реализовать тесты согласно плана.
  6. Выполнить тестирование приложения.
  7. Настроить автоматическое тестирование (Github actions), оценку покрытия кода тестами (coveralls.io), статическое тестирование (sonarcloud.io).

# Пример работы связки Qt + Google Test (gtest) + QtCreator
Загрузка и запуск примера на локальном компьютере
1. Выполнить проверку наличия библиотек Qt и среды разработки Qt Creator. В ОС Ubuntu необходимо установить пакеты qt5-default qt5-qmake qtcreator. В ОС Windows необходимо установить Qt и компилятор, например, mingw с помощью онлайн установщика https://www.qt.io/download-qt-installer
2. Выполнить клонирование репозитория с помощью утилиты git (git clone ....).
3. Для подгрузки gtest необходимо выполнить команды:
git submodule init
git submodule update
4. Запустить создание Make файлов:
qmake
5. выполнить сборку приложения:
make
6. Выполнить запуск тестов
./tests/tests
# Создание проекта на базе примера
1. Удалить каталог .git из директории проекта
2. Выполнить инициализацию нового репозитория
git init
3. Выполнить модификацию приложения в каталоге app/:
		удалить модуль myfunc,
		создать модуль(и) со своими функциями,
		исправить подключение заголовочных файлов и работуглавной функции (файл main.c)
		обновить перечень файлов проекта (файл app.pro, секции SOURCES и HEADERS)
4. Выполнить модификацию тестов в каталоге tests/:
		удалить примеры тестов
		добавить заголовочные файлы со своими тестами
		обновить список подключений заголовочных файлов в main.cpp
		обновить перечень файлов проекта включая файлы приложения (файл tests.pro, секции SOURCES и HEADERS)
5. Подключить внешний репозиторий следуя инструкциям Github
6. Загрузить код на Github
# Запуск тестов на Github actions
1. Сборка и запуск приложения осуществляется с помощью github actions.
2. Конфигурационный скрипт лежит в каталоге .gihub/workflows
3. Необходимо удостовериться что выполняется сборка и запуск тестов до секции с отправкой статистик
4. Обновить бейдж сборки в соответствии с названием профиля и репозитория
# Соединение с coveralls.io
1. Необходимо зайти на сайт coveralls.io и авторизоваться через github
2. Подключить репозиторий с своим проектом
3. В настройках репозитория скопировать токен
4. В настройках гитхаба в разделе secrets - actions создать ключ coveralls_token со значением токена
5. Запустить github actions, проверить успешное выполнение задания gtest-tests
6. Проверить появление статистики на coveralls.io
7. Обновить бейдж покрытия в соответствии с названием профиля и репозитория
# Соединение с sonarcloud
1. Необходимо зайти на сайт https://sonarcloud.io и авторизоваться через github
2. Создать новый проект, выбрать github actions, указать свой репозиторий
3. Скопировать токен проекта, в настройках github в разделе secrets - actions создать ключ sonar_token со значением токена
4. Продолжить настройку проекта на sonarcloud до раздела с конфигурационным файлом
5. Изменить значения названия проекта и организации в файле sonar-project.properties в соответствии с предложенными
6. Запустить github actions, проверить успешное выполнение задания gtest-tests
7. Проверить появление результатов на sonarcloud
8. Обновить бейджи статистик в соответствии с названием профиля и репозитория
