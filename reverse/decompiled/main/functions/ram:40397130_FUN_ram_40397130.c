
void FUN_ram_40397130(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 <= param_1)) {
    iVar1 = FUN_ram_40397076(param_1,0,2);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x38) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_40396f58();
}

