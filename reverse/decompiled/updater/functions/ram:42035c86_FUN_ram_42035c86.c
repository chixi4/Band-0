
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42035c86(int param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2 * 4 + param_1;
  puVar2 = *(uint **)(iVar5 + 0x268);
  if (7 < param_2) {
    FUN_ram_42033fd8(1,0x400,2,0x3c07f8b4,param_2);
    return;
  }
  if (puVar2 != (uint *)0x0) {
    for (iVar6 = 0; iVar6 < (int)(uint)*(ushort *)((int)puVar2 + 0xe); iVar6 = iVar6 + 1) {
      piVar4 = (int *)(puVar2[6] + iVar6 * 4);
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        uVar1 = *(ushort *)(iVar3 + 0x16);
        *piVar4 = 0;
        puVar2[1] = puVar2[1] - (uint)uVar1;
        (*(code *)&SUB_ram_40011fa0)();
        iVar3 = ((ushort)puVar2[2] - 1) * 0x10000;
        *(short *)(puVar2 + 2) = (short)((uint)iVar3 >> 0x10);
        if (iVar3 >> 0x10 == 0) break;
      }
    }
    *puVar2 = *puVar2 & 0xffffffb9;
    thunk_EXT_FUN_ram_40011e14((char)puVar2[8]);
    FUN_ram_42035c5a((char)puVar2[8]);
    if (puVar2[6] != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar2);
    *(undefined4 *)(iVar5 + 0x268) = 0;
    *(ushort *)(param_1 + 0x288) = ~(ushort)(1 << (param_2 & 0x1f)) & *(ushort *)(param_1 + 0x288);
  }
  return;
}

