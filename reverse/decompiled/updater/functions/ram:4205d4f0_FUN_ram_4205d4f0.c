
void FUN_ram_4205d4f0(undefined4 param_1)

{
  int iVar1;
  
  FUN_ram_40390ff2(&DAT_ram_3fcb683c);
  iVar1 = FUN_ram_4205d6e2();
  if (iVar1 == 0) {
    FUN_ram_40390b4c();
    FUN_ram_40390c26();
    FUN_ram_40390d0c(0xe0788f8f);
    if (DAT_ram_3fcb6838 == '\0') {
      FUN_ram_4205d43e();
      DAT_ram_3fcb6838 = '\x01';
    }
    else {
      thunk_FUN_ram_40393312();
    }
    FUN_ram_4205d646();
    iVar1 = FUN_ram_40393208();
    if (iVar1 != 0) {
      FUN_ram_4205d6f6();
      FUN_ram_4205d6ec();
    }
    FUN_ram_40390ca8();
  }
  FUN_ram_4205d6b6(param_1);
  FUN_ram_4205d5f2();
  FUN_ram_4039100a(&DAT_ram_3fcb683c);
  return;
}

