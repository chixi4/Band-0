
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039c694(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  code *pcVar5;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = 0;
  bVar1 = **(byte **)(*(int *)(param_1 + 4) + 4);
  bVar4 = bVar1 & 0xf0;
  if ((bVar1 & 0xc) == 0) {
    if (bVar4 == 0x80) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a4))(4,auStack_14);
      pcVar5 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
      uVar2 = 4;
    }
    else if ((bVar4 + 0x60 & 0xd0) == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a4))(7,auStack_14);
      pcVar5 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
      uVar2 = 7;
    }
    else {
      if (bVar4 != 0x40) goto LAB_ram_4039c78e;
      iVar3 = FUN_ram_42094476();
      if ((iVar3 == 0) && (iVar3 = FUN_ram_42079402(), iVar3 != 2)) {
        return;
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a4))(0x27,auStack_14);
      pcVar5 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
      uVar2 = 0x27;
    }
  }
  else {
    if (((bVar1 & 0xc) != 8) || ((bVar1 & 0x70) != 0x40)) {
LAB_ram_4039c78e:
      if ((**(uint **)(param_1 + 0x24) & 4) == 0) {
        if ((bVar1 & 0xc) != 0) {
          return;
        }
        if (((bVar1 & 0xd0) != 0) && (bVar4 != 0xb0)) {
          return;
        }
      }
      iVar3 = FUN_ram_42094476();
      if (iVar3 == 0) {
        return;
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a4))(0x28,auStack_14);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(0x28,0,auStack_14[0]);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a8))(0x28,*(int *)(param_1 + 0x24) + 0x20);
      *(undefined2 *)(*(int *)(param_1 + 0x24) + 0x22) = 4000;
      return;
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a4))(9,auStack_14);
    pcVar5 = *(code **)(_DAT_ram_3fcdfdd8 + 0x198);
    uVar2 = 9;
  }
  (*pcVar5)(uVar2,0,auStack_14[0]);
  return;
}

