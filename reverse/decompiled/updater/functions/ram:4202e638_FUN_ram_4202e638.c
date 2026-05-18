
int FUN_ram_4202e638(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [20];
  
  if (0x400 < param_3) {
    return -0x36;
  }
  if (0x100 < param_5) {
    return -0x38;
  }
  (*(code *)&SUB_ram_40010488)(auStack_60,0,0x30);
  if ((*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x10)) || (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = FUN_ram_4202e5b4(param_1,param_4,param_5);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else if ((param_5 != 0) &&
          ((iVar2 = FUN_ram_4202e1ce(auStack_60,param_4,param_5), iVar2 != 0 ||
           (iVar2 = FUN_ram_4202e3a4(param_1,auStack_60), iVar2 != 0)))) goto LAB_ram_4202e6d0;
  for (; param_3 != 0; param_3 = param_3 - uVar1) {
    FUN_ram_4202e158(param_1);
    iVar2 = FUN_ram_42024198(param_1 + 0x20,1,param_1,auStack_30);
    if (iVar2 != 0) goto LAB_ram_4202e6d0;
    uVar1 = param_3;
    if (0x10 < param_3) {
      uVar1 = 0x10;
    }
    FUN_ram_40399daa(param_2,auStack_30,uVar1);
    param_2 = param_2 + uVar1;
  }
  iVar2 = FUN_ram_4202e3a4(param_1,auStack_60);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
LAB_ram_4202e6d0:
  FUN_ram_420293a6(auStack_60,0x40);
  return iVar2;
}

