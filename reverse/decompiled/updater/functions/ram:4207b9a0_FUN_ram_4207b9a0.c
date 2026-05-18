
void FUN_ram_4207b9a0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = (param_2 + 0x1c) * 4 + iVar1;
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffc1fff;
  if (param_2 < 0x20) {
    *(uint *)(iVar1 + 0x4c) =
         *(uint *)(iVar1 + 0x4c) & 0xfe000000 | (uint)(0x80 << (param_2 & 0x1f)) >> 7;
  }
  return;
}

