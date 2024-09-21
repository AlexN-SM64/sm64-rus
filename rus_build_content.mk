NOEXTRACT ?= 0
ifeq ($(NOEXTRACT),0)
  $(info Подготовка к извлечению ассетов...)
  DUMMY != python3 extract_assets.py us >&2 || echo FAIL
  ifeq ($(DUMMY),FAIL)
    $(error Неудача при извлечении ассетов.)
  endif
endif

$(info Разделение текстуры торта концовки на части в PNG...)
DUMMY != tools/skyconv --type cake --split levels/ending/cake.png levels/ending --write-tiles levels/ending >&2 || echo FAIL
ifeq ($(DUMMY),FAIL)
  $(error Неудача при разделении текстуры.)
endif
