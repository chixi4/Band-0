
int FUN_ram_420714aa(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_1a0 [384];
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (0x180 < uVar3) {
    return -0x38;
  }
  if (0x180 - uVar3 < param_4) {
    return -0x38;
  }
  if ((0x180 - param_4) - uVar3 < param_3) {
    return -0x38;
  }
  (*(code *)&SUB_ram_40010488)(auStack_1a0,0);
  iVar1 = (**(code **)(param_1 + 0x138))(*(undefined4 *)(param_1 + 0x13c),auStack_1a0,uVar3);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (param_4 != 0) {
      iVar2 = (**(code **)(param_1 + 0x138))
                        (*(undefined4 *)(param_1 + 0x13c),auStack_1a0 + iVar1,param_4);
      if (iVar2 != 0) goto LAB_ram_4207151a;
      iVar1 = iVar1 + param_4;
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      FUN_ram_4039c11e(auStack_1a0 + iVar1,param_2,param_3);
      iVar1 = iVar1 + param_3;
    }
    iVar1 = FUN_ram_42071220(auStack_1a0,auStack_1a0,iVar1);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_420713f6(param_1,auStack_1a0), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    FUN_ram_4206d7da(auStack_1a0,0x180);
  }
  else {
LAB_ram_4207151a:
    iVar1 = -0x34;
  }
  return iVar1;
}

