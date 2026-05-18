
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_42045154(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_54;
  undefined1 auStack_50 [40];
  
  iVar6 = _DAT_ram_3fcb4f84;
  puVar3 = (undefined1 *)FUN_ram_420339fc();
  iVar9 = *(int *)(gp + -0x2b8);
  uStack_54 = 0;
  (*(code *)&SUB_ram_40010488)(auStack_50,0,0x1d);
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,8,5,0x3c07f3a0,0);
    uVar2 = *puVar3;
  }
  else if (((iVar6 == 0) || (iVar8 = *(int *)(iVar6 + 0xe4), iVar8 == 0)) ||
          (iVar4 = FUN_ram_4039a1de(param_1,iVar9 + 8,0x20), iVar4 != 0)) {
    for (uVar1 = 0; uVar1 < *(byte *)(_DAT_ram_3fcdfb20 + 0x110); uVar1 = uVar1 + 1 & 0xff) {
      iVar4 = uVar1 * 0x24;
      FUN_ram_42033fd8(1,8,5,0x3c07f3dc,uVar1,_DAT_ram_3fcdfb20 + iVar4 + 0xa4,
                       *(undefined1 *)(_DAT_ram_3fcdfb20 + iVar4 + 0xc6));
      iVar6 = _DAT_ram_3fcdfb20;
      iVar8 = iVar4 + 0xa4 + _DAT_ram_3fcdfb20;
      uVar5 = (*(code *)&SUB_ram_400104a8)(iVar8);
      iVar8 = FUN_ram_4039a1de(param_1,iVar8,uVar5);
      if (iVar8 == 0) {
        FUN_ram_42033fd8(1,8,5,0x3c07f3fc,param_1,uVar1,*(undefined1 *)(iVar6 + iVar4 + 0xc6));
        return *(undefined1 *)(_DAT_ram_3fcdfb20 + iVar4 + 0xc6);
      }
    }
    for (uVar1 = 0; uVar1 < *(byte *)(iVar9 + 0x9e); uVar1 = uVar1 + 1 & 0xff) {
      (*(code *)&SUB_ram_40010488)(&uStack_54,0,0x21);
      piVar7 = (int *)(uVar1 * 0x8c + iVar9 + 0xa0);
      if (1 < *piVar7 + 1U) {
        FUN_ram_40399daa(&uStack_54,piVar7 + 1,0x20);
      }
      FUN_ram_42033fd8(1,8,5,0x3c07f424,uVar1,piVar7 + 1,*(undefined1 *)((int)piVar7 + 0x8b));
      uVar5 = (*(code *)&SUB_ram_400104a8)(&uStack_54);
      iVar6 = FUN_ram_4039a1de(param_1,&uStack_54,uVar5);
      if (iVar6 == 0) {
        FUN_ram_42033fd8(1,8,5,0x3c07f440,param_1,uVar1,*(undefined1 *)((int)piVar7 + 0x8b));
        return *(undefined1 *)((int)piVar7 + 0x8b);
      }
    }
    FUN_ram_42033fd8(1,8,5,0x3c07f464,param_1);
    uVar2 = 1;
  }
  else {
    FUN_ram_42033fd8(1,8,5,0x3c07f3b0,param_1,*(undefined1 *)(iVar8 + 0xab));
    uVar2 = *(undefined1 *)(*(int *)(iVar6 + 0xe4) + 0xab);
  }
  return uVar2;
}

