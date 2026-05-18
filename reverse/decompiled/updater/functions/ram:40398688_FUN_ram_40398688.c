
void FUN_ram_40398688(int *param_1,int param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar4 = *param_1;
  *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 0x1000;
  uVar2 = param_3[0x14];
  cVar1 = *(char *)((int)param_3 + 0x29);
  uVar3 = param_3[0x15];
  *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xffff3c9f;
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xffffcfff;
  *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xfffffeff | (uint)((char)uVar2 == '\x02') << 8;
  *(uint *)(iVar4 + 8) = (uint)((char)uVar2 == '\x04') << 9 | *(uint *)(iVar4 + 8) & 0xfffffdff;
  *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xffffffdf | (uint)(cVar1 == '\x02') << 5;
  *(uint *)(iVar4 + 8) = (uint)(cVar1 == '\x04') << 6 | *(uint *)(iVar4 + 8) & 0xffffffbf;
  uVar8 = (uint)((char)uVar3 == '\x02');
  *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xffffbfff | uVar8 << 0xe;
  uVar9 = (uint)((char)uVar3 == '\x04');
  *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xffff7fff | uVar9 << 0xf;
  *(uint *)(iVar4 + 0x10) = uVar8 << 0xc | *(uint *)(iVar4 + 0x10) & 0xffffefff;
  *(uint *)(iVar4 + 0x10) = uVar9 << 0xd | *(uint *)(iVar4 + 0x10) & 0xffffdfff;
  iVar10 = 0;
  if ((*(int *)(param_3 + 0x12) != 0) && ((*(uint *)(param_2 + 0x34) & 0x12) == 2)) {
    iVar10 = *(int *)(param_2 + 0x28);
  }
  iVar10 = iVar10 + *(int *)(param_3 + 6);
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xdfffffff | (uint)(iVar10 != 0) << 0x1d;
  if (0 < iVar10) {
    *(uint *)(iVar4 + 0x14) = iVar10 - 1U & 0xff | *(uint *)(iVar4 + 0x14) & 0xffffff00;
  }
  iVar10 = *(int *)(param_3 + 8);
  if (iVar10 != 0) {
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffc0000 | iVar10 - 1U & 0x3ffff;
  }
  if ((*(byte *)(param_2 + 0x34) & 2) == 0) {
    if (iVar10 != 0) {
      *(uint *)(iVar4 + 0x1c) = iVar10 - 1U & 0x3ffff | *(uint *)(iVar4 + 0x1c) & 0xfffc0000;
    }
    if (*(int *)(param_2 + 4) != 0) {
      iVar10 = 0;
      iVar7 = 0;
      goto LAB_ram_403987e2;
    }
  }
  else if (*(int *)(param_3 + 10) != 0) {
    *(uint *)(iVar4 + 0x1c) =
         *(int *)(param_3 + 10) - 1U & 0x3ffff | *(uint *)(iVar4 + 0x1c) & 0xfffc0000;
  }
  iVar7 = *(int *)(param_3 + 2);
  iVar10 = *(int *)(param_3 + 4);
LAB_ram_403987e2:
  *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) & 0x7ffffff | (iVar10 + -1) * 0x8000000;
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xbfffffff | (uint)(iVar10 != 0) << 0x1e;
  *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) & 0xfffffff | (iVar7 + -1) * 0x10000000;
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0x7fffffff | (uint)(iVar7 != 0) << 0x1f;
  uVar8 = *(uint *)(iVar4 + 0x18);
  uVar9 = *(uint *)(param_2 + 0x34) >> 2 & 1;
  if (uVar9 == 0) {
    uVar6 = (*(code *)&SUB_ram_400108cc)((uint)*param_3 << (0x20U - iVar7 & 0x1f));
    uVar8 = uVar8 & 0xffff0000 | uVar6 & 0xffff;
  }
  else {
    uVar8 = uVar8 & 0xffff0000 | (uint)*param_3;
  }
  *(uint *)(iVar4 + 0x18) = uVar8;
  if (uVar9 == 0) {
    uVar5 = (*(code *)&SUB_ram_400108c0)
                      (*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0xe),0x20 - iVar10);
  }
  else {
    uVar5 = (*(code *)&SUB_ram_400108cc)();
  }
  *(undefined4 *)(iVar4 + 4) = uVar5;
  *(uint *)(iVar4 + 0x20) =
       *(uint *)(iVar4 + 0x20) & 0xbfffffff | (uint)(*(int *)(param_3 + 0x16) != 0) << 0x1e;
  FUN_ram_40399daa(param_1 + 2,param_3,0x30);
  return;
}

