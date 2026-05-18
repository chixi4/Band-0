
void FUN_ram_40393f8c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0x12121212) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_40392fe4(*(undefined4 *)(param_1 + 0x10));
  if (param_3 != 0) goto LAB_ram_40393fdc;
  iVar1 = FUN_ram_40392ec0(*(undefined4 *)(param_1 + 0x10),param_2 * 1000,
                           (int)((ulonglong)param_2 * 1000 >> 0x20));
  while (iVar1 != 0) {
    FUN_ram_4039bf1e();
LAB_ram_40393fdc:
    iVar1 = FUN_ram_40392f42();
  }
  return;
}

