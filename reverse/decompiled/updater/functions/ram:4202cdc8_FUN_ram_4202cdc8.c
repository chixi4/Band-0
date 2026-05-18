
int FUN_ram_4202cdc8(int param_1,code *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,undefined4 param_7,undefined1 *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  if (param_2 == (code *)0x0) {
    return -0x4080;
  }
  iVar2 = FUN_ram_4202be78(*(undefined4 *)(param_1 + 0x74));
  if (iVar2 != 0) {
    uVar5 = param_6 + 2 + iVar2 * 2;
    uVar1 = *(uint *)(param_1 + 4);
    if ((param_6 <= uVar5) && (uVar5 <= uVar1)) {
      (*(code *)&SUB_ram_40010488)(param_8,0,uVar1);
      puVar7 = param_8 + 1;
      *param_8 = 0;
      iVar3 = (*param_2)(param_3,puVar7,iVar2);
      if (iVar3 != 0) {
        return iVar3 + -0x4480;
      }
      puVar6 = puVar7 + iVar2;
      iVar3 = FUN_ram_42028dc8(*(undefined4 *)(param_1 + 0x74));
      if (iVar3 != 0) {
        iVar3 = FUN_ram_420290ee(iVar3,param_4,param_5,puVar6);
        if (iVar3 != 0) {
          return iVar3;
        }
        puVar6[((uVar1 - param_6) + -2) - iVar2] = 1;
        if (param_6 != 0) {
          FUN_ram_40399daa(puVar6 + (((uVar1 - param_6) + -2) - iVar2) + 1,param_7,param_6);
        }
        iVar3 = (uVar1 - 1) - iVar2;
        iVar4 = FUN_ram_4202be88(param_8 + iVar2 + 1,iVar3,puVar7,iVar2,
                                 *(undefined4 *)(param_1 + 0x74));
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar2 = FUN_ram_4202be88(puVar7,iVar2,param_8 + iVar2 + 1,iVar3,
                                 *(undefined4 *)(param_1 + 0x74));
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_ram_4202c80e(param_1,param_8,param_8);
        return iVar2;
      }
    }
  }
  return -0x4080;
}

