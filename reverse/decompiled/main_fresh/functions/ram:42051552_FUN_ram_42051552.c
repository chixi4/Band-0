
undefined4 FUN_ram_42051552(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)FUN_ram_4205032e();
  if (puVar1 != (undefined4 *)0x0) {
    if ((*(uint *)*puVar1 & 0xf0) != 0x10) {
      FUN_ram_4205027e();
      uVar2 = FUN_ram_42051418(param_1,param_2,param_3,param_4,0,0);
      return uVar2;
    }
    uStack_14 = 0;
    iVar3 = FUN_ram_4205d014((uint *)*puVar1,param_2,param_3,
                             (-(uint)((param_4 & 0x10) == 0) & 0xfffffffe) + 3 & 0xff |
                             (int)param_4 >> 1 & 4U,&uStack_14);
    iVar4 = FUN_ram_4205e6c6();
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar2 = FUN_ram_4205e6c6(iVar3);
      *puVar5 = uVar2;
    }
    FUN_ram_4205027e(puVar1);
    if (iVar3 == 0) {
      return uStack_14;
    }
  }
  return 0xffffffff;
}

