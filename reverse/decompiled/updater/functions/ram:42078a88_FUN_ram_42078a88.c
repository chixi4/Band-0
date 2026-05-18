
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42078a88(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  uint uVar8;
  
  bVar1 = *(byte *)(param_1 + 8);
  uVar3 = (uint)bVar1;
  uVar8 = (uint)*(byte *)(param_1 + 0xc);
  if (*(short *)(param_1 + 0x10) != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
    if (*(ushort *)(param_1 + 0x10) <= *(ushort *)(param_1 + 0xe)) {
      *(short *)(uVar3 * 0xc + 0x3fcb55e2) = *(short *)(uVar3 * 0xc + 0x3fcb55e2) + 1;
      goto LAB_ram_42078aee;
    }
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) + 1;
    uVar2 = _DAT_ram_3fcdfdb4;
    piVar6 = (int *)(uVar3 * 0xc + 0x3fcb55d8);
    *piVar6 = *piVar6 + 1;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(uVar2);
  }
  if (uVar3 < 10) {
    if (uVar3 < 7) {
      if (3 < (uVar3 - 1 & 0xff)) goto LAB_ram_42078bf2;
LAB_ram_42078b34:
      pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x158);
    }
    else {
      pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x168);
    }
    iVar4 = (*pcVar7)(param_2 + 0x5c + uVar8);
  }
  else {
    if (uVar3 == 10) goto LAB_ram_42078b34;
LAB_ram_42078bf2:
    iVar4 = FUN_ram_4204af26(uVar3);
  }
  if (iVar4 != 0) {
    (*(code *)&SUB_ram_40010488)(iVar4,0,0x58);
    *(int *)(iVar4 + 0x24) = iVar4 + 0x34;
    *(int *)(iVar4 + 0x10) = iVar4 + 0x58;
    *(int *)(iVar4 + 4) = iVar4 + 0x28;
    iVar5 = (*(code *)&SUB_ram_40010488)(iVar4 + 0x58,0,uVar8);
    *(undefined2 *)(iVar4 + 0xc) = 1;
    *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(param_1 + 4);
    *(int *)(iVar4 + 8) = iVar4 + 0x28;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 0xf;
    *(uint *)(iVar4 + 0x2c) = iVar5 + uVar8;
    if (uVar8 + param_2 < 0xffc) {
      *(undefined4 *)(iVar5 + uVar8 + param_2) = 0xdeadbeef;
      uVar3 = *(uint *)(iVar4 + 0x28) & 0xfffff000 | uVar8 + (param_2 & 0xffff) & 0xfff;
    }
    else {
      uVar3 = *(uint *)(iVar4 + 0x28) & 0xfffff000 | 0xffc;
    }
    *(uint *)(iVar4 + 0x28) = uVar3;
    *(short *)(iVar4 + 0x16) = (short)param_2;
    *(byte *)(iVar4 + 0x1a) = bVar1;
    if (param_3 == 0) {
      return iVar4;
    }
    FUN_ram_40399daa(iVar5 + uVar8,param_3,param_2);
    return iVar4;
  }
  if (*(short *)(param_1 + 0x10) == 0) {
    return 0;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  if (*(short *)(param_1 + 0xe) != 0) {
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + -1;
    piVar6 = (int *)(uVar3 * 0xc + 0x3fcb55d8);
    *piVar6 = *piVar6 + 1;
  }
  *(short *)(uVar3 * 0xc + 0x3fcb55e0) = *(short *)(uVar3 * 0xc + 0x3fcb55e0) + 1;
LAB_ram_42078aee:
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return 0;
}

