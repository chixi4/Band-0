
int FUN_ram_4207333c(int param_1,char *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iStack_28;
  int aiStack_24 [3];
  
  iStack_28 = 0;
  aiStack_24[0] = 0;
  if (param_4 == (int *)0x0) {
    return 0xca;
  }
  *param_4 = 0;
  if (param_1 == 0) {
    if (param_2 == (char *)0x0) {
      return 200;
    }
    if (param_3 != (uint *)0x0) goto LAB_ram_4207337e;
LAB_ram_4207341c:
    uVar2 = (*(code *)&SUB_ram_40010580)(param_2);
    if (uVar2 == 0) {
      if (*param_2 != '0') {
        return 0xc9;
      }
      goto LAB_ram_4207338c;
    }
    if (0xffff < uVar2) {
      return 0xc9;
    }
  }
  else {
    if (param_3 != (uint *)0x0) {
LAB_ram_4207337e:
      if ((param_3[1] & 0xfffffffd) != 0) {
        return 0xcc;
      }
    }
    if (param_2 != (char *)0x0) goto LAB_ram_4207341c;
LAB_ram_4207338c:
    uVar2 = 0;
  }
  if (param_1 == 0) {
    if ((param_3 == (uint *)0x0) || ((*param_3 & 1) == 0)) {
      iStack_28 = 0x100007f;
    }
    else {
      iStack_28 = 0;
    }
  }
  else if ((param_3 == (uint *)0x0) || ((*param_3 & 4) == 0)) {
    iVar1 = FUN_ram_4205a262(param_1,&iStack_28);
    if (iVar1 != 0) {
      return 0xca;
    }
  }
  else {
    iVar1 = FUN_ram_4205903c(param_1,&iStack_28);
    if (iVar1 == 0) {
      return 200;
    }
  }
  if (iStack_28 == 0) {
    iVar1 = FUN_ram_4207322e(0,param_1,param_3,uVar2,aiStack_24,0);
    if (iVar1 == 0) {
LAB_ram_420733f8:
      *param_4 = aiStack_24[0];
      return 0;
    }
  }
  else {
    iVar1 = FUN_ram_4207322e(iStack_28,param_1,param_3,uVar2,aiStack_24,0);
    if (iVar1 == 0) {
      if (aiStack_24[0] != 0) {
        *(undefined4 *)(aiStack_24[0] + 0x1c) = 0;
      }
      goto LAB_ram_420733f8;
    }
    FUN_ram_4207331c(0);
  }
  *param_4 = 0;
  return iVar1;
}

