# SM64EX - Русская версия

![SM64EX - Русская версия](/md_screenshots/header.png)

SM64EX - Русская версия. На основе https://github.com/sm64pc/sm64ex.

## Особенности русификации

- Ещё один перевод на русский язык, включая только меню настроек, читов и др.
- Изменения и добавления в коде (см. `src/game/options_menu.c`, `include/options_menu_strings.h.in` и т.д.)
- Ещё больше особенностей находятся в бренче [master](https://github.com/AlexN-SM64/sm64-rus/tree/master#%D0%BE%D1%81%D0%BE%D0%B1%D0%B5%D0%BD%D0%BD%D0%BE%D1%81%D1%82%D0%B8-%D1%80%D1%83%D1%81%D0%B8%D1%84%D0%B8%D0%BA%D0%B0%D1%86%D0%B8%D0%B8).

## Инструкция по выполнению сборки

Прежде чем, как выполнить сборку русифицированной игры SM64EX, давайте следим!

Для установки пакетов обратитесь [в SM64EX вики](https://github.com/sm64pc/sm64ex/wiki).

Примечание: Если вы хотите использовать MSYS2 UCRT64 для сборки игры для Windows, установите дополнительные пакеты с кроссом `mingw-w64-ucrt-x86_64-`:
```
pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-glew mingw-w64-ucrt-x86_64-SDL2 mingw-w64-ucrt-x86_64-SDL
```

Важно: Если вы хотите использовать для сборки старой версии SM64EX, понизьте версию GCC до 13.2.

1. Клонируйте основной репозиторий, где есть исходный код игры, и переходите в него:
```
git clone https://github.com/sm64pc/sm64ex -b nightly sm64ex-rus
cd sm64ex-rus
```

Примечание: Если вы хотите использовать для сборки старой версии SM64EX, смените бренч `master` вместо `nightly` в строке терминала. Обновление кода больше не будет.

2. Клонируйте дополнительный репозиторий, где есть русификация, ВНЕ основного:
```
git clone https://github.com/AlexN-SM64/sm64-rus -b sm64ex ../sm64ex-rus-patch
```

3. В проводнике находите каталог `sm64ex-rus-patch`, скопируйте всё, кроме папок и файлов, имя которых начинается с точки `.`, и вставляйте в тот каталог репозитория, где есть исходный код игры, заменив файлы.
Или в терминале:
```
cp -f -r ../sm64ex-rus-patch/* .
```

4. Обновите код:
```
bash update_to_nightly.sh
```
Важно: Перед обновлением кода не забудьте установить пакет `patch`.

Примечание: Этот скрипт обязателен ТОЛЬКО после клонирования репозитория SM64EX с бренчом `nightly`. Если в нём стоит бренч `master` вместо текущего, НЕ ВЫПОЛНЯЙТЕ обновление.

5. Выполните сборку контента:
```
bash build_content.sh
```

6. Поставьте ТОЛЬКО оригинальную американскую (США) версию игры Super Mario 64 N64 ROM сюда и переименуйте в `baserom.us.z64` для извлечения ассетов.
Или в терминале:
```
cp /path/to/your/baserom.us.z64 baserom.us.z64
```

7. Выполните сборку игры:
```
make -j$(nproc)
```

Примечания:
- Если есть ядра в процессоре, добавьте `-j$(nproc)`, где `$(nproc)` - количество ядер в процессоре, чтобы ускорить процесс сборки.
- Другие настройки сборки уже есть [в SM64EX вики](https://github.com/sm64pc/sm64ex/wiki/Build-options).

## Контрибутинг

Запросы на обновление приветствуются. Для внесения существенных изменений, пожалуйста, сначала откройте выпуск, чтобы обсудить, что вы хотели бы изменить.
