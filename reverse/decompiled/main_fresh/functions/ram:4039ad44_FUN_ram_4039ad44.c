
uint FUN_ram_4039ad44(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (((((((param_2 & 1) == 0) || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 0xc & 1, uVar1 == 0)) &&
        (((param_2 & 0x40) == 0 || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 10 & 1, uVar1 == 0)))) &&
       (((param_2 & 0x80) == 0 || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 0xb & 1, uVar1 == 0)))) &&
      (((param_2 & 0x100) == 0 || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 8 & 1, uVar1 == 0)))) &&
     ((((((param_2 & 0x200) == 0 || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 9 & 1, uVar1 == 0)) &&
        ((-1 < (int)(param_2 << 0x11) || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 0xd & 1, uVar1 == 0))))
       && (((param_2 & 0x400) == 0 || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 4 & 1, uVar1 == 0)))) &&
      (((-1 < (int)(param_2 << 0x14) || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 5 & 1, uVar1 == 0)) &&
       (((-1 < (int)(param_2 << 0x13) || (uVar1 = *(uint *)(iVar2 + 0x3c) >> 6 & 1, uVar1 == 0)) &&
        (uVar1 = 0, (int)(param_2 << 0x12) < 0)))))))) {
    uVar1 = *(uint *)(iVar2 + 0x3c) >> 7 & 1;
  }
  return uVar1;
}

