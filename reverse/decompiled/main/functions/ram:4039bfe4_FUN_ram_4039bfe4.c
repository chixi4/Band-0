
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039bfe4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_ram_40394860();
  uVar2 = FUN_ram_40391914();
  _DAT_ram_3fcc4ee0 = (uint)uVar1 - (int)uVar2;
  _DAT_ram_3fcc4ee4 =
       ((int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20)) -
       (uint)((uint)uVar1 < _DAT_ram_3fcc4ee0);
  return;
}

