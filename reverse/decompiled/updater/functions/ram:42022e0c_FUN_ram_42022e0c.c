
int FUN_ram_42022e0c(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_ram_3fcb6764 == '\0') {
    thunk_FUN_ram_4204992e(50000);
    thunk_FUN_ram_42049934(10000000);
    thunk_FUN_ram_42049942(15000);
    FUN_ram_4203d496(0);
    FUN_ram_40393206();
    iVar1 = FUN_ram_4203cb06(param_1);
    if (iVar1 == 0) {
      FUN_ram_4205d2de();
      iVar1 = FUN_ram_4205dc5a();
      if (iVar1 == 0) {
        DAT_ram_3fcb6764 = '\x01';
        goto LAB_ram_42022e6a;
      }
    }
    FUN_ram_42022d86();
  }
  else {
LAB_ram_42022e6a:
    iVar1 = 0;
  }
  return iVar1;
}

