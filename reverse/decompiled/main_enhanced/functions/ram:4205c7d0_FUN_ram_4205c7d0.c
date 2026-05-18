
void FUN_ram_4205c7d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 auStack_14 [4];
  
  auStack_14[0] = param_2;
  iVar1 = FUN_ram_40397156(*(undefined4 *)*param_1,auStack_14,0xffffffff,0);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  return;
}

