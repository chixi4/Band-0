
undefined4 FUN_ram_4206c572(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffaf00;
  }
  if (param_2 == (uint *)0x0) {
    return 0xffffaf00;
  }
  uVar2 = *param_2;
  *param_1 = (int)param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar2 != 8) {
    if (uVar2 < 9) {
      if (uVar2 == 3) {
        iVar1 = FUN_ram_4206d7ce(1,0x58);
        param_1[1] = iVar1;
        if (iVar1 == 0) {
          return 0xffffae80;
        }
        FUN_ram_4206c928();
      }
      else {
        if (uVar2 != 5) {
          return 0xffffaf00;
        }
        iVar1 = FUN_ram_4206d7ce(1,0x68);
        param_1[1] = iVar1;
        if (iVar1 == 0) {
          return 0xffffae80;
        }
        FUN_ram_4206da36();
      }
      goto LAB_ram_4206c5f8;
    }
    if (uVar2 != 9) {
      return 0xffffaf00;
    }
  }
  iVar1 = FUN_ram_4206d7ce(1,0x74);
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    return 0xffffae80;
  }
  FUN_ram_4206dc64();
LAB_ram_4206c5f8:
  if (param_3 != 0) {
    iVar1 = FUN_ram_4206d7ce(2,*(undefined1 *)((int)param_2 + 5));
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      FUN_ram_4206c49a(param_1);
      return 0xffffae80;
    }
  }
  return 0;
}

