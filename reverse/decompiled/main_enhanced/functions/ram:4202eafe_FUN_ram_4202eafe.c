
undefined4 FUN_ram_4202eafe(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30;
  undefined1 auStack_2f [35];
  
  iVar1 = FUN_ram_4202b87e();
  if (iVar1 == 0) {
    uVar2 = 0x1e;
  }
  else {
    uVar2 = 0x12;
    if (param_2 < 0x20) {
      if (param_1 == 0) {
        if (param_2 != 0) {
          return 0x12;
        }
      }
      else if (param_2 != 0) {
        FUN_ram_4039c11e(auStack_2f,param_1,param_2);
      }
      local_30 = (undefined1)param_2;
      uVar2 = FUN_ram_420332b4(0x2008,&local_30,0x20,0,0);
    }
  }
  return uVar2;
}

