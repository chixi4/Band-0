
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079c4c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = _DAT_ram_3fcc4018;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x118) != 0) {
      while (iVar2 = *(int *)(param_1 + 0x118), iVar2 != 0) {
        puVar3 = *(uint **)(iVar2 + 0x24);
        iVar4 = *(int *)(*(int *)(iVar2 + 4) + 4);
        if ((*puVar3 & 0x40000) != 0) {
          iVar4 = iVar4 + 8;
        }
        iVar5 = *(int *)(iVar2 + 0x20);
        if (iVar5 != 0) {
          *(byte *)(iVar4 + 1) = *(byte *)(iVar4 + 1) | 0x20;
        }
        if (param_2 == 0) {
          iVar4 = (*(code *)&SUB_ram_40011f94)();
          if (iVar4 == 0) {
            *(undefined4 *)(iVar2 + 0x20) = 0;
            *_DAT_ram_3fcc416c = iVar2;
            _DAT_ram_3fcc416c = (int *)(iVar2 + 0x20);
          }
          else {
            (*(code *)&SUB_ram_40011ed8)(iVar2);
          }
          *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
          *(int *)(iVar1 + 0x110) = *(int *)(iVar1 + 0x110) + 1;
        }
        else {
          if ((param_2 != 1) && (_DAT_ram_6004d000 - puVar3[6] < param_2)) {
            return;
          }
          *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
          *(int *)(iVar1 + 0x114) = *(int *)(iVar1 + 0x114) + 1;
          (*(code *)&SUB_ram_40011fa4)(iVar2);
        }
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
        *(int *)(iVar1 + 0x10c) = *(int *)(iVar1 + 0x10c) + -1;
        *(int *)(param_1 + 0x118) = iVar5;
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
      }
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}

