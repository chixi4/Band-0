
undefined4 FUN_ram_4201bdc4(int *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x102;
  if (param_1 != (int *)0x0) {
    uVar2 = FUN_ram_40391212();
    FUN_ram_40391f4a();
    uVar1 = 0x103;
    if (*param_1 == 0 && param_1[1] == 0) {
      *param_1 = (int)uVar2;
      *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xfe;
      param_1[4] = -0xf21e1e2;
      param_1[1] = (int)((ulonglong)uVar2 >> 0x20);
      param_1[2] = 0;
      param_1[3] = param_1[3] & 0xff000000;
      FUN_ram_40391fc6(param_1,0);
      uVar1 = 0;
    }
    FUN_ram_40391f3a();
  }
  return uVar1;
}

