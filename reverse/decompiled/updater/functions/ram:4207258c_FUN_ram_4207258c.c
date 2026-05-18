
int FUN_ram_4207258c(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return -0x2800;
  }
  if ((param_3 == 0) ||
     ((*(char *)(param_2 + param_3 + -1) != '\0' ||
      (iVar2 = (*(code *)&SUB_ram_400104ac)(param_2,0x3c07457c), iVar2 == 0)))) {
    iVar2 = FUN_ram_42072582(param_1,param_2,param_3);
    return iVar2;
  }
  iVar2 = 0;
  bVar1 = false;
  iVar4 = 0;
  while (1 < param_3) {
    FUN_ram_42068242(&uStack_4c);
    iVar3 = FUN_ram_4206824e(&uStack_4c,0x3c07457c,0x3c074598,param_2,0,0,&local_50);
    if (iVar3 == 0) {
      param_3 = param_3 - local_50;
      param_2 = param_2 + local_50;
      iVar3 = FUN_ram_42072582(param_1,uStack_4c,uStack_48);
      FUN_ram_420685ba(&uStack_4c);
      if (iVar3 != 0) {
        if (iVar3 == -0x2880) {
          return -0x2880;
        }
        goto LAB_ram_42072666;
      }
      bVar1 = true;
    }
    else {
      if (iVar3 == -0x1480) {
        return -0x1480;
      }
      if (iVar3 == -0x1080) break;
      FUN_ram_420685ba(&uStack_4c);
      param_3 = param_3 - local_50;
      param_2 = param_2 + local_50;
LAB_ram_42072666:
      if (iVar4 != 0) {
        iVar3 = iVar4;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar3;
    }
  }
  if (bVar1) {
    return iVar2;
  }
  if (iVar4 == 0) {
    return -0x2780;
  }
  return iVar4;
}

