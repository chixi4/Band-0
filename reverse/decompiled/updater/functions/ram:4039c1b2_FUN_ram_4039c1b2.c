
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039c1b2(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar1 = 0;
  if (_DAT_ram_3fcb5394 != 0) {
    uVar7 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))(0);
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (*(char *)(gp + 0x100) == '\0') {
      uVar1 = 1;
      if ((iVar3 - _DAT_ram_3fcb53cc == (uint)(uVar2 < uVar2 - _DAT_ram_3fcb53c8)) &&
         (uVar2 - _DAT_ram_3fcb53c8 < *(uint *)(gp + 0xe8))) {
        uVar1 = 0;
      }
    }
    else {
      uVar6 = (uint)*(ushort *)(gp + 0x114) * 0x7d000;
      uVar4 = (iVar3 - _DAT_ram_3fcb5554) - (uint)(uVar2 < uVar2 - _DAT_ram_3fcb5550);
      uVar1 = 1;
      uVar5 = (int)uVar6 >> 0x1f;
      if ((uVar4 < uVar5) || ((uVar5 == uVar4 && (uVar2 - _DAT_ram_3fcb5550 < uVar6)))) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

