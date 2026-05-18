
void FUN_ram_420355ea(uint *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar2 = (int)*param_4;
  iVar1 = FUN_ram_42035096(param_3,iVar2);
  if (iVar1 == 0) {
    FUN_ram_4203554e(auStack_60,param_2,param_2,param_4);
    FUN_ram_4203554e(auStack_40,param_1,auStack_60,param_4);
    FUN_ram_4203554e(auStack_60,auStack_60,auStack_60,param_4);
    FUN_ram_4203554e(param_2,param_2,param_3,param_4);
    FUN_ram_4203554e(param_3,param_3,param_3,param_4);
    pcVar3 = param_4 + 4;
    FUN_ram_4203537e(param_1,param_1,param_3,pcVar3,iVar2);
    FUN_ram_4203537e(param_3,param_3,param_3,pcVar3,iVar2);
    FUN_ram_420353c8(param_3,param_1,param_3,pcVar3,iVar2);
    FUN_ram_4203554e(param_1,param_1,param_3,param_4);
    FUN_ram_4203537e(param_3,param_1,param_1,pcVar3,iVar2);
    FUN_ram_4203537e(param_1,param_1,param_3,pcVar3,iVar2);
    if ((*param_1 & 1) == 0) {
      FUN_ram_42034f30(param_1,iVar2);
    }
    else {
      iVar1 = FUN_ram_42034ee8(param_1,param_1,pcVar3,iVar2);
      FUN_ram_42034f30(param_1,iVar2);
      param_1[iVar2 + -1] = param_1[iVar2 + -1] | iVar1 << 0x1f;
    }
    FUN_ram_4203554e(param_3,param_1,param_1,param_4);
    FUN_ram_420353c8(param_3,param_3,auStack_40,pcVar3,iVar2);
    FUN_ram_420353c8(param_3,param_3,auStack_40,pcVar3,iVar2);
    FUN_ram_420353c8(auStack_40,auStack_40,param_3,pcVar3,iVar2);
    FUN_ram_4203554e(param_1,param_1,auStack_40,param_4);
    FUN_ram_420353c8(auStack_60,param_1,auStack_60,pcVar3,iVar2);
    FUN_ram_4203511c(param_1,param_3,iVar2);
    FUN_ram_4203511c(param_3,param_2,iVar2);
    FUN_ram_4203511c(param_2,auStack_60,iVar2);
  }
  return;
}

