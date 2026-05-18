
void FUN_ram_4201d0f4(undefined4 param_1,int param_2,char *param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  bVar2 = false;
  if (param_4 != (char *)0x0) {
    bVar2 = *param_4 != '\0';
  }
  iVar3 = 0;
  if (param_3 != (char *)0x0) {
    iVar3 = FUN_ram_4201f71a(param_3);
  }
  iVar5 = 0;
  if (param_4 != (char *)0x0) {
    iVar5 = FUN_ram_4201f71a(param_4);
  }
  if (iVar3 < iVar5) {
    iVar3 = iVar5;
  }
  iVar3 = iVar3 * 3;
  iVar5 = 0x58;
  if (0xaf < iVar3) {
    iVar5 = 0xb4;
    if (iVar3 < 0x16a) {
      iVar5 = iVar3 >> 1;
    }
  }
  iVar3 = iVar5 + -0x10;
  uVar4 = 0;
  bVar1 = false;
  if (param_3 != (char *)0x0) {
    iVar6 = FUN_ram_4201f71a(param_3);
    bVar1 = iVar3 < iVar6;
    uVar4 = (uint)bVar1;
  }
  if (param_4 == (char *)0x0) {
    if (bVar1) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = 0x10;
    }
    uVar8 = 0x10;
  }
  else {
    iVar6 = FUN_ram_4201f71a(param_4);
    uVar4 = (-uVar4 & 0x12) + 0x10;
    uVar8 = 0x10;
    if (iVar3 < iVar6) {
      uVar8 = 0x22;
    }
  }
  uVar7 = uVar4;
  if (bVar2) {
    uVar7 = uVar4 + 4 + uVar8;
  }
  param_2 = param_2 - uVar7 / 2;
  FUN_ram_4201cfa4(param_1,200 - iVar5 >> 1,param_2 + -0xc,iVar5,uVar7 + 0x18,10);
  if (bVar2) {
    FUN_ram_4201d0a4(param_2,param_3,3,iVar3,uVar4);
    param_2 = param_2 + uVar4 + 4;
    param_3 = param_4;
    uVar4 = uVar8;
  }
  FUN_ram_4201d0a4(param_2,param_3,3,iVar3,uVar4);
  return;
}

