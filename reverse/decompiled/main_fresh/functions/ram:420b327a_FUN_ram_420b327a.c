
undefined4
FUN_ram_420b327a(int param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_2 == "scope, not add features.") && (param_3 == -1)) {
    uVar2 = FUN_ram_420b30f4(param_1,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  puVar3 = (undefined4 *)0x0;
  puVar7 = *(undefined4 **)(param_1 + 4);
  puVar1 = puVar7;
  puVar6 = (undefined4 *)0x0;
  while (puVar5 = puVar1, puVar5 != (undefined4 *)0x0) {
    if ((char *)*puVar5 == param_2) {
      puVar3 = puVar5;
    }
    puVar6 = puVar5;
    puVar1 = (undefined4 *)puVar5[3];
  }
  if ((((puVar6 != (undefined4 *)0x0) && (puVar3 != (undefined4 *)0x0)) &&
      ((puVar3[2] == 0 || (param_3 != -1)))) &&
     ((((char *)*puVar6 == param_2 || (puVar6[2] == 0)) || (param_3 != -1)))) {
    uVar2 = FUN_ram_420b31aa(puVar3,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  puVar3 = (undefined4 *)FUN_ram_4039c08e(1,0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_2;
    puVar3[1] = 0;
    puVar3[2] = 0;
    iVar4 = FUN_ram_420b31aa(puVar3,param_3,param_4,param_5,param_6,param_7);
    if (iVar4 == 0) {
      if (puVar6 == (undefined4 *)0x0) {
        puVar3[3] = puVar7;
        *(undefined4 **)(param_1 + 4) = puVar3;
        return 0;
      }
      puVar3[3] = puVar6[3];
      puVar6[3] = puVar3;
      return 0;
    }
    thunk_FUN_ram_40390634(puVar3);
  }
  return 0x101;
}

