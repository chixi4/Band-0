
undefined4 FUN_ram_420512a2(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_ram_4205032e();
  if (puVar1 != (undefined4 *)0x0) {
    param_2 = param_2 & (int)~param_2 >> 0x1f;
    if (0xff < (int)param_2) {
      param_2 = 0xff;
    }
    iVar2 = FUN_ram_4205ceda(*puVar1,param_2 & 0xff);
    if (iVar2 == 0) {
      FUN_ram_4205027e(puVar1);
      return 0;
    }
    if ((*(uint *)*puVar1 & 0xf0) == 0x10) {
      iVar4 = FUN_ram_4205e6c6();
      if (iVar4 != 0) {
        puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar5 = FUN_ram_4205e6c6(iVar2);
        *puVar3 = uVar5;
      }
    }
    else {
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      *puVar3 = 0x5f;
    }
    FUN_ram_4205027e(puVar1);
  }
  return 0xffffffff;
}

