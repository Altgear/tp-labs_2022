## Laboratory work I

Данная лабораторная работа посвещена изучению утилит для разработки проектов

## Tasks

- [x] 1. Ознакомиться со ссылками учебного материала
- [x] 2. Выполнить инструкцию учебного материала
- [x] 3. Составить отчет и отправить ссылку личным сообщением в **Slack**

## Tutorial

```bash
#записываем данные в переменные окружения
$ export GITHUB_USERNAME=<имя_пользователя>
$ export GIST_TOKEN=<сохраненный_токен>
#создание универзальной ссылки на подходяший редактор
$ alias edit=<nano|vi|vim|subl>
```

```bash
# рекурсивно создаем папки
$ mkdir -p ${GITHUB_USERNAME}/workspace
# переходим в новую папку
$ cd ${GITHUB_USERNAME}/workspace
# смотрим полный путь до текущей дериктории
$ pwd
$ cd ..
$ pwd
```

```bash
$ mkdir -p workspace/tasks/
$ mkdir -p workspace/projects/
$ mkdir -p workspace/reports/
$ cd workspace
```

```bash
# Debian
# скачивает архив с пакетным менеджером JS
## Хотя зачем, если смы ставим gist через Ruby?
$ wget https://nodejs.org/dist/v6.11.5/node-v6.11.5-linux-x64.tar.xz
# распаковываем его
$ tar -xf node-v6.11.5-linux-x64.tar.xz
# удаляем скачанный фаил
$ rm -rf node-v6.11.5-linux-x64.tar.xz
# переименовываем папку распаованного архива 
$ mv node-v6.11.5-linux-x64 node
```

```bash
# смотрим содержимое папки node/bin
$ ls node/bin
node  npm
# выводим переменную PATH
$ echo ${PATH}
# добавляем путь до папки node/bin в PATH
$ export PATH=${PATH}:`pwd`/node/bin
# проверяем изменения
$ echo ${PATH}
$ mkdir scripts
# записывем текст команды добавления в PATH в фаил activate в папке scripts
$ cat > scripts/activate<<EOF
export PATH=\${PATH}:`pwd`/node/bin
EOF
# выплоняем команду из файла в шелле
$ source scripts/activate
```

```bash
# устанавливаем прогу gist из пакетного менеджера ruby
$ gem install gist
```

```bash
# записываем токен в файл в /home/ и редактируем стандартные права доступа к файлу 
$ (umask 0077 && echo ${GIST_TOKEN} > ~/.gist)
```

## Report

```bash
# копируем удаленную репу в tasks
$ export LAB_NUMBER=01
$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER}
$ mkdir reports/lab${LAB_NUMBER}
# копируем файл в reports с переименованием
$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
$ cd reports/lab${LAB_NUMBER}
# Пишем этот отчет
$ edit REPORT.md
# публикуем gist
$ gist REPORT.md
```

## Links

### Unix commands

- [ar](https://en.wikipedia.org/wiki/Ar_(Unix)) // устаревший архиватор, заменен tar, используется только для статических библиотек
- [cat](https://en.wikipedia.org/wiki/Cat_(Unix)) // программа для чтения содержимого файлов и печати в стандартный поток вывода  
- [cd](https://en.wikipedia.org/wiki/Cd_(command)) // смена рабочей директории
- [cp](https://en.wikipedia.org/wiki/Cp_(Unix)) // копирование файлов и директорий [ cp (откуда) (куда)]
- [cut](https://en.wikipedia.org/wiki/Cut_(Unix)) // копирование строк из файла по определенным правилам
- [echo](https://en.wikipedia.org/wiki/Echo_(command)) // вывод строки или переменной в стадартный поток вывода
- [env](https://en.wikipedia.org/wiki/Env_(shell)) // печать переменных среды или запуск программы с другой переменной среды
- [ex](https://en.wikipedia.org/wiki/Ex_(editor)) //текстовый редактор
- [file](https://en.wikipedia.org/wiki/File_(command)) //определяет тип файлов
- [find](https://en.wikipedia.org/wiki/Find) // поиск файлов
- [ls](https://en.wikipedia.org/wiki/Ls) // вывод файлов и директорий в рабочем каталоге
- [man](https://en.wikipedia.org/wiki/Man_page) //программа для просмотра дакументации к другим программам
- [mkdir](https://en.wikipedia.org/wiki/Mkdir) // создает новый каталог
- [mv](https://en.wikipedia.org/wiki/Mv) // перемещает файлы
- [nm](https://en.wikipedia.org/wiki/Nm_(Unix)) // выводит символы из объектных файлов
- [ps](https://en.wikipedia.org/wiki/Ps_(Unix)) // вывод запущенных процессов
- [pwd](https://en.wikipedia.org/wiki/Pwd) // выводит полный путь до рабочего каталога
- [rm](https://en.wikipedia.org/wiki/Rm_(Unix))  // удаление файлов или каталогов
- [sed](https://en.wikipedia.org/wiki/Sed) // программа для парсинга и замены текста
- [touch](https://en.wikipedia.org/wiki/Touch_(Unix))  // программа для обновления последнего изменения файла, может создавать пустые файлы заданного имени

### Package Managers

- [apt](http://help.ubuntu.ru/wiki/apt) | [dnf](https://en.wikipedia.org/wiki/DNF_(software)) | [yum](https://fedoraproject.org/wiki/Yum/ru) // пакетные менеджеры apt - Debian/ dnf - Fedora и RPM-based дистрибутивы / yum - Fedora до версии 22
- [brew](https://brew.sh) | [linuxbrew](http://linuxbrew.sh) // менеджер недостащих пакетов для MacOS и порт проекта для линукса
- [npm](https://docs.npmjs.com) // open-source javascript code packet manager

### Software

- [curl](https://www.gitbook.com/book/bagder/everything-curl/details) // программа для работы с url страницами и интернет протоколами
- [wget](https://www.gnu.org/software/wget/manual/wget.pdf) // программа для загрузки файлов из сети прямо из консоли
- [clang](https://clang.llvm.org) // Компилятор Apple
- [g++](https://gcc.gnu.org/onlinedocs/gcc-4.0.2/gcc/G_002b_002b-and-GCC.html) // набор компиляторов для нескольких языков программирования
- [make](https://en.wikipedia.org/wiki/Make_(software)) // система автоматизированной сборки пректов
- [open](https://developer.apple.com/legacy/library/documentation/Darwin/Reference/ManPages/man1/open.1.html) //открывает папку, файл или url (MacOs)
- [openssl](https://www.openssl.org) // криптографический пакет с открытым исходным кодом для работы с SSL/TLS
- [nano](https://www.nano-editor.org) // простой и удобный консольный текстовый редактор
- [tree](https://linux.die.net/man/1/tree) // вывести в консоль файловую структуру в виде дерева
- [vim](http://www.vim.org) // крайне гибкий и функциональный текстовый редактор

## Homework

1. Скачайте библиотеку *boost* с помощью утилиты **wget**. Адрес для скачивания `https://sourceforge.net/projects/boost/files/boost/1.69.0/boost_1_69_0.tar.gz`.
```bash
$ wget https://sourceforge.net/projects/boost/files/boost/1.69.0/boost_1_69_0.tar.gz
```
2. Разархивируйте скаченный файл в директорию `~/boost_1_69_0`
```bash
 $ tar -xf boost_1_69_0.tar.gz  -C ~
```
3. Подсчитайте количество файлов в директории `~/boost_1_69_0` **не включая** вложенные директории.
```bash
 $ find ~/boost_1_69_0 -maxdepth 1 -type f  | wc -l
12
```
4. Подсчитайте количество файлов в директории `~/boost_1_69_0` **включая** вложенные директории.
```bash
 $ find ~/boost_1_69_0 -type f  | wc -l
 61191
```
5. Подсчитайте количество заголовочных файлов, файлов с расширением `.cpp`, сколько остальных файлов (не заголовочных и не `.cpp`).
```bash
$ find ~/boost_1_69_0 -type f  -iname '*.h' | wc -l
296
$ find ~/boost_1_69_0 -type f  -iname '*.cpp' | wc -l
13774
 $ find ~/boost_1_69_0 -type f ! -iname '*.h' -a ! -iname '*.cpp' | wc -l 
47121
```
6. Найдите полный пусть до файла `any.hpp` внутри библиотеки *boost*.
```bash
$ find ~/boost_1_69_0 -iname 'any.hpp' | cut -d "/" -f 3-100
boost_1_69_0/boost/hana/any.hpp
boost_1_69_0/boost/hana/fwd/any.hpp
boost_1_69_0/boost/proto/detail/any.hpp
boost_1_69_0/boost/any.hpp
boost_1_69_0/boost/xpressive/detail/utility/any.hpp
boost_1_69_0/boost/spirit/home/support/algorithm/any.hpp
boost_1_69_0/boost/type_erasure/any.hpp
boost_1_69_0/boost/fusion/include/any.hpp
boost_1_69_0/boost/fusion/algorithm/query/any.hpp
boost_1_69_0/boost/fusion/algorithm/query/detail/any.hpp
```
7. Выведите в консоль все файлы, где упоминается последовательность `boost::asio`.
```bash
 $ grep -lr 'boost::asio' ~/boost_1_69_0 | wc -l
1763
```
//*по понятным причинам не буду приводить здесь список всех файлов*
8. Скомпилирутйе *boost*. Можно воспользоваться [инструкцией](https://www.boost.org/doc/libs/1_61_0/more/getting_started/unix-variants.html#or-build-custom-binaries) или [ссылкой](https://codeyarns.com/2017/01/24/how-to-build-boost-on-linux/).
```bash
 $ ./bootstrap.sh --prefix=boost_output
 $ ./b2 install -j 8 
```
9. Перенесите все скомпилированные на предыдущем шаге статические библиотеки в директорию `~/boost-libs`.
```bash
 $ mkdir ~/boost-libs 
 $ mv ./boost_output/lib/*.a ~/boost-libs
```
10. Подсчитайте сколько занимает дискового пространства каждый файл в этой директории.
```bash
$ find ~/boost-libs -type f -printf '%k KiB %p\n' | cut -d / -f 1,4-100
620 KiB /boost-libs/libboost_math_c99.a
32 KiB /boost-libs/libboost_stacktrace_addr2line.a
232 KiB /boost-libs/libboost_prg_exec_monitor.a
24 KiB /boost-libs/libboost_stacktrace_backtrace.a
512 KiB /boost-libs/libboost_math_c99f.a
2368 KiB /boost-libs/libboost_test_exec_monitor.a
552 KiB /boost-libs/libboost_math_c99l.a
2344 KiB /boost-libs/libboost_unit_test_framework.a
1592 KiB /boost-libs/libboost_program_options.a
4304 KiB /boost-libs/libboost_log.a
24 KiB /boost-libs/libboost_context.a
244 KiB /boost-libs/libboost_fiber.a
3084 KiB /boost-libs/libboost_math_tr1l.a
364 KiB /boost-libs/libboost_iostreams.a
168 KiB /boost-libs/libboost_container.a
204 KiB /boost-libs/libboost_coroutine.a
4 KiB /boost-libs/libboost_stacktrace_noop.a
60 KiB /boost-libs/libboost_timer.a
1216 KiB /boost-libs/libboost_serialization.a
3116 KiB /boost-libs/libboost_math_tr1.a
4 KiB /boost-libs/libboost_system.a
3380 KiB /boost-libs/libboost_locale.a
2640 KiB /boost-libs/libboost_log_setup.a
320 KiB /boost-libs/libboost_contract.a
88 KiB /boost-libs/libboost_numpy27.a
236 KiB /boost-libs/libboost_chrono.a
84 KiB /boost-libs/libboost_random.a
400 KiB /boost-libs/libboost_thread.a
428 KiB /boost-libs/libboost_filesystem.a
156 KiB /boost-libs/libboost_date_time.a
792 KiB /boost-libs/libboost_wserialization.a
4504 KiB /boost-libs/libboost_wave.a
3016 KiB /boost-libs/libboost_regex.a
4 KiB /boost-libs/libboost_exception.a
16 KiB /boost-libs/libboost_stacktrace_basic.a
3072 KiB /boost-libs/libboost_math_tr1f.a
184 KiB /boost-libs/libboost_type_erasure.a
592 KiB /boost-libs/libboost_python27.a
804 KiB /boost-libs/libboost_graph.a
4 KiB /boost-libs/libboost_atomic.a
```
11. Найдите *топ10* самых "тяжёлых".
```bash
 $ find ~/boost-libs -type f -printf '%k KiB %p\n' | sort -nr |head| nl
     1	4504 KiB /boost-libs/libboost_wave.a
     2	4304 KiB /boost-libs/libboost_log.a
     3	3380 KiB /boost-libs/libboost_locale.a
     4	3116 KiB /boost-libs/libboost_math_tr1.a
     5	3084 KiB /boost-libs/libboost_math_tr1l.a
     6	3072 KiB /boost-libs/libboost_math_tr1f.a
     7	3016 KiB /boost-libs/libboost_regex.a
     8	2640 KiB /boost-libs/libboost_log_setup.a
     9	2368 KiB /boost-libs/libboost_test_exec_monitor.a
    10	2344 KiB /boost-libs/libboost_unit_test_framework.a
```

```
Copyright (c) 2015-2021 The ISC Authors
```