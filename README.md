# visionero

При запуске приложения (**main.exe**) необходимо прейти в любой браузер и перейти по [ссылке](http://127.0.0.1:8000/)

# Эндпоинты:
'/' - список всех приложений с указанием работы в данный момент

'/start/name' - name - название приложения. Запускает приложение с указанным именем

'/shutdown/name' - name - название приложения. Останавливает приложение с указанным имененм

'/shutdown' - останавливает все приложения

'/history/all' - история запуска всех приложений

'/history/name' - name - название приложения. Показывает историю указанного приложения.

# Описание
Сначала необходимо создать файд **.env** в корне следуюего вида:
```
DB_HOST=localhost
DB_PORT=5432
DB_NAME=postgres
DB_USER=postgres
DB_PASS= #your password
```
Сборка в exe файл с помощью Nuitka
`python -m nuitka --standalone --windows-disable-console --follow-imports main.py`
Перед запуском программы, идет поиск всех программ на компьютере, а также всех запущенных программ, создаются таблицы в базе данных (указано в файле .env), добавляются все найденные приложения, если приложение в данный момент уже запущено, то статус в бд - false, иначе true.

При запуске, остановки программы, сначала идет сопоставление имени приложения с записями в бд. Если такого приложения не найдено, то выводится соответствующее сообщение.
