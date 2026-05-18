
int FUN_ram_420314ac(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_1a0 [384];
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar3 = uVar1;
  if (param_4 != 0) {
    uVar3 = uVar1 * 3 >> 1;
  }
  if (0x100 < param_3) {
    return -5;
  }
  if (0x180 < uVar3 + param_3) {
    return -5;
  }
  (*(code *)&SUB_ram_40010488)(auStack_1a0,0);
  iVar2 = (**(code **)(param_1 + 0x5c))(*(undefined4 *)(param_1 + 0x60),auStack_1a0,uVar1);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x50);
    if (param_4 != 0) {
      iVar2 = (**(code **)(param_1 + 0x5c))
                        (*(undefined4 *)(param_1 + 0x60),auStack_1a0 + uVar3,uVar3 >> 1);
      if (iVar2 != 0) goto LAB_ram_42031512;
      uVar3 = uVar3 + (*(uint *)(param_1 + 0x50) >> 1);
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      FUN_ram_40399daa(auStack_1a0 + uVar3,param_2,param_3);
      uVar3 = uVar3 + param_3;
    }
    iVar2 = FUN_ram_420313cc(param_1,auStack_1a0,uVar3);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    FUN_ram_420293a6(auStack_1a0,uVar3);
  }
  else {
LAB_ram_42031512:
    iVar2 = -9;
  }
  return iVar2;
}

