// dogbolt.org

#include "out.h"


undefined main;
pointer __dso_handle;
undefined1 completed.0;
undefined DAT_00102022;

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101103)
// WARNING: Removing unreachable block (ram,0x0010110f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101144)
// WARNING: Removing unreachable block (ram,0x00101150)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



int add(int param_1,int param_2)

{
  return param_2 + param_1;
}



undefined8 main(void)

{
  long in_FS_OFFSET;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  printf("Enter a number (1 to 4): ");
  __isoc99_scanf(&DAT_00102022,&local_20);
  if (local_20 == 4) {
    puts("Case 4: Exiting the program.");
    goto LAB_00101326;
  }
  if (local_20 < 5) {
    if (local_20 == 3) {
      puts("Case 3: Let\'s perform an addition.");
      printf("Enter the first number: ");
      __isoc99_scanf(&DAT_00102022,&local_1c);
      printf("Enter the second number: ");
      __isoc99_scanf(&DAT_00102022,&local_18);
      local_14 = add(local_1c,local_18);
      printf("The sum of %d and %d is %d.\n",(ulong)local_1c,(ulong)local_18,(ulong)local_14);
      goto LAB_00101326;
    }
    if (local_20 < 4) {
      if (local_20 == 1) {
        puts("Case 1: This is a simple message.");
        goto LAB_00101326;
      }
      if (local_20 == 2) {
        puts("Case 2: Hello there! Hope you\'re having a fantastic day!");
        goto LAB_00101326;
      }
    }
  }
  puts("Invalid input. Please enter a number between 1 and 4.");
LAB_00101326:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void _fini(void)

{
  return;
}



