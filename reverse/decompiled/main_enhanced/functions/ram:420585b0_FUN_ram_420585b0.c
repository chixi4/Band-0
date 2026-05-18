
void FUN_ram_420585b0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar1 = FUN_ram_4205c954();
  FUN_ram_4205850a(iVar1 + param_1,param_2,param_3);
  return;
}

