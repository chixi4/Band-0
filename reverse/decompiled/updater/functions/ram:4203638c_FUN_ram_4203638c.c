
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203638c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = 600000;
  *param_2 = 600000;
  if (param_1 != 0) {
    for (uVar8 = (uint)*(ushort *)(param_1 + 0x288); uVar8 != 0;
        uVar8 = uVar8 & ~(1 << (uVar2 & 0x1f))) {
      uVar2 = (*(code *)&SUB_ram_400108ec)(uVar8);
      iVar3 = *(int *)((uVar2 + 0x98) * 4 + param_1 + 8);
      iVar9 = iVar1;
      if (iVar3 == 0) {
        FUN_ram_42033fd8(1,0x400,1,0x3c07d17c);
      }
      else {
        iVar5 = (int)*(short *)(iVar3 + 8);
        if (0 < iVar5) {
          uVar7 = *(ushort *)(iVar3 + 0xe) - 1 & 0xff;
          iVar4 = uVar7 << 2;
          for (; uVar7 != 0; uVar7 = uVar7 - 1 & 0xff) {
            iVar6 = *(int *)(*(int *)(iVar3 + 0x18) + iVar4);
            if (iVar6 != 0) {
              iVar6 = *(int *)(*(int *)(iVar6 + 0x24) + 4) + (300000 - _DAT_ram_6004d000);
              if (iVar6 < 1) {
                (*(code *)&SUB_ram_40011f90)
                          (param_1,iVar3,*(ushort *)(iVar3 + 0xc) + 1 + uVar7 & 0xfff);
                break;
              }
              if (iVar6 < iVar9) {
                iVar9 = iVar6;
              }
              iVar5 = iVar5 + -1;
              if (iVar5 == 0) break;
            }
            iVar4 = iVar4 + -4;
          }
        }
      }
      if (iVar9 < *param_2) {
        *param_2 = iVar9;
      }
    }
  }
  return;
}

