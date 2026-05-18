
undefined4 FUN_ram_40396f68(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_1[0xf] != 0)) {
    if ((int)((ulonglong)(uint)param_1[0xf] * (ulonglong)(uint)param_1[0x10] >> 0x20) == 0) {
      FUN_ram_40396966();
      iVar1 = *param_1;
      param_1[0xe] = 0;
      iVar2 = param_1[0x10] * param_1[0xf];
      param_1[1] = iVar1;
      *(undefined1 *)(param_1 + 0x11) = 0xff;
      param_1[2] = iVar1 + iVar2;
      param_1[3] = iVar1 + (iVar2 - param_1[0x10]);
      *(undefined1 *)((int)param_1 + 0x45) = 0xff;
      if (param_2 == 0) {
        if ((param_1[4] != 0) && (iVar1 = FUN_ram_40398762(param_1 + 4), iVar1 != 0)) {
          FUN_ram_403969de();
        }
      }
      else {
        FUN_ram_40396d00(param_1 + 4);
        FUN_ram_40396d00(param_1 + 9);
      }
      FUN_ram_40396994();
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

