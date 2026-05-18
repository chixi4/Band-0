
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420210aa(int param_1)

{
  int iVar1;
  int aiStack_24 [7];
  
  iVar1 = FUN_ram_42020da0();
  if ((iVar1 != 0) && (param_1 != 0)) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    if ((*(int *)(param_1 + 0x10) == 0) ||
       (*(int *)(*(int *)(param_1 + 0x10) + 4) == _DAT_ram_3c0793d4)) {
      aiStack_24[1] = 0;
      aiStack_24[2] = 0;
      aiStack_24[3] = 0;
      aiStack_24[4] = 0;
      aiStack_24[0] = param_1;
      FUN_ram_4202109a(param_1,4);
      (*(code *)&SUB_ram_40010488)(*(undefined4 *)(param_1 + 0xc),0,0xc);
      if (((*(uint *)(param_1 + 0x50) & 1) != 0) && (*(int *)(param_1 + 0x38) == 1)) {
        FUN_ram_4202101c(*(undefined4 *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_ram_42079738(_DAT_ram_3c0758dc,*(int *)(param_1 + 0x48),aiStack_24,0x14,0);
      }
    }
  }
  return;
}

