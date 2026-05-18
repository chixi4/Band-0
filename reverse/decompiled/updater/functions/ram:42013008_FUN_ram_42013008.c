
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42013008(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_ram_42011284();
  uVar2 = (uint)uVar3 - _DAT_ram_3fcb6580;
  iVar1 = (int)((ulonglong)uVar3 >> 0x20) - _DAT_ram_3fcb6584;
  uVar4 = FUN_ram_40391212();
  _DAT_ram_3fcb6650 = uVar2 - (int)uVar4;
  _DAT_ram_3fcb6654 =
       ((iVar1 - (uint)((uint)uVar3 < uVar2)) - (int)((ulonglong)uVar4 >> 0x20)) -
       (uint)(uVar2 < _DAT_ram_3fcb6650);
  FUN_ram_420103b8(0x42002ab0);
  return;
}

