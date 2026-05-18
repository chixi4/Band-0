
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039e586(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar1 = 0;
  if (_DAT_ram_3fcc4424 != 0) {
    uVar7 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))(0);
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (*(char *)(gp + 0x234) == '\0') {
      uVar1 = 1;
      if ((iVar3 - _DAT_ram_3fcc445c == (uint)(uVar2 < uVar2 - _DAT_ram_3fcc4458)) &&
         (uVar2 - _DAT_ram_3fcc4458 < *(uint *)(gp + 0x21c))) {
        uVar1 = 0;
      }
    }
    else {
      uVar6 = (uint)*(ushort *)(gp + 0x248) * 0x7d000;
      uVar4 = (iVar3 - _DAT_ram_3fcc45e4) - (uint)(uVar2 < uVar2 - _DAT_ram_3fcc45e0);
      uVar1 = 1;
      uVar5 = (int)uVar6 >> 0x1f;
      if ((uVar4 < uVar5) || ((uVar5 == uVar4 && (uVar2 - _DAT_ram_3fcc45e0 < uVar6)))) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

