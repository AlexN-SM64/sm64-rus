DUMMY != tools/skyconv --type cake --split levels/ending/cake.png levels/ending --write-tiles levels/ending >&2 || echo FAIL
ifeq ($(DUMMY),FAIL)
  $(error Неудача при разделении текстуры)
endif
