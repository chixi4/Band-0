
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203513a(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_2c [12];
  int iStack_20;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((iVar1 != 0) && (0x13 < *(byte *)(iVar1 + 1))) {
    if ((_DAT_ram_3fcb51a4 == 0) || (*(code **)(_DAT_ram_3fcb51a4 + 4) == (code *)0x0)) {
      FUN_ram_42033fd8(1,0x80,2,0x3c07f788);
    }
    else {
      uVar2 = *(byte *)(iVar1 + 1) + 2;
      iVar1 = (**(code **)(_DAT_ram_3fcb51a4 + 4))(iVar1,uVar2 & 0xff,auStack_2c);
      if (iVar1 == 0) {
        if ((_DAT_ram_3fcb51a4 != 0) && (*(code **)(_DAT_ram_3fcb51a4 + 0xc) != (code *)0x0)) {
          (**(code **)(_DAT_ram_3fcb51a4 + 0xc))(*(undefined4 *)(param_1 + 0x38),uVar2);
        }
        DAT_ram_3fcb5130 = 10;
        DAT_ram_3fcb512e = 10;
        DAT_ram_3fcb512c = 7;
        if (iStack_20 != 0x1000) {
          DAT_ram_3fcb512c = 7;
          DAT_ram_3fcb512e = 10;
          DAT_ram_3fcb5130 = 10;
          return 1;
        }
        DAT_ram_3fcb512d = 0xb;
        *(undefined1 *)(param_1 + 0x60) = 8;
        return 1;
      }
    }
  }
  return 0;
}

