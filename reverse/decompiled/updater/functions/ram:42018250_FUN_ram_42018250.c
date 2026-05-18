
undefined4 FUN_ram_42018250(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (-1 < (int)param_1) {
    uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar3 = 0x102;
    if ((uVar2 & 1) != 0) {
      iVar4 = **(int **)(gp + -0x540);
      uVar3 = 0;
      *(uint *)(iVar4 + 0x28) =
           *(uint *)(iVar4 + 0x28) & 0xfe000000 | (uint)(0x80 << (param_1 & 0x1f)) >> 7;
      iVar4 = iVar4 + ((param_1 & 0xff) + 0x154) * 4;
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xfffffbff;
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 0x200;
      puVar1 = (uint *)(((param_1 & 0xff) + 0x18002401) * 4);
      *puVar1 = *puVar1 & 0xffff8fff | 0x1000;
    }
    return uVar3;
  }
  return 0x102;
}

