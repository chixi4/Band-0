
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42032fa2(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_28 [20];
  
  iVar2 = 0;
  if (_DAT_ram_3fcb4f84 != 0) {
    iVar2 = *(int *)(_DAT_ram_3fcb4f84 + 0xe4);
  }
  (*(code *)&SUB_ram_40011fd0)(0,auStack_28);
  if (iVar2 == 0) {
    FUN_ram_42033fd8(1,0x40,2,0x3c07f590);
    iVar2 = 0;
  }
  else {
    iVar3 = (*(code *)&SUB_ram_40011fdc)(0,3,0x32);
    if (iVar3 == 0) {
      FUN_ram_42033fd8(1,0x40,2,0x3c07f5b0);
      iVar2 = 0;
    }
    else {
      puVar4 = *(uint **)(iVar3 + 4);
      uVar7 = puVar4[1];
      *puVar4 = (*puVar4 & 0xfff) - 0x24 & 0xfff | *puVar4 & 0xfffff000;
      sVar1 = *(short *)(iVar3 + 0x16);
      puVar4[1] = uVar7 + 0x24;
      *(short *)(iVar3 + 0x16) = sVar1 + -0x24;
      *(undefined1 *)(uVar7 + 0x30) = 8;
      *(undefined1 *)(uVar7 + 0x31) = 0;
      FUN_ram_40399daa(uVar7 + 0x24,iVar2 + 4,6);
      FUN_ram_40399daa(uVar7 + 0x2a,auStack_28,6);
      iVar2 = FUN_ram_40398d84(iVar2,iVar3,7);
      if (iVar2 != 0) {
        iVar5 = *(int *)(iVar2 + 0x24);
        iVar3 = *(int *)(*(int *)(iVar2 + 4) + 4);
        uVar6 = 0x40;
        if (param_1 != 0) {
          *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) | 0x10;
          uVar6 = 0x20;
        }
        *(undefined4 *)(iVar5 + 0x14) = uVar6;
      }
    }
  }
  return iVar2;
}

