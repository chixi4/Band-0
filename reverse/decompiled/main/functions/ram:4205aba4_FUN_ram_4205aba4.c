
void FUN_ram_4205aba4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_a2;
  int iVar3;
  uint uVar4;
  uint extraout_a5;
  undefined1 *puVar5;
  undefined1 *extraout_a6;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,param_1);
  param_3 = param_3 * 0x18;
  puVar5 = &DAT_ram_3fcc2578;
  uVar4 = (uint)(byte)(&DAT_ram_3fcc258c)[param_3];
  iVar3 = param_3;
  if (uVar4 < 2) {
    uVar7 = FUN_ram_4039bf1e();
    iVar3 = extraout_a2;
    uVar4 = extraout_a5;
    puVar5 = extraout_a6;
  }
  iVar1 = (int)uVar7;
  iVar6 = iVar1 + 0x32;
  if (uVar4 == 2) {
    if (*(ushort *)(&DAT_ram_3fcc258a + param_3) < 0x11d) {
      if (*(ushort *)(&DAT_ram_3fcc258a + param_3) < 0x10e) goto LAB_ram_4205ac08;
      iVar2 = FUN_ram_4205a5a6(iVar1,iVar6,puVar5 + iVar3 + 0xc,iVar6,iVar1 + 4,&DAT_ram_3c0f7594,
                               puVar5 + iVar3 + 4);
    }
    else {
      iVar2 = FUN_ram_4205aaec(iVar1,puVar5 + iVar3 + 4);
    }
    if (iVar2 == 0) {
      (&DAT_ram_3fcc258c)[param_3] = 3;
    }
  }
LAB_ram_4205ac08:
  FUN_ram_4205c318(iVar1,(int)((ulonglong)uVar7 >> 0x20),iVar6,puVar5 + iVar3 + 0xc,0x800);
  return;
}

