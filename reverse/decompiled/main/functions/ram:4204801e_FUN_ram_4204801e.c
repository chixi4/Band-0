
undefined4 FUN_ram_4204801e(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (-1 < (int)param_1) {
    uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar3 = 0x102;
    if ((uVar2 & 1) != 0) {
      iVar4 = **(int **)(gp + -0x450);
      uVar3 = 0;
      iVar5 = param_1 * 4 + iVar4;
      *(uint *)(iVar5 + 0x554) = *(uint *)(iVar5 + 0x554) & 0xffffff00 | 0x80;
      *(uint *)(iVar4 + 0x24) =
           *(uint *)(iVar4 + 0x24) & 0xfe000000 | (uint)(0x80 << (param_1 & 0x1f)) >> 7;
      puVar1 = (uint *)(((param_1 & 0xff) + 0x18002401) * 4);
      *puVar1 = *puVar1 & 0xffff8fff | 0x1000;
    }
    return uVar3;
  }
  return 0x102;
}

