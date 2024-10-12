# Инструкция по выполнению сборки

## Выполнение сборки игры для ПК

### Windows

1. Скачайте и установите [набор терминалов MSYS2](https://msys2.org) (включая MinGW32, MinGW64 и UCRT64) для Windows.

Важно: Запуск MSYS2 требуется Windows 8.1 или новее для систем x64. После запуска сначала обновите терминал и пакеты, введя `pacman -Syu`. Потом не забудьте перезапустить заново и ввести ещё раз до окончания обновления.

2. Запустите один из терминалов MSYS2 MinGW (MinGW64, MinGW32 или UCRT64) и установите пакеты, которые вам нужны (НЕ запустите MSYS2 MSYS, MSYS2 CLANG или MSYS2 CLANGARM):

2.1. Сначала установите базовые пакеты:
```
pacman -S git patch make python3
```

2.2. Затем установите дополнительный пакет GCC (версия 13.2.0-6 для MSYS2 MinGW):
- В MSYS2 MinGW64 (для сборки игры для Windows x64):
```
pacman -U https://repo.msys2.org/mingw/mingw64/mingw-w64-x86_64-gcc-13.2.0-6-any.pkg.tar.zst \
https://repo.msys2.org/mingw/mingw64/mingw-w64-x86_64-gcc-libs-13.2.0-6-any.pkg.tar.zst
```
- В MSYS2 UCRT64 (для сборки игры для Windows x64):
```
pacman -U https://repo.msys2.org/mingw/ucrt64/mingw-w64-ucrt-x86_64-gcc-13.2.0-6-any.pkg.tar.zst \
https://repo.msys2.org/mingw/ucrt64/mingw-w64-ucrt-x86_64-gcc-libs-13.2.0-6-any.pkg.tar.zst
```
- В MSYS2 MinGW32 (для сборки игры для Windows x86):
```
pacman -U https://repo.msys2.org/mingw/mingw32/mingw-w64-i686-gcc-13.2.0-6-any.pkg.tar.zst \
https://repo.msys2.org/mingw/mingw32/mingw-w64-i686-gcc-libs-13.2.0-6-any.pkg.tar.zst
```

Важно: НЕ обновляйте GCC для MSYS2 MinGW до версии 14 - выполнение сборки инструмента ARMIPS критически столкнётся.

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

Примечание: Этот ROM должен совпадать SHA1: `9bef1128717f958171a4afac3ed78ee2bb4e86ce`. Наберите `sha1sum baserom.us.z64 && cat sm64.us.sha1` в строке терминала и проверьте, подходит ли для извлечения ассетов или нет.

9. Измените `Makefile` с помощью патча:
```
tools/apply_patch.sh patch_makefile_rus_diff3.patch
```

Примечание: Если нужно выполнить сборку для ПК с поддержкой 60 FPS, выполните патч: `tools/apply_patch.sh enhancements/60fps.patch`

10. Готовьтесь к выполнению сборки:
```
bash build_content.sh && make
```
Примечания:
- Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.
- Если есть графический компонент DirectX 12, добавьте `ENABLE_DX12=1`.
- НЕ выполняйте сборку игры для Windows с поддержкой OpenGL.

11. В результате сборки ваша игра для Windows будет находиться там: `build/us_pc/sm64.us.exe`

### Linux

1. Запустите терминал и установите следующие пакеты:

- На основе Debian:
```
sudo apt install git build-essential libusb-1.0-0-dev libsdl2-dev bsdextrautils
```
Важно: Перед установкой сначала выполните обновление списка пакетов: `sudo apt-get update`

Примечание: В состав `build-essential` входят пакеты: `make`, `gcc` и `g++`.

- На основе Arch Linux (не тестировано):
```
sudo pacman -S base-devel python sdl2
```
Важно: Перед установкой сначала выполните обновление: `sudo pacman -Syu`

Примечание: В состав `base-devel` входят пакеты: `make`, `pkgconf` и `gcc`.

Если не получается установить другие пакеты на других дистрибутивах Linux, установите [Docker](https://www.docker.com/) и перейдите [в раздел](#другие-дистрибутивы-linux---docker) снизу.

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

Примечание: Этот ROM должен совпадать SHA1: `9bef1128717f958171a4afac3ed78ee2bb4e86ce`. Наберите `sha1sum baserom.us.z64 && cat sm64.us.sha1` в строке терминала и проверьте, подходит ли для извлечения ассетов или нет.

7. Измените `Makefile` с помощью патча:
```
tools/apply_patch.sh patch_makefile_rus_diff3.patch
```

Примечание: Если нужно выполнить сборку для ПК с поддержкой 60 FPS, выполните патч: `tools/apply_patch.sh enhancements/60fps.patch`

8. Готовьтесь к выполнению сборки:
```
bash build_content.sh && make
```
Примечание: Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.

9. В результате сборки ваша игра для Linux будет находиться там: `build/us_pc/sm64.us`

### Другие дистрибутивы Linux - Docker

1. В терминале установите пакеты: `git` - для клонирования репозиторий, `patch` - для выполнения патчей.

2. Перейдите [в раздел](#linux) сверху и продолжайте следовать инструкцию по выполнению сборки (шаги 2-7).

3. Создайте образ сборки:

После установки и запуска Docker создайте образ сборки. Это нужно сделать только один раз.
```
docker build -t sm64 .
```

4. Готовьтесь к выполнению сборки:
```
docker run --rm --mount type=bind,source="$(pwd)",destination=/sm64 sm64 \
bash build_content.sh && \
docker run --rm --mount type=bind,source="$(pwd)",destination=/sm64 sm64 \
make
```
Примечание: Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.

5. В результате сборки ваша игра для Linux будет находиться там: `build/us_pc/sm64.us`

## Выполнение сборки игры для Nintendo 64 / iQue Player

### Windows

1. Запустите один из терминалов (Командная строка или Windows PowerShell) от имени администратора и установите подсистему Windows для Linux (WSL) и любой дистрибутив:
```
wsl --install <дистрибутив>
```
Примечание: `<дистрибутив>` должен быть `ubuntu`, `debian` и `kali-linux`. Если есть другие дистрибутивы, которые вам нужны в WSL, наберите `wsl --list --online`.

Важно: WSL требуется Windows 10 версия 1903 или новее для систем x64. После установки WSL вам потребуется перезагрузить компьютер и войти снова, чтобы продолжить.

2. Перейдите [в раздел](#linux-1) снизу и продолжайте следовать инструкцию по выполнению сборки.

### Linux

1. Запустите терминал и установите следующие пакеты:

- На основе Debian:
```
sudo apt install git build-essential python3 pkgconf libcapstone-dev binutils-mips-linux-gnu bsdextrautils
```
Важно: Перед установкой сначала выполните обновление списка пакетов: `sudo apt-get update`

Примечания:

++ `libcapstone-dev` нужен для компиляции с помощью компилятора SGI IRIS Development Option (IDO),
которого используется для выполнения сборки N64 ROM с соответствиями.
Чтобы не тратить время выполнения, но если вы хотите использовать GNU C Compiler (GCC),
уберите `pkgconf`, `libcapstone-dev` и `binutils-mips-linux-gnu` в строке терминала и установите `gcc-mips-linux-gnu`.
++ В состав `build-essential` входят пакеты: `make`, `gcc` и `g++`.

- На основе Arch Linux (не тестировано):
```
sudo pacman -S base-devel python capstone
```
Затем установите AUR-пакет [mips64-elf-binutils](https://aur.archlinux.org/packages/mips64-elf-binutils).

Важно: Перед установкой сначала выполните обновление: `sudo pacman -Syu`

Примечания:

++ `capstone` нужен для компиляции с помощью компилятора SGI IRIS Development Option (IDO),
которого используется для выполнения сборки N64 ROM с соответствиями.
Чтобы не тратить время выполнения, но если вы хотите использовать GNU C Compiler (GCC),
уберите `capstone` в строке терминала и выполните установку базовых пакетов, затем установите AUR-пакет [mips64-elf-gcc](https://aur.archlinux.org/packages/mips64-elf-gcc).
++ В состав `base-devel` входят пакеты: `make`, `pkgconf` и `gcc`.

Если не получается установить другие пакеты на других дистрибутивах Linux, установите [Docker](https://www.docker.com/) и перейдите [в раздел](#docker) снизу.

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

Примечание: Этот ROM должен совпадать SHA1: `9bef1128717f958171a4afac3ed78ee2bb4e86ce`. Наберите `sha1sum baserom.us.z64 && cat sm64.us.sha1` в строке терминала и проверьте, подходит ли для извлечения ассетов или нет.

7. Измените `Makefile` с помощью патча:
```
tools/apply_patch.sh patch_makefile_rus_diff3.patch
```

Примечание: Если нужно выполнить сборку для китайской приставки iQue Player, выполните патч: `tools/apply_patch.sh enhancements/ique_support.patch`

8. Готовьтесь к выполнению сборки:
```
bash build_content.sh && make TARGET_N64=1
```
Примечания:

- Для русификации установлены параметры сборки по умолчанию: Версия - США, Сравнить - НЕТ, Микрокод - Fast3DZEX.
- Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.
- Если есть пакет `gcc-mips-linux-gnu`, добавьте `COMPILER=gcc`, чтобы не тратить время выполнения сборки инструментов.
- После выполнения сборки игры для N64 с поддержкой микрокода Fast3DEX или Fast3DEX2, видеоплагин GlideN64 не поддерживает таких микрокодов.
- Выполнение сборки игры для N64 с поддержкой микрокода Fast3D OLD или Fast3D NEW практически НЕВОЗМОЖНО - игра столкнётся при создании любого нового файла (Марио А, Б, В и Г) в меню.

9. В результате сборки ваша игра для N64 будет находиться там: `build/us/sm64.us.z64`

### Docker

1. В терминале установите пакеты: `git` - для клонирования репозиторий, `patch` - для выполнения патчей.

2. Перейдите [в раздел](#linux-1) сверху и продолжайте следовать инструкцию по выполнению сборки (шаги 2-7).

3. Создайте образ сборки:

После установки и запуска Docker создайте образ сборки. Это нужно сделать только один раз.
```
docker build -t sm64 .
```

4. Готовьтесь к выполнению сборки:
```
docker run --rm --mount type=bind,source="$(pwd)",destination=/sm64 sm64 \
bash build_content.sh && \
docker run --rm --mount type=bind,source="$(pwd)",destination=/sm64 sm64 \
make TARGET_N64=1
```
Примечания:

- Для русификации установлены параметры сборки по умолчанию: Версия - США, Сравнить - НЕТ, Микрокод - Fast3DZEX.
- Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.
- Если есть пакет `gcc-mips-linux-gnu`, добавьте `COMPILER=gcc`, чтобы не тратить время выполнения сборки инструментов.
- После выполнения сборки игры для N64 с поддержкой микрокода Fast3DEX или Fast3DEX2, видеоплагин GlideN64 не поддерживает таких микрокодов.
- Выполнение сборки игры для N64 с поддержкой микрокода Fast3D OLD или Fast3D NEW практически НЕВОЗМОЖНО - игра столкнётся при создании любого нового файла (Марио А, Б, В и Г) в меню.

5. В результате сборки ваша игра для N64 будет находиться там: `build/us/sm64.us.z64`

## Выполнение сборки игры для другой платформы (Android, PS4 и т.д.)

Прежде чем, как выполнить сборку русифицированной игры для другой платформы, давайте следим!

Сначала находите и клонируйте репозиторий, где есть исходный код игры для порта на другую платформу, и следите инструкцию! Затем перед сборкой русифицируйте пошагово:

1. Выйдите из каталога основного репозитория и клонируйте дополнительный, где есть русификация:
```
pushd ..
git clone https://github.com/AlexN-SM64/sm64-rus
```

2. В проводнике находите каталог `sm64-rus`, скопируйте всё, кроме папки `.git`, и вставляйте в тот каталог репозитория, где есть исходный код игры, заменив файлы.

3. В терминале перейдите в тот каталог обратно:
```
popd
```

4. Поставьте ТОЛЬКО оригинальную американскую (США) версию игры Super Mario 64 N64 ROM сюда и переименуйте в `baserom.us.z64` для извлечения ассетов.

Примечание: Этот ROM должен совпадать SHA1: `9bef1128717f958171a4afac3ed78ee2bb4e86ce`. Наберите `sha1sum baserom.us.z64 && cat sm64.us.sha1` в строке терминала и проверьте, подходит ли для извлечения ассетов или нет.

5. Измените `Makefile` с помощью патча:
```
tools/apply_patch.sh patch_makefile_rus.patch
```

6. Выполните сборку контента:
```
bash build_content.sh
```

Русификация теперь готова. Можно выполнить сборку!