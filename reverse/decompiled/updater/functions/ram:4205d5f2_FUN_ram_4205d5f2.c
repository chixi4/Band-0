
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205d5f2(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((_DAT_ram_3fcb684c & 1) == 0) {
    return;
  }
  uVar4 = FUN_ram_40391212();
  uVar2 = (int)((ulonglong)uVar4 >> 0x20) - _DAT_ram_3fcb6844;
  uVar3 = (uint)uVar4 - _DAT_ram_3fcb6840;
  uVar1 = (uint)((uint)uVar4 < uVar3);
  if (((int)(uVar2 - uVar1) < 1) && ((uVar2 != uVar1 || (uVar3 < 0xf4241)))) {
    return;
  }
  FUN_ram_4205d590();
  return;
}

