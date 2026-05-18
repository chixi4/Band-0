
void FUN_ram_4039aa36(int *param_1,undefined4 param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *extraout_a2;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = CONCAT44(param_2,param_1);
  param_1 = (int *)*param_1;
  param_1[0xe] = param_1[0xe] | 0x1000;
  if (*param_1 << 7 < 0) {
    uVar10 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
  }
  iVar4 = (int)((ulonglong)uVar10 >> 0x20);
  uVar2 = param_3[0x14];
  cVar1 = *(char *)((int)param_3 + 0x29);
  uVar3 = param_3[0x15];
  param_1[2] = param_1[2] & 0xffff3c9f;
  param_1[4] = param_1[4] & 0xffffcfff;
  param_1[2] = param_1[2] & 0xfffffeffU | (uint)((char)uVar2 == '\x02') << 8;
  param_1[2] = (uint)((char)uVar2 == '\x04') << 9 | param_1[2] & 0xfffffdffU;
  param_1[2] = param_1[2] & 0xffffffdfU | (uint)(cVar1 == '\x02') << 5;
  param_1[2] = (uint)(cVar1 == '\x04') << 6 | param_1[2] & 0xffffffbfU;
  uVar7 = (uint)((char)uVar3 == '\x02');
  param_1[2] = param_1[2] & 0xffffbfffU | uVar7 << 0xe;
  uVar8 = (uint)((char)uVar3 == '\x04');
  param_1[2] = param_1[2] & 0xffff7fffU | uVar8 << 0xf;
  param_1[4] = uVar7 << 0xc | param_1[4] & 0xffffefffU;
  param_1[4] = uVar8 << 0xd | param_1[4] & 0xffffdfffU;
  iVar9 = 0;
  if ((*(int *)(param_3 + 0x12) != 0) && ((*(uint *)(iVar4 + 0x34) & 0x12) == 2)) {
    iVar9 = *(int *)(iVar4 + 0x28);
  }
  iVar9 = iVar9 + *(int *)(param_3 + 6);
  param_1[4] = param_1[4] & 0xdfffffffU | (uint)(iVar9 != 0) << 0x1d;
  if (0 < iVar9) {
    param_1[5] = iVar9 - 1U & 0xff | param_1[5] & 0xffffff00U;
  }
  iVar9 = *(int *)(param_3 + 8);
  if (iVar9 != 0) {
    param_1[7] = param_1[7] & 0xfffc0000U | iVar9 - 1U & 0x3ffff;
  }
  if ((*(byte *)(iVar4 + 0x34) & 2) == 0) {
    if (iVar9 != 0) {
      param_1[7] = iVar9 - 1U & 0x3ffff | param_1[7] & 0xfffc0000U;
    }
    if (*(int *)(iVar4 + 4) != 0) {
      iVar9 = 0;
      iVar6 = 0;
      goto LAB_ram_4039ab9c;
    }
  }
  else if (*(int *)(param_3 + 10) != 0) {
    param_1[7] = *(int *)(param_3 + 10) - 1U & 0x3ffff | param_1[7] & 0xfffc0000U;
  }
  iVar6 = *(int *)(param_3 + 2);
  iVar9 = *(int *)(param_3 + 4);
LAB_ram_4039ab9c:
  param_1[5] = param_1[5] & 0x7ffffffU | (iVar9 + -1) * 0x8000000;
  param_1[4] = param_1[4] & 0xbfffffffU | (uint)(iVar9 != 0) << 0x1e;
  param_1[6] = param_1[6] & 0xfffffffU | (iVar6 + -1) * 0x10000000;
  param_1[4] = param_1[4] & 0x7fffffffU | (uint)(iVar6 != 0) << 0x1f;
  uVar7 = param_1[6];
  uVar8 = *(uint *)(iVar4 + 0x34) >> 2 & 1;
  if (uVar8 == 0) {
    uVar5 = (*(code *)&SUB_ram_400108cc)((uint)*param_3 << (0x20U - iVar6 & 0x1f));
    uVar7 = uVar7 & 0xffff0000 | uVar5 & 0xffff;
  }
  else {
    uVar7 = uVar7 & 0xffff0000 | (uint)*param_3;
  }
  param_1[6] = uVar7;
  if (uVar8 == 0) {
    iVar4 = (*(code *)&SUB_ram_400108c0)
                      (*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0xe),0x20 - iVar9);
  }
  else {
    iVar4 = (*(code *)&SUB_ram_400108cc)();
  }
  param_1[1] = iVar4;
  param_1[8] = param_1[8] & 0xbfffffffU | (uint)(*(int *)(param_3 + 0x16) != 0) << 0x1e;
  FUN_ram_4039c11e((int)uVar10 + 8,param_3,0x30);
  return;
}

