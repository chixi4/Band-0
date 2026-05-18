
void FUN_ram_42017cd6(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  thunk_FUN_ram_40390634();
  FUN_ram_42015f20(uVar2);
  FUN_ram_40398498((uint)(iVar1 * 100) / 1000);
  uVar9 = FUN_ram_42010478();
  pcVar6 = (char *)((ulonglong)uVar9 >> 0x20);
  pcVar7 = (char *)uVar9;
  iVar1 = FUN_ram_4201edd8();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4201ee6a(), iVar1 != 0)) {
    FUN_ram_4201eeb2(1);
    pcVar3 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      pcVar3 = &DAT_ram_3c0c39bc;
    }
    iVar4 = FUN_ram_4201f71a(pcVar3);
    iVar5 = FUN_ram_4201f71a(pcVar6);
    if (iVar4 < iVar5) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 * 3;
    iVar5 = 0x58;
    iVar8 = (-(uint)(*pcVar6 == '\0') & 0xfffffff0) + 0x38;
    if ((0xaf < iVar4) && (iVar5 = 0xb4, iVar4 < 0x16a)) {
      iVar5 = iVar4 >> 1;
    }
    FUN_ram_42017b40(iVar1,200 - iVar5 >> 1,200 - iVar8 >> 1,iVar5,iVar8,10);
    uVar2 = 0x5c;
    if (*pcVar6 != '\0') {
      FUN_ram_4201f3fe(0x52,pcVar7,3);
      uVar2 = 0x66;
      pcVar7 = pcVar6;
    }
    FUN_ram_4201f3fe(uVar2,pcVar7,3);
    FUN_ram_4201eee8();
    FUN_ram_4201f096();
    return;
  }
  return;
}

