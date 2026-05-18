
undefined4 FUN_ram_40394308(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar2 = FUN_ram_40390e5c();
  uVar3 = FUN_ram_40394110(param_1,param_2);
  uVar7 = uVar2 * param_2;
  uVar2 = (uint)((ulonglong)uVar2 * (ulonglong)param_2 >> 0x20);
  if (param_1 == 2) {
    uVar6 = uVar2 * 1000000 + (int)((ulonglong)uVar7 * 1000000 >> 0x20);
    uVar1 = uVar7 * 1000000 >> 0xf | uVar6 * 0x20000;
    uVar6 = uVar6 >> 0xf;
    lVar8 = (*(code *)&SUB_ram_400109f0)(uVar1,uVar6,2000,0);
    uVar5 = uVar1 - (int)lVar8;
    if ((uVar6 - (int)((ulonglong)lVar8 >> 0x20) != (uint)(uVar1 < uVar5)) || (uVar3 < uVar5)) {
      return 0;
    }
    lVar8 = lVar8 + CONCAT44(uVar6,uVar1);
    if (((int)((ulonglong)lVar8 >> 0x20) == 0) && ((uint)lVar8 < uVar3)) {
      return 0;
    }
  }
  uVar5 = uVar3 * 0x80000 - 1;
  uVar1 = (uVar7 >> 1 | uVar2 << 0x1f) + uVar5;
  uVar4 = (*(code *)&SUB_ram_400109f0)
                    (uVar1,(uint)(uVar1 < uVar5) +
                           ((uVar3 >> 0xd) - (uint)(uVar3 * 0x80000 == 0)) + (uVar2 >> 1),uVar7,
                     uVar2);
  return uVar4;
}

