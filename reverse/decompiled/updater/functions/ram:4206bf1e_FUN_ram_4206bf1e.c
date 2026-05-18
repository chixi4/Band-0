
undefined4
FUN_ram_4206bf1e(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar5 = *(int *)(param_5 + 0x774);
  if (iVar5 == 1) {
    if ((param_4 != 0) && (*(char *)(param_4 + 0x2c) != '\0')) {
LAB_ram_4206c04a:
      iVar5 = *(int *)(param_4 + 0x30);
      iStack_30 = iVar5 / 1000;
      iStack_2c = iStack_30 >> 0x1f;
      iStack_28 = (iVar5 % 1000) * 1000;
      piVar4 = (int *)0x0;
      if (0 < iVar5) {
        piVar4 = &iStack_30;
      }
      iVar5 = FUN_ram_42015744(*(int *)(param_5 + 0x768) + 1,param_5 + 0x778,param_5 + 0x780,0,
                               piVar4);
      if (iVar5 == 0) {
        return 0;
      }
      uVar3 = *(uint *)(param_5 + 0x768);
      if (uVar3 < 0x40) {
        iVar5 = ((int)uVar3 >> 5) * 4 + param_5;
        uVar6 = 1 << (uVar3 & 0x1f);
        if (((*(uint *)(iVar5 + 0x778) & uVar6) != 0) || ((uVar6 & *(uint *)(iVar5 + 0x780)) != 0))
        {
          uStack_34 = 4;
          iVar5 = FUN_ram_42050212(uVar3,0xfff,0x1007,auStack_38,&uStack_34);
          if (iVar5 < 0) {
            uVar1 = *(undefined4 *)(param_5 + 0x790);
            puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
            FUN_ram_4206c2a6(uVar1,1,*puVar2);
            iVar5 = 0x8005;
            goto LAB_ram_4206c0dc;
          }
        }
      }
    }
  }
  else {
    if (iVar5 == 2) goto LAB_ram_4206bff0;
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_5 + 0x768) = 0xffffffff;
    if ((param_4 != 0) && (*(char *)(param_4 + 0x4c) == '\0')) {
      FUN_ram_42070f80(param_5 + 0x428);
      *(undefined1 *)(param_5 + 0x788) = 1;
    }
    iVar5 = FUN_ram_4206bc2e(param_1,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0x790),
                             param_5 + 0x768);
    if (iVar5 != 0) {
      FUN_ram_4206c2a6(*(undefined4 *)(param_5 + 0x790),4,iVar5);
      return 0xffffffff;
    }
    if (*(char *)(param_5 + 0x788) == '\0') {
      *(undefined4 *)(param_5 + 0x76c) = 0x4205bc24;
      *(undefined4 *)(param_5 + 0x770) = 0x4205bc1a;
      return 1;
    }
    if ((param_4 != 0) && (*(char *)(param_4 + 0x2c) != '\0')) {
      uVar3 = *(uint *)(param_5 + 0x768);
      *(undefined4 *)(param_5 + 0x77c) = 0;
      *(undefined4 *)(param_5 + 0x778) = 0;
      if (uVar3 < 0x40) {
        iVar5 = ((int)uVar3 >> 5) * 4 + param_5;
        *(uint *)(iVar5 + 0x778) = *(uint *)(iVar5 + 0x778) | 1 << (uVar3 & 0x1f);
      }
      *(undefined4 *)(param_5 + 0x780) = *(undefined4 *)(param_5 + 0x778);
      *(undefined4 *)(param_5 + 0x784) = *(undefined4 *)(param_5 + 0x77c);
      *(undefined4 *)(param_5 + 0x774) = 1;
      goto LAB_ram_4206c04a;
    }
    *(undefined4 *)(param_5 + 0x774) = 1;
  }
  iVar5 = FUN_ram_4206c810(param_1,param_2,param_4,param_5,0);
  if (iVar5 == 0) {
    *(undefined4 *)(param_5 + 0x76c) = 0x4205c368;
    *(undefined4 *)(param_5 + 0x770) = 0x4205c3c6;
    *(undefined4 *)(param_5 + 0x774) = 2;
LAB_ram_4206bff0:
    uVar1 = FUN_ram_4206c582(param_5,param_4);
    return uVar1;
  }
LAB_ram_4206c0dc:
  FUN_ram_4206c2a6(*(undefined4 *)(param_5 + 0x790),4,iVar5);
  *(undefined4 *)(param_5 + 0x774) = 3;
  return 0xffffffff;
}

