
undefined4 FUN_ram_40395350(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    uVar1 = 0;
    if (param_1[0xf] != 0) {
      if ((int)((ulonglong)(uint)param_1[0xf] * (ulonglong)(uint)param_1[0x10] >> 0x20) == 0) {
        FUN_ram_40394d60(0);
        iVar2 = *param_1;
        param_1[0xe] = 0;
        iVar3 = param_1[0x10] * param_1[0xf];
        param_1[1] = iVar2;
        *(undefined1 *)(param_1 + 0x11) = 0xff;
        param_1[2] = iVar2 + iVar3;
        param_1[3] = iVar2 + (iVar3 - param_1[0x10]);
        *(undefined1 *)((int)param_1 + 0x45) = 0xff;
        if (param_2 == 0) {
          if ((param_1[4] != 0) && (iVar2 = FUN_ram_40396680(param_1 + 4), iVar2 != 0)) {
            FUN_ram_40394dce();
          }
        }
        else {
          FUN_ram_40395112(param_1 + 4);
          FUN_ram_40395112(param_1 + 9);
        }
        FUN_ram_40394d8e();
        uVar1 = 1;
      }
    }
    return uVar1;
  }
  return 0;
}

