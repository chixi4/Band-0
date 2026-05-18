
int FUN_ram_420ab9a0(int param_1,char *param_2,uint *param_3,int *param_4)

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
    if (param_3 != (uint *)0x0) goto LAB_ram_420ab9e2;
LAB_ram_420aba80:
    uVar2 = (*(code *)&SUB_ram_40010580)(param_2);
    if (uVar2 == 0) {
      if (*param_2 != '0') {
        return 0xc9;
      }
      goto LAB_ram_420ab9f0;
    }
    if (0xffff < uVar2) {
      return 0xc9;
    }
  }
  else {
    if (param_3 != (uint *)0x0) {
LAB_ram_420ab9e2:
      if ((param_3[1] & 0xfffffffd) != 0) {
        return 0xcc;
      }
    }
    if (param_2 != (char *)0x0) goto LAB_ram_420aba80;
LAB_ram_420ab9f0:
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
    iVar1 = FUN_ram_4205d3a4(param_1,&iStack_28);
    if (iVar1 != 0) {
      return 0xca;
    }
  }
  else {
    iVar1 = FUN_ram_4205be7a(param_1,&iStack_28);
    if (iVar1 == 0) {
      return 200;
    }
  }
  if (iStack_28 == 0) {
    iVar1 = FUN_ram_420ab892(0,param_1,param_3,uVar2,aiStack_24,0);
    if (iVar1 == 0) {
LAB_ram_420aba5c:
      *param_4 = aiStack_24[0];
      return 0;
    }
  }
  else {
    iVar1 = FUN_ram_420ab892(iStack_28,param_1,param_3,uVar2,aiStack_24,0);
    if (iVar1 == 0) {
      if (aiStack_24[0] != 0) {
        *(undefined4 *)(aiStack_24[0] + 0x1c) = 0;
      }
      goto LAB_ram_420aba5c;
    }
    FUN_ram_420ab980(0);
  }
  *param_4 = 0;
  return iVar1;
}

