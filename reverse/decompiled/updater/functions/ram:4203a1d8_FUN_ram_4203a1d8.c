
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203a1d8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (_DAT_ram_3fcb4f84 == 0) {
    uVar3 = 0x3c07b350;
    uVar2 = 4;
  }
  else {
    if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) != '\x01') {
      if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x05') {
        FUN_ram_42033fd8(1,4,2,0x3c07fd2c);
        return 0;
      }
      (*(code *)&SUB_ram_40011d44)();
      FUN_ram_42033fd8(1,4,4,0x3c07b36c,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),0);
      *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 0;
      if (1 < *(int *)(*(int *)(gp + -0x2b8) + 4) + 1U) {
        iVar1 = FUN_ram_4203dc98(0);
        if (iVar1 == 0) {
          return 0;
        }
        (*(code *)&SUB_ram_40011d48)();
        return iVar1;
      }
      (*(code *)&SUB_ram_40011d48)();
      FUN_ram_42033fd8(1,4,4,0x3c07b384);
      return 0x300a;
    }
    uVar3 = 0x3c07d3b0;
    uVar2 = 1;
  }
  FUN_ram_42033fd8(1,4,uVar2,uVar3);
  return 0x3007;
}

