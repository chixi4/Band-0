
undefined4
FUN_ram_4207322e(undefined4 param_1,int param_2,uint *param_3,undefined2 param_4,int *param_5,
                int param_6)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    uVar2 = 0;
    iVar5 = 0x30;
  }
  else {
    uVar2 = (*(code *)&SUB_ram_400104a8)(param_2);
    iVar5 = uVar2 + 0x31;
    if (0x100 < uVar2) {
      return 0xca;
    }
  }
  iVar3 = FUN_ram_42051500(0xc);
  uVar4 = 0xcb;
  if (iVar3 != 0) {
    (*(code *)&SUB_ram_40010488)(iVar3,0,iVar5);
    *(undefined2 *)(iVar3 + 0x20) = 0x210;
    *(undefined4 *)(iVar3 + 0x24) = param_1;
    uVar1 = FUN_ram_4205073e(param_4);
    *(undefined2 *)(iVar3 + 0x22) = uVar1;
    *(undefined4 *)(iVar3 + 4) = 2;
    if (param_3 != (uint *)0x0) {
      *(uint *)(iVar3 + 8) = param_3[2];
      *(uint *)(iVar3 + 0xc) = param_3[3];
    }
    if ((((param_6 == 0) && (param_2 != 0)) && (param_3 != (uint *)0x0)) && ((*param_3 & 2) != 0)) {
      *(int *)(iVar3 + 0x18) = iVar3 + 0x30;
      iVar5 = FUN_ram_40399daa(iVar3 + 0x30,param_2,uVar2);
      *(undefined1 *)(iVar5 + uVar2) = 0;
    }
    *(undefined4 *)(iVar3 + 0x10) = 0x10;
    *(int *)(iVar3 + 0x14) = iVar3 + 0x20;
    *param_5 = iVar3;
    uVar4 = 0;
  }
  return uVar4;
}

