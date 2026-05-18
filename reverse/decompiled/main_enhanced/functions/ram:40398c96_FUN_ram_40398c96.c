
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40398c96(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_40396966();
  if (*(int *)(_DAT_ram_3fcc4e9c + 0x148) == 0) {
    *(undefined1 *)(_DAT_ram_3fcc4e9c + 0x14c) = 1;
    if (param_3 != 0) {
      FUN_ram_40397b7e(param_3);
      FUN_ram_403969de();
    }
  }
  FUN_ram_40396994();
  FUN_ram_40396966();
  iVar1 = *(int *)(_DAT_ram_3fcc4e9c + 0x148);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *(int *)(_DAT_ram_3fcc4e9c + 0x148) = iVar1 + -1;
    }
    else {
      *(undefined4 *)(_DAT_ram_3fcc4e9c + 0x148) = 0;
    }
  }
  *(undefined1 *)(_DAT_ram_3fcc4e9c + 0x14c) = 0;
  FUN_ram_40396994();
  return iVar1;
}

