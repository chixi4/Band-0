
int FUN_ram_4206c810(undefined4 param_1,undefined4 param_2,int param_3,int param_4,
                    undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_4 + 0x428) = *(undefined4 *)(param_4 + 0x768);
  iVar3 = param_4 + 0x27c;
  FUN_ram_4206ee64(param_4);
  FUN_ram_4202e550(iVar3);
  iVar2 = param_4 + 0x3bc;
  FUN_ram_4206f254(iVar2);
  FUN_ram_4203132c(param_4 + 0xd8);
  iVar1 = FUN_ram_4202e5ba(iVar3,0x4202136e,param_4 + 0xd8,0,0);
  if (iVar1 == 0) {
    FUN_ram_4206ee78(iVar2,0x4201e722,iVar3);
    if (*(int *)(param_4 + 0x78c) == 0) {
      iVar1 = FUN_ram_4206c69c(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) goto LAB_ram_4206c882;
      iVar1 = *(int *)(param_3 + 0x5c);
      if (iVar1 != 2) {
        if (iVar1 == 1) {
          *(undefined4 *)(param_4 + 0x3c0) = 0x303;
          *(undefined4 *)(param_4 + 0x3bc) = 0x303;
        }
        else if (iVar1 != 0) {
          iVar1 = 0x102;
          goto LAB_ram_4206c882;
        }
      }
    }
    else if (*(int *)(param_4 + 0x78c) == 1) {
      if (param_5 == (undefined4 *)0x0) {
        return 0x102;
      }
      iVar1 = (*(code *)*param_5)(param_3,param_4);
      if (iVar1 != 0) goto LAB_ram_4206c882;
    }
    iVar1 = FUN_ram_4206f340(param_4,iVar2);
    if (iVar1 == 0) {
      FUN_ram_4206ee7e(param_4,param_4 + 0x428,0x42060ff0,0x42060f86,0);
      return 0;
    }
    FUN_ram_4206c2a6(*(undefined4 *)(param_4 + 0x790),2,-iVar1);
    iVar1 = 0x8017;
  }
  else {
    FUN_ram_4206c2a6(*(undefined4 *)(param_4 + 0x790),2,-iVar1);
    iVar1 = 0x8011;
  }
LAB_ram_4206c882:
  FUN_ram_4206c604(param_4);
  return iVar1;
}

