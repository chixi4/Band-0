
void FUN_ram_40397100(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 <= param_1)) {
    iVar1 = FUN_ram_40396fee(param_1,0,0,param_3,2);
    *(uint *)(iVar1 + 0x38) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

