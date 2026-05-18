
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42012dde(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_ram_40394860();
  uVar2 = (uint)uVar3 - _DAT_ram_3fcc4e08;
  iVar1 = (int)((ulonglong)uVar3 >> 0x20) - _DAT_ram_3fcc4e0c;
  uVar4 = FUN_ram_403919ae();
  _DAT_ram_3fcc4ef0 = uVar2 - (int)uVar4;
  _DAT_ram_3fcc4ef4 =
       ((iVar1 - (uint)((uint)uVar3 < uVar2)) - (int)((ulonglong)uVar4 >> 0x20)) -
       (uint)(uVar2 < _DAT_ram_3fcc4ef0);
  FUN_ram_42010412(0x420a61ae);
  return;
}

