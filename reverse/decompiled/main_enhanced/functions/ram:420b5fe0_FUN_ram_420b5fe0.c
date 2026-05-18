
void FUN_ram_420b5fe0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0x20) {
    *(uint *)(*param_1 + 0x4c) =
         *(uint *)(*param_1 + 0x4c) & 0xfe000000 | (uint)(0x80 << (param_2 & 0x1f)) >> 7;
  }
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar1 = (param_2 + 0x1c) * 4;
  *(uint *)(iVar1 + 0x60004004) = *(uint *)(iVar1 + 0x60004004) & 0xfffc1fff | 0x2000;
  return;
}

