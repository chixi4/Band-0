
uint FUN_ram_4204fbe6(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                     uint param_5,uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int aiStack_30 [3];
  undefined2 uStack_24;
  
  puVar1 = (undefined4 *)FUN_ram_4204ed60();
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  if ((*(uint *)*puVar1 & 0xf0) == 0x10) {
    FUN_ram_4204ecbc();
    uVar2 = FUN_ram_4204fd20(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (0xffff < param_3) {
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar3 = 0x7a;
    goto LAB_ram_4204fc4e;
  }
  if (param_5 == 0) {
joined_r0x4204fd02:
    if (param_6 == 0) {
      aiStack_30[1] = 0;
      aiStack_30[0] = 0;
      if (param_5 == 0) {
        aiStack_30[2] = 0;
        uStack_24 = 0;
      }
      else {
        aiStack_30[2] = *(undefined4 *)(param_5 + 4);
        uStack_24 = FUN_ram_4205073e(*(undefined2 *)(param_5 + 2));
      }
      iVar4 = FUN_ram_4205b20a(aiStack_30,param_3 & 0xffff);
      iVar6 = -1;
      if (iVar4 != 0) {
        FUN_ram_40399daa(*(undefined4 *)(aiStack_30[0] + 4),param_2,param_3);
        iVar6 = FUN_ram_42059f08(*puVar1,aiStack_30);
      }
      FUN_ram_4205b244(aiStack_30);
      iVar4 = FUN_ram_4205b1bc(iVar6);
      if (iVar4 != 0) {
        puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar5 = FUN_ram_4205b1bc(iVar6);
        *puVar3 = uVar5;
      }
      FUN_ram_4204ecbc(puVar1);
      if (iVar6 != 0) {
        return 0xffffffff;
      }
      return param_3;
    }
  }
  else if ((param_6 == 0x10) && (*(char *)(param_5 + 1) == '\x02')) {
    param_6 = param_5 & 3;
    goto joined_r0x4204fd02;
  }
  iVar4 = FUN_ram_4205b1bc(0xfffffff0);
  if (iVar4 != 0) {
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar5 = FUN_ram_4205b1bc(0xfffffff0);
    *puVar3 = uVar5;
  }
LAB_ram_4204fc4e:
  FUN_ram_4204ecbc(puVar1);
  return 0xffffffff;
}

