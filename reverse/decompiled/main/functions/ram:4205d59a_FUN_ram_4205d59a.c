
void FUN_ram_4205d59a(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  piVar4 = (int *)0x0;
  if (param_1 != 0) goto LAB_ram_4205d5ae;
LAB_ram_4205d5a6:
  uVar8 = FUN_ram_4039bf1e(piVar4,param_2);
LAB_ram_4205d5ae:
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  iVar3 = (int)uVar8;
  FUN_ram_4205c96c();
  iVar7 = *(int *)(iVar3 + 4);
  *(undefined4 *)(iVar3 + 8) = 0;
  *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 1;
  *(char *)(iVar3 + 0xc) = (char)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(iVar3 + 4) = 0;
  piVar4 = (int *)FUN_ram_4205c996();
  if (*(code **)(iVar3 + 0x30) != (code *)0x0) {
    piVar4 = (int *)(**(code **)(iVar3 + 0x30))(iVar3,4,0);
  }
  if (*(code **)(iVar3 + 0x30) != (code *)0x0) {
    piVar4 = (int *)(**(code **)(iVar3 + 0x30))(iVar3,0,0);
  }
  if (*(code **)(iVar3 + 0x30) != (code *)0x0) {
    piVar4 = (int *)(**(code **)(iVar3 + 0x30))(iVar3,2,0);
  }
  if (iVar2 == -0xe) {
    puVar5 = &DAT_ram_3c0f75a3;
  }
  else if (iVar2 == -0xd) {
    puVar5 = &DAT_ram_3c0f75a4;
  }
  else if (iVar2 == -0xf) {
    puVar5 = &DAT_ram_3c0f75a2;
  }
  else {
    param_2 = 0;
    puVar5 = (undefined *)0x0;
    if (iVar2 != 0) goto LAB_ram_4205d5a6;
  }
  if ((*(int *)(iVar3 + 0x10) != 0) && ((*(byte *)(iVar3 + 0x28) & 8) == 0)) {
    piVar4 = (int *)FUN_ram_4205c7fc(iVar3 + 0x10);
  }
  uVar8 = CONCAT44(puVar5,piVar4);
  if ((*(int *)(iVar3 + 0x14) != 0) &&
     (uVar8 = CONCAT44(puVar5,piVar4), (*(byte *)(iVar3 + 0x28) & 8) == 0)) {
    uVar8 = FUN_ram_4205c7fc(iVar3 + 0x14);
  }
  param_2 = (undefined4)((ulonglong)uVar8 >> 0x20);
  piVar4 = (int *)uVar8;
  if ((iVar7 == 1) || (iVar7 - 3U < 2)) {
    bVar1 = *(byte *)(iVar3 + 0x28);
    *(byte *)(iVar3 + 0x28) = bVar1 & 0xfb;
    if ((bVar1 & 4) != 0) {
      return;
    }
    iVar6 = *(int *)(iVar3 + 0x2c);
    if (iVar6 != 0) {
      if (iVar7 == 4) {
        iVar2 = 0;
      }
      piVar4 = *(int **)(iVar6 + 0x24);
      *(char *)(iVar6 + 4) = (char)iVar2;
      if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
        *(undefined4 *)(iVar3 + 0x2c) = 0;
        FUN_ram_4205c6fa();
        return;
      }
    }
  }
  else if (*(int *)(iVar3 + 0x2c) == 0) {
    return;
  }
  goto LAB_ram_4205d5a6;
}

