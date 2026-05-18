
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4204a500(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_4c [12];
  undefined1 uStack_40;
  undefined1 uStack_38;
  int iStack_2c;
  undefined4 uStack_1c;
  uint uStack_18;
  
  puVar1 = _DAT_ram_3fcdfff0;
  (*(code *)&SUB_ram_40010488)(auStack_4c,0,0x3c);
  uStack_40 = 1;
  uStack_38 = 1;
  uStack_1c = 0x3c;
  FUN_ram_4204a5e4(0x3fcb82c4,*puVar1);
  uStack_18 = -(uint)(iStack_2c != 0) | 0x3c;
  iVar2 = FUN_ram_403a0a3a(0x3fcb82e8,auStack_4c);
  if ((iVar2 == 0) && (iVar3 = FUN_ram_403a00a6(0x3fcb82c4), iVar2 = iVar3, iVar3 == 0)) {
    if (_DAT_ram_3fcb82d8 < (uint)puVar1[1]) {
      iVar2 = 0x104;
    }
    else if (((uint)puVar1[1] < 0x1000001) || (iVar2 = FUN_ram_403922c4(), iVar2 == 0)) {
      _DAT_ram_3fcb82d8 = puVar1[1];
      _DAT_ram_3fcc51f0 = 0x3fcb82c4;
      iVar2 = iVar3;
    }
  }
  return iVar2;
}

