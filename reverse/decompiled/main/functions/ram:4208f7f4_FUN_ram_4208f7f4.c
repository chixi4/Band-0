
int FUN_ram_4208f7f4(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 100) == 0) || (pcVar1 = (char *)FUN_ram_4207f212(), *pcVar1 == '\0')) {
    if (param_2 == 0) {
      return 1;
    }
    iVar4 = *(int *)(gp + -0xb4);
    uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x24) + 1);
    if (((*(uint *)(iVar4 + 4) != uVar5) ||
        (iVar2 = FUN_ram_4039c0e0(iVar4 + 8,*(int *)(param_1 + 0x24) + 2,uVar5), iVar2 != 0)) &&
       (uVar5 != 0)) {
      return param_2;
    }
    if ((*(char *)(iVar4 + 0x35f) == '\t') && (*(int *)(param_1 + 100) != 0)) {
      puVar3 = &DAT_ram_3c0fdab4;
    }
    else {
      if (*(char *)(iVar4 + 0x361) != '\0') {
        return param_2;
      }
      if (*(int *)(param_1 + 100) == 0) {
        return param_2;
      }
      puVar3 = &DAT_ram_3c0fdaec;
    }
  }
  else {
    puVar3 = &DAT_ram_3c0fda88;
  }
  FUN_ram_4207a038(1,8,4,puVar3);
  return 0;
}

