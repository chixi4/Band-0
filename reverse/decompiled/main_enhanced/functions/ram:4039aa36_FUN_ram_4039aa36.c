
void FUN_ram_4039aa36(int *param_1,int param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  piVar4 = (int *)*param_1;
  piVar4[0xe] = piVar4[0xe] | 0x1000;
  if (*piVar4 << 7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  uVar2 = param_3[0x14];
  cVar1 = *(char *)((int)param_3 + 0x29);
  uVar3 = param_3[0x15];
  piVar4[2] = piVar4[2] & 0xffff3c9f;
  piVar4[4] = piVar4[4] & 0xffffcfff;
  piVar4[2] = piVar4[2] & 0xfffffeffU | (uint)((char)uVar2 == '\x02') << 8;
  piVar4[2] = (uint)((char)uVar2 == '\x04') << 9 | piVar4[2] & 0xfffffdffU;
  piVar4[2] = piVar4[2] & 0xffffffdfU | (uint)(cVar1 == '\x02') << 5;
  piVar4[2] = (uint)(cVar1 == '\x04') << 6 | piVar4[2] & 0xffffffbfU;
  uVar7 = (uint)((char)uVar3 == '\x02');
  piVar4[2] = piVar4[2] & 0xffffbfffU | uVar7 << 0xe;
  uVar8 = (uint)((char)uVar3 == '\x04');
  piVar4[2] = piVar4[2] & 0xffff7fffU | uVar8 << 0xf;
  piVar4[4] = uVar7 << 0xc | piVar4[4] & 0xffffefffU;
  piVar4[4] = uVar8 << 0xd | piVar4[4] & 0xffffdfffU;
  iVar9 = 0;
  if ((*(int *)(param_3 + 0x12) != 0) && ((*(uint *)(param_2 + 0x34) & 0x12) == 2)) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  iVar9 = iVar9 + *(int *)(param_3 + 6);
  piVar4[4] = piVar4[4] & 0xdfffffffU | (uint)(iVar9 != 0) << 0x1d;
  if (0 < iVar9) {
    piVar4[5] = iVar9 - 1U & 0xff | piVar4[5] & 0xffffff00U;
  }
  iVar9 = *(int *)(param_3 + 8);
  if (iVar9 != 0) {
    piVar4[7] = piVar4[7] & 0xfffc0000U | iVar9 - 1U & 0x3ffff;
  }
  if ((*(byte *)(param_2 + 0x34) & 2) == 0) {
    if (iVar9 != 0) {
      piVar4[7] = iVar9 - 1U & 0x3ffff | piVar4[7] & 0xfffc0000U;
    }
    if (*(int *)(param_2 + 4) != 0) {
      iVar9 = 0;
      iVar6 = 0;
      goto LAB_ram_4039ab9c;
    }
  }
  else if (*(int *)(param_3 + 10) != 0) {
    piVar4[7] = *(int *)(param_3 + 10) - 1U & 0x3ffff | piVar4[7] & 0xfffc0000U;
  }
  iVar6 = *(int *)(param_3 + 2);
  iVar9 = *(int *)(param_3 + 4);
LAB_ram_4039ab9c:
  piVar4[5] = piVar4[5] & 0x7ffffffU | (iVar9 + -1) * 0x8000000;
  piVar4[4] = piVar4[4] & 0xbfffffffU | (uint)(iVar9 != 0) << 0x1e;
  piVar4[6] = piVar4[6] & 0xfffffffU | (iVar6 + -1) * 0x10000000;
  piVar4[4] = piVar4[4] & 0x7fffffffU | (uint)(iVar6 != 0) << 0x1f;
  uVar7 = piVar4[6];
  uVar8 = *(uint *)(param_2 + 0x34) >> 2 & 1;
  if (uVar8 == 0) {
    uVar5 = (*(code *)&SUB_ram_400108cc)((uint)*param_3 << (0x20U - iVar6 & 0x1f));
    uVar7 = uVar7 & 0xffff0000 | uVar5 & 0xffff;
  }
  else {
    uVar7 = uVar7 & 0xffff0000 | (uint)*param_3;
  }
  piVar4[6] = uVar7;
  if (uVar8 == 0) {
    iVar9 = (*(code *)&SUB_ram_400108c0)
                      (*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0xe),0x20 - iVar9);
  }
  else {
    iVar9 = (*(code *)&SUB_ram_400108cc)();
  }
  piVar4[1] = iVar9;
  piVar4[8] = piVar4[8] & 0xbfffffffU | (uint)(*(int *)(param_3 + 0x16) != 0) << 0x1e;
  FUN_ram_4039c11e(param_1 + 2,param_3,0x30);
  return;
}

