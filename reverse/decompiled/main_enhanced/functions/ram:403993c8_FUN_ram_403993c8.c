
void FUN_ram_403993c8(int *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7)

{
  int iVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar1 = *param_1 + param_2 * 0x14 + param_1[1] * 0x78;
  *(uint *)(iVar1 + 0xc) =
       (param_4 & 1) << 0x1e | *(uint *)(iVar1 + 0xc) & 0x80000000 | (param_7 & 0x3ff) << 0x14 |
       (param_5 & 0x3ff) << 10 | param_6 & 0x3ff;
  return;
}

