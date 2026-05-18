
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b61ae(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_30 [28];
  
  FUN_ram_420b1060(auStack_30,0);
  FUN_ram_420127d4(auStack_30,0);
  uVar3 = FUN_ram_40394860();
  uVar4 = FUN_ram_40391914();
  lVar5 = FUN_ram_4039c01a();
  uVar1 = (uint)uVar3 - (int)uVar4;
  uVar2 = _DAT_ram_3fcc4ee0 - uVar1;
  lVar5 = lVar5 + CONCAT44((_DAT_ram_3fcc4ee4 -
                           (((int)((ulonglong)uVar3 >> 0x20) - (int)((ulonglong)uVar4 >> 0x20)) -
                           (uint)((uint)uVar3 < uVar1))) - (uint)(_DAT_ram_3fcc4ee0 < uVar2),uVar2);
  FUN_ram_4039c04e((int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
  return;
}

