
int FUN_ram_420a5312(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [36];
  
  iVar5 = *(int *)(param_1 + 0x38);
  FUN_ram_4206c48e(auStack_4c);
  iVar6 = *(int *)(param_1 + 0x34);
  iVar5 = iVar5 + 0x154;
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x30);
  }
  if (param_3 == 0) {
    pcVar1 = &DAT_ram_3c0c53cc;
  }
  else {
    pcVar1 = "fore replying when emotions rise.";
  }
  uVar2 = FUN_ram_4206c732(iVar5);
  iVar3 = FUN_ram_4206c572(auStack_4c,uVar2,0);
  if (((iVar3 == 0) && (iVar3 = FUN_ram_4206c508(auStack_4c,iVar5), iVar3 == 0)) &&
     (iVar3 = FUN_ram_4206c6a0(auStack_4c,auStack_40), iVar3 == 0)) {
    pcVar4 = *(code **)(*(int *)(param_1 + 0x38) + 0x1c);
    (*pcVar4)(iVar6 + 0x30,0x30,pcVar1,auStack_40,0x20,param_2,0xc,pcVar4);
    FUN_ram_4206d7da(auStack_40,0x20);
  }
  FUN_ram_4206c49a(auStack_4c);
  return iVar3;
}

