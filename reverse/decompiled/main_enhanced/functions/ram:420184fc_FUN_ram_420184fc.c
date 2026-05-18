
void FUN_ram_420184fc(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_ram_4201edd8();
  if ((iVar1 != 0) || (iVar1 = FUN_ram_4201ee6a(), iVar1 == 0)) {
    return;
  }
  FUN_ram_4201eeb2(1);
  pcVar2 = param_1;
  if (param_1 == (char *)0x0) {
    pcVar2 = &DAT_ram_3c0c39bc;
  }
  iVar3 = FUN_ram_4201f71a(pcVar2);
  pcVar2 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar2 = &DAT_ram_3c0c39bc;
  }
  iVar4 = FUN_ram_4201f71a(pcVar2);
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  iVar3 = iVar3 * 3;
  iVar4 = 0x28;
  if (param_2 != (char *)0x0) {
    iVar4 = (-(uint)(*param_2 != '\0') & 0x12) + 0x28;
  }
  iVar5 = 0x58;
  if ((0xaf < iVar3) && (iVar5 = 0xb4, iVar3 < 0x16a)) {
    iVar5 = iVar3 >> 1;
  }
  iVar3 = 200 - iVar4 >> 1;
  FUN_ram_420183e0(iVar1,200 - iVar5 >> 1,iVar3,iVar5,iVar4,10);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_ram_420185c0;
    iVar3 = iVar3 + 0xc;
  }
  else {
    FUN_ram_4201f3fe(iVar3 + 0xb,param_1,3);
    iVar3 = iVar3 + 0x1f;
    param_1 = param_2;
  }
  FUN_ram_4201f3fe(iVar3,param_1,3);
LAB_ram_420185c0:
  FUN_ram_4201eee8();
  FUN_ram_4201f096();
  return;
}

