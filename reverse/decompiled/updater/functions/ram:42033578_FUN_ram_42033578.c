
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42033578(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 auStack_24 [4];
  
  auStack_24[0] = 0;
  if ((_DAT_ram_3fcb4f84 == 0) ||
     (piVar1 = *(int **)(_DAT_ram_3fcb4f84 + 0xe4), piVar1 == (int *)0x0)) {
    uVar3 = 0x3c07f688;
  }
  else {
    if (*piVar1 == _DAT_ram_3fcb4f84) {
      iVar2 = FUN_ram_42033f1c(auStack_24,0x18,0);
      if (iVar2 == 0) {
        FUN_ram_42033fd8(1,0x40,2,0x3c07f6bc);
        return 0;
      }
      iVar5 = *(int *)(*(int *)(iVar2 + 4) + 4);
      (*(code *)&SUB_ram_40010488)(iVar5,0,0x18);
      *(undefined4 *)(iVar2 + 0x14) = 0x18;
      puVar4 = *(uint **)(iVar2 + 4);
      *puVar4 = *puVar4 | 0x80000000;
      *puVar4 = *puVar4 | 0x40000000;
      *puVar4 = *puVar4 & 0xdfffffff;
      *puVar4 = *puVar4 & 0xff000fff | 0x18000;
      uVar3 = FUN_ram_420499ee(0);
      (*(code *)&SUB_ram_40012098)(piVar1,iVar2,0x48,0x10,uVar3,piVar1 + 1);
      (*(code *)&SUB_ram_40011fc8)(piVar1,iVar2,7,8,0);
      (*(code *)&SUB_ram_40012000)(iVar2,9);
      if (param_1 == 0) {
        iVar5 = *(int *)(iVar2 + 0x24);
        uVar3 = 0x40;
      }
      else {
        uVar3 = 0x20;
        *(byte *)(iVar5 + 1) = *(byte *)(iVar5 + 1) | 0x10;
        iVar5 = *(int *)(iVar2 + 0x24);
      }
      *(undefined4 *)(iVar5 + 0x14) = uVar3;
      return iVar2;
    }
    uVar3 = 0x3c07f6a0;
  }
  FUN_ram_42033fd8(1,0x40,2,uVar3);
  return 0;
}

