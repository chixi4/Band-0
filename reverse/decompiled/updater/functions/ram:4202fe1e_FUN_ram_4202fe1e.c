
int FUN_ram_4202fe1e(int param_1,int param_2,uint param_3,uint *param_4,char *param_5,uint param_6)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (1 < param_3) {
    return -0x4f80;
  }
  uVar3 = FUN_ram_42024bb6(param_1 + 4);
  iVar4 = FUN_ram_4202f906(param_1);
  iVar1 = -0x4e80;
  if (iVar4 == 2) {
    *param_4 = uVar3;
    if (param_6 < uVar3) {
      return -0x4f00;
    }
    iVar4 = FUN_ram_42024c50(param_2,param_5,uVar3);
    iVar1 = 0;
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  iVar4 = FUN_ram_4202f906(param_1);
  if (iVar4 != 1) {
    return iVar1;
  }
  iVar1 = FUN_ram_42024dea(param_2 + 0x10,0);
  if (iVar1 == 0) {
    if (param_6 != 0) {
      *param_5 = '\0';
      *param_4 = 1;
      return 0;
    }
  }
  else if (param_3 == 0) {
    uVar5 = uVar3 * 2 + 1;
    *param_4 = uVar5;
    if (uVar5 <= param_6) {
      *param_5 = '\x04';
      iVar1 = FUN_ram_42024c5e(param_2,param_5 + 1,uVar3);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = uVar3 + 1;
      param_2 = param_2 + 8;
LAB_ram_4202fef0:
      iVar1 = FUN_ram_42024c5e(param_2,param_5 + iVar1,uVar3);
      return iVar1;
    }
  }
  else {
    *param_4 = uVar3 + 1;
    if (uVar3 + 1 <= param_6) {
      cVar2 = FUN_ram_42024ae6(param_2 + 8,0);
      *param_5 = cVar2 + '\x02';
      iVar1 = 1;
      goto LAB_ram_4202fef0;
    }
  }
  return -0x4f00;
}

