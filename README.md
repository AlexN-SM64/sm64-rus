# Super Mario 64 - Русская версия

![Super Mario 64 - Русская версия](/md_screenshots/header.png)

## Описание игры на русском

Приглашённый в замок принцессы Пич, Марио обнаруживает, что она снова была похищена Боузером и его приспешниками. Однако кое-что изменилось... На этот раз приключение происходит в 3D!

Перебирая развешанные по стенам картины, Марио ищет 120 звёзд Силы, спрятанных в огромных волшебных мирах, изобилующих сложными полосами препятствий, спрятанными предметами, головоломками и армией врагов! Марио обладает огромным арсеналом движений, включая бег, прыжки, плавание, топанье и удары руками, а также сальто назад, которые могут помочь ему достичь даже самых высоких платформ. Специальные кепки дают ему кратковременные способности, в том числе способность летать - и если нарушители спокойствия сорвут с Марио кепку, ему придётся вернуть его обратно!

Марио свободно бегает по заросшему травой лугу, на цыпочках пробирается по мрачному подземелью, взбирается на вершину заснеженной горы, перепрыгивает через озёра лавы и плавает во рву с замком. Он может исследовать древнюю пирамиду и даже участвовать в гонках за невероятные призы. И, конечно же, он должен сразиться со своим заклятым врагом Боузером, королём Купа - не один раз, а трижды!

## Скриншоты

![Письмо от принцессы](/md_screenshots/peach's_message.png)
![Первый диалог игры](/md_screenshots/first_dialog.png)
![Первая табличка около замки](/md_screenshots/first_sign.png)
![Приветствие от Лакиту](/md_screenshots/lakitu_tell.png)
![Письмо от Боузера](/md_screenshots/bowser_letter.png)
![Первый рассказ Тоада](/md_screenshots/first_toad_tell.png)
![Начало первого курса](/md_screenshots/first_course_start.png)
![Первый разговор приятеля Боб-омба](/md_screenshots/bob-omb_buddy_first_tell.png)
![Письмо от Большого Боб-омба](/md_screenshots/king_bob-omb_message.png)
![Разговор Большого Боб-омба](/md_screenshots/king_bob-omb_tell.png)
![Разговор Купы-быстрой](/md_screenshots/koopa_tell.png)
![Горка с временем](/md_screenshots/slide.png)
![Меню курса](/md_screenshots/course_menu.png)
![Интро](/md_screenshots/intro.PNG)
![Выбор файла](/md_screenshots/file_select.png)

## Особенности русификации

- Перевод текстур на русский язык (Метр Силы, подпись принцессы Пич, торт в концовке игры, иконка курса, фон окончания игры, но КРОМЕ: логотип с надписью "KOOPA" на стороне игрушки Heave-Ho, табличка с надписью "L is real 2401")
- Русские буквы в виде ХУДа, титров и текста (большого и маленького размера)
- 100% перевод текста на русский язык (диалоги и таблички, названия курсов и звёзд, субтитры и т.д.)
- ТОЛЬКО оригинальная английская озвучка Марио и принцессы Пич
- Изменения и добавления в коде (см. `include/rus`, `charmap.txt` и т.д.)
- Русификация ТОЛЬКО американской (США) версии игры Super Mario 64, выпущенной в 1996 г.

## Инструкция по выполнению сборки

### Выполнение сборки игры для Nintendo 64

#### Linux

1. Запустите терминал и установите следующие пакеты (Ubuntu или Debian):
```
sudo apt install git build-essential python3 binutils-mips-linux-gnu pkgconf libcapstone-dev patch
```
Важно: Перед установкой сначала выполните обновление: `sudo apt-get update && sudo apt-get upgrade`

Примечания:

- `libcapstone-dev` нужен для компиляции с помощью компилятора SGI IRIS Development Option (IDO),
которого используется для выполнения сборки N64 ROM с соответствиями.
Чтобы не тратить время выполнения, но если вы хотите использовать GNU C Compiler (GCC) для компилятора,
уберите `pkgconf` и `libcapstone-dev` в строке терминала и установите `gcc-mips-linux-gnu`.
- В состав `build-essential` входят пакеты: `make`, `gcc` и `g++`.
- `patch` нужен для изменений в `Makefile`.

2. Клонируйте основной репозиторий, где есть исходный код игры:
```
git clone https://github.com/sm64-port/sm64-port
```

3. Клонируйте дополнительный репозиторий, где есть русификация:
```
git clone https://github.com/AlexN-SM64/sm64-rus
```

4. В проводнике находите каталог `sm64-rus`, скопируйте всё, кроме папки `.git`, и вставляйте в тот каталог репозитория, где есть исходный код игры, заменив файлы.

5. В терминале перейдите в тот каталог:
```
cd sm64-port
```

6. Поставьте ТОЛЬКО оригинальную американскую (США) версию игры Super Mario 64 N64 ROM сюда и переименуйте в `baserom.us.z64` для извлечения ассетов.

Примечание: Этот ROM должен совпадать SHA1: `9bef1128717f958171a4afac3ed78ee2bb4e86ce`. Наберите `sha1sum baserom.us.z64` в строке терминала и проверьте, подходит ли для извлечения ассетов или нет.

7. Измените `Makefile` с помощью патча:
```
tools/apply_patch.sh patch_makefile_rus_diff3.patch
```

8. Готовьтесь к выполнению сборки:
```
make TARGET_N64=1
```
Примечания:

- Для русификации установлены параметры сборки по умолчанию: Версия - США, Сравнить - НЕТ, Микрокод - Fast3DZEX.
- Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.
- Если есть пакет `gcc-mips-linux-gnu`, добавьте `COMPILER=gcc`, чтобы не тратить время выполнения сборки инструментов.
- После выполнения сборки игры для N64 с поддержкой микрокода Fast3DEX или Fast3DEX2, видеоплагин GlideN64 не поддерживает таких микрокодов.
- Выполнение сборки игры для N64 с поддержкой микрокода Fast3D OLD или Fast3D NEW практически НЕВОЗМОЖНО - игра столкнётся.

9. В результате сборки ваша игра для N64 будет находится там: `build/us/sm64.us.z64`

#### Windows

1. Запустите один из терминалов (Командная строка или Windows PowerShell) от имени администратора и установите подсистему Windows для Linux (WSL) и встроенный дистрибутив:
```
wsl --install
```
Важно: WSL требуется Windows 10 версия 1903 или новее для систем x64. После установки WSL вам потребуется перезагрузить компьютер и войти снова, чтобы продолжить.

2. Перейдите [в раздел](#linux) сверху и продолжайте следовать инструкцию по выполнению сборки.

### Выполнение сборки игры для ПК

#### Linux

1. Запустите терминал и установите следующие пакеты (Ubuntu или Debian):
```
sudo apt install git build-essential python3 pkgconf libusb-1.0-0-dev libsdl2-dev patch
```
Важно: Перед установкой сначала выполните обновление: `sudo apt-get update && sudo apt-get upgrade`

Примечания:
- В состав `build-essential` входят пакеты: `make`, `gcc` и `g++`.
- `patch` нужен для изменений в `Makefile`.

2. Клонируйте основной репозиторий, где есть исходный код игры:
```
git clone https://github.com/sm64-port/sm64-port
```

3. Клонируйте дополнительный репозиторий, где есть русификация:
```
git clone https://github.com/AlexN-SM64/sm64-rus
```

4. В проводнике находите каталог `sm64-rus`, скопируйте всё, кроме папки `.git`, и вставляйте в тот каталог репозитория, где есть исходный код игры, заменив файлы.

5. В терминале перейдите в тот каталог:
```
cd sm64-port
```

6. Поставьте ТОЛЬКО оригинальную американскую (США) версию игры Super Mario 64 N64 ROM сюда и переименуйте в `baserom.us.z64` для извлечения ассетов.

Примечание: Этот ROM должен совпадать SHA1: `9bef1128717f958171a4afac3ed78ee2bb4e86ce`. Наберите `sha1sum baserom.us.z64` в строке терминала и проверьте, подходит ли для извлечения ассетов или нет.

7. Измените `Makefile` с помощью патча:
```
tools/apply_patch.sh patch_makefile_rus_diff3.patch
```

8. Готовьтесь к выполнению сборки:
```
make
```
Примечание: Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.

9. В результате сборки ваша игра для Linux будет находится там: `build/us_pc/sm64.us`

#### Windows

1. Скачайте и установите набор терминалов MSYS2 (включая MinGW32, MinGW64 и UCRT64) для Windows - версию от 7 мая 2024 г.: https://github.com/msys2/msys2-installer/releases/tag/2024-05-07

Важно: Запуск MSYS2 требуется Windows 8.1 или новее для систем x64. Убедительная просьба НИЧЕГО НЕ ОБНОВЛЯТЬ этот терминал и следующие пакеты - выполнение сборки инструмента ARMIPS критически столкнётся.

2. Запустите один из терминалов MSYS2 MinGW и установите пакеты, которые вам нужны (НЕ запустите MSYS2 MSYS, MSYS2 CLANG или MSYS2 CLANGARM):

- 64 бит:
	+ а) запустите MSYS2 MinGW64 и установите: `pacman -S git make python3 mingw-w64-x86_64-gcc patch`
	+ б) запустите MSYS2 UCRT64 и установите: `pacman -S git make python3 mingw-w64-ucrt-x86_64-gcc patch`
- 32 бита: запустите MSYS2 MinGW32 и установите: `pacman -S git make python3 mingw-w64-i686-gcc patch`
- НЕ установите следующий пакет называющийся простым `gcc` для MSYS2 MSYS.

Примечание: `patch` нужен для изменений в `Makefile`.

3. В терминале MSYS2 есть текущий рабочий каталог, который изначально называется `C:\msys64\home\<имя пользователя>` (домашний каталог). В командной строке текущий рабочий каталог будет выделен желтым цветом. `~` - это псевдоним домашнего каталога. Вы можете изменить текущий рабочий каталог на "Рабочий стол", введя `cd /c/Users/<имя пользователя>/Desktop`.

4. Клонируйте основной репозиторий, где есть исходный код игры:
```
git clone https://github.com/sm64-port/sm64-port
```

5. Клонируйте дополнительный репозиторий, где есть русификация:
```
git clone https://github.com/AlexN-SM64/sm64-rus
```

6. В проводнике находите каталог `sm64-rus`, скопируйте всё, кроме папки `.git`, и вставляйте в тот каталог репозитория, где есть исходный код игры, заменив файлы.

7. В терминале перейдите в тот каталог:
```
cd sm64-port
```

8. Поставьте ТОЛЬКО оригинальную американскую (США) версию игры Super Mario 64 N64 ROM сюда и переименуйте в `baserom.us.z64` для извлечения ассетов.

Примечание: Этот ROM должен совпадать SHA1: `9bef1128717f958171a4afac3ed78ee2bb4e86ce`. Наберите `sha1sum baserom.us.z64` в строке терминала и проверьте, подходит ли для извлечения ассетов или нет.

9. Измените `Makefile` с помощью патча:
```
tools/apply_patch.sh patch_makefile_rus_diff3.patch
```

10. Готовьтесь к выполнению сборки:
```
make
```
Примечания:
- Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.
- Если есть графический компонент DirectX 12, добавьте `ENABLE_DX12=1`.
- НЕ выполняйте сборку игры для Windows с поддержкой OpenGL.

11. В результате сборки ваша игра для Windows будет находится там: `build/us_pc/sm64.us.exe`

### Выполнение сборки игры для другой платформы (Android, PS4 и т.д.)

Это то же самая инструкция, как для ПК. Прежде чем, как выполнить сборку русифицированной игры для другой платформы, давайте следим!

1. Находите и клонируйте репозиторий, где есть исходный код игры для порта на другую платформу, и следите инструкцию! После нативной сборки не забудьте очистить каталог `build`.

2. Перейдите [в раздел "Выполнение сборки игры для ПК"](#%D0%B2%D1%8B%D0%BF%D0%BE%D0%BB%D0%BD%D0%B5%D0%BD%D0%B8%D0%B5-%D1%81%D0%B1%D0%BE%D1%80%D0%BA%D0%B8-%D0%B8%D0%B3%D1%80%D1%8B-%D0%B4%D0%BB%D1%8F-%D0%BF%D0%BA) сверху и продолжайте следовать инструкцию. Потом не забудьте изменить `Makefile` с помощью `tools/apply_patch.sh patch_makefile_rus.patch`.

## Контрибутинг

Запросы на обновление приветствуются. Для внесения существенных изменений, пожалуйста, сначала откройте выпуск, чтобы обсудить, что вы хотели бы изменить.
