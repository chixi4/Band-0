
undefined4 FUN_ram_4205c6a0(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 < 2) {
    iVar1 = FUN_ram_40397076(1,0,3);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      if ((param_2 == 1) && (iVar1 = FUN_ram_40397156(iVar1,0,0,0), iVar1 != 1))
      goto LAB_ram_4205c6b0;
      uVar2 = 0;
    }
    return uVar2;
  }
LAB_ram_4205c6b0:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

