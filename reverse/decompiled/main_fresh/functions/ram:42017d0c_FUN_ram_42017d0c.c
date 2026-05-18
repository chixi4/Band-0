
void FUN_ram_42017d0c(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = FUN_ram_4201edd8();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4201ee6a(), iVar1 != 0)) {
    FUN_ram_4201eeb2(1);
    pcVar2 = param_1;
    if (param_1 == (char *)0x0) {
      pcVar2 = &DAT_ram_3c0c39bc;
    }
    iVar3 = FUN_ram_4201f71a(pcVar2);
    iVar4 = FUN_ram_4201f71a(param_2);
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    iVar3 = iVar3 * 3;
    iVar4 = 0x58;
    iVar6 = (-(uint)(*param_2 == '\0') & 0xfffffff0) + 0x38;
    if ((0xaf < iVar3) && (iVar4 = 0xb4, iVar3 < 0x16a)) {
      iVar4 = iVar3 >> 1;
    }
    FUN_ram_42017b40(iVar1,200 - iVar4 >> 1,200 - iVar6 >> 1,iVar4,iVar6,10);
    uVar5 = 0x5c;
    if (*param_2 != '\0') {
      FUN_ram_4201f3fe(0x52,param_1,3);
      uVar5 = 0x66;
      param_1 = param_2;
    }
    FUN_ram_4201f3fe(uVar5,param_1,3);
    FUN_ram_4201eee8();
    FUN_ram_4201f096();
    return;
  }
  return;
}

