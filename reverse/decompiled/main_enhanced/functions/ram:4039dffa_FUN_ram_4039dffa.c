
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039dffa(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar7 = FUN_ram_42096950();
  uStack_2c = 0;
  (*(code *)&SUB_ram_40011f44)(0,&uStack_2c);
  FUN_ram_420b2cc4(&iStack_28,&iStack_24);
  uVar2 = _DAT_ram_3fcc4434;
  uVar4 = _DAT_ram_3fcc442c + iStack_28;
  iVar5 = (uint)(uVar4 < _DAT_ram_3fcc442c) + iStack_24;
  uVar3 = _DAT_ram_3fcc45cc + uVar4;
  bVar1 = uVar3 < _DAT_ram_3fcc45cc;
  uVar8 = (*(code *)&SUB_ram_40010a00)(uVar4,iVar5,_DAT_ram_3fcc4434,0);
  uVar6 = uVar3 - (int)uVar8;
  uVar4 = uVar6 - (int)uVar7;
  uVar3 = (*(code *)&SUB_ram_400109f0)
                    (uVar4,(((((uint)bVar1 + iVar5) - (int)((ulonglong)uVar8 >> 0x20)) -
                            (uint)(uVar3 < uVar6)) - (int)((ulonglong)uVar7 >> 0x20)) -
                           (uint)(uVar6 < uVar4),uVar2,0);
  uVar4 = 1;
  if (uVar2 <= uStack_2c) {
    uVar4 = uStack_2c / uVar2;
  }
  *param_1 = uVar3 % uVar4;
  *param_2 = uVar4;
  return;
}

