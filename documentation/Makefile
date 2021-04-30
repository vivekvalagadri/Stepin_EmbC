DOXY_FILE = dconfig
BUILD_FILE = html

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

doc:
	doxygen $(call FixPath,./$(DOXY_FILE))

clean:
	$(RM) $(call FixPath,./html)