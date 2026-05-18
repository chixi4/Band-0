
int FUN_ram_42016b44(uint param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uStack_84;
  char acStack_80 [95];
  undefined1 uStack_21;
  
  iVar1 = FUN_ram_4201d67a(0x3c070d3c,1,&uStack_84);
  if (iVar1 != 0) {
    uVar2 = FUN_ram_40398d1c();
    uVar3 = FUN_ram_4201ae60(iVar1);
    FUN_ram_40398c14(1,0x3c070cd4,0x3c070d78,uVar2,0x3c070cd4,0x3c070d3c,uVar3);
    return iVar1;
  }
  iVar1 = FUN_ram_4201d722(uStack_84,0x3c070e50,param_1 & 0xff);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_ram_4201d7ca(uStack_84,0x3c070e58,param_2), uVar2 = uStack_84, iVar1 == 0)) {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      FUN_ram_4201d68c(uStack_84,0x3c070e64);
    }
    else {
      uVar4 = (*(code *)&SUB_ram_400104a8)(param_3);
      pcVar5 = param_3;
      if (0x5f < uVar4) {
        FUN_ram_4039a252(acStack_80,param_3);
        uStack_21 = 0;
        pcVar5 = acStack_80;
      }
      iVar1 = FUN_ram_4201d854(uVar2,0x3c070e64,pcVar5);
      if (iVar1 != 0) goto LAB_ram_42016c1e;
    }
    iVar1 = FUN_ram_4201d81a(uStack_84);
    if (iVar1 == 0) {
      uVar2 = FUN_ram_40398d1c();
      if (param_3 == (char *)0x0) {
        param_3 = (char *)0x3c070e48;
      }
      FUN_ram_40398c14(3,0x3c070cd4,0x3c070e70,uVar2,0x3c070cd4,param_1,param_2,param_3);
    }
  }
LAB_ram_42016c1e:
  FUN_ram_4201db22(uStack_84);
  return iVar1;
}

