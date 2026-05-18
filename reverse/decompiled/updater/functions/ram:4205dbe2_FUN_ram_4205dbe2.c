
void FUN_ram_4205dbe2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4205db58();
  if (DAT_ram_3fcb684e != '\0') {
    FUN_ram_4205da3a();
    DAT_ram_3fcb684e = '\0';
  }
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4205db9a(param_1);
    if (iVar1 != 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_ram_42038f64();
    if (iVar1 == 1) {
      FUN_ram_4205de0c(param_1,0,0,0);
    }
  }
  FUN_ram_420398d6(param_1);
  return;
}

