
undefined4 FUN_ram_420480ae(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      uVar2 = 0;
      iVar3 = **(int **)(gp + -0x450) + (param_1 + 0x1c) * 4;
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffffb;
    }
    return uVar2;
  }
  return 0x102;
}

