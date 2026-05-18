
undefined4 FUN_ram_42073258(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_420721ea();
  FUN_ram_42072162(param_1);
  *param_1 = param_2;
  if (param_2 == 3) {
    param_1[0x12] = 0x42062e4c;
    param_1[2] = 0x80001;
    param_1[1] = (int)&DAT_ram_3c0fa1f8;
    param_1[6] = 0x80001;
    param_1[0xe] = 0x80001;
    param_1[8] = 0x80001;
    param_1[10] = 0x80001;
    param_1[5] = (int)&DAT_ram_3c0fa1d8;
    param_1[9] = (int)&DAT_ram_3c0fa198;
    param_1[0xd] = (int)&DAT_ram_3c0fa178;
    param_1[0xc] = 0x10001;
    param_1[0xb] = (int)&DAT_ram_3c0fa218;
    param_1[7] = (int)&DAT_ram_3c0fa1b8;
    iVar1 = FUN_ram_420683ba(param_1 + 1);
    param_1[0xf] = iVar1;
    iVar1 = FUN_ram_420683ba(param_1 + 0xd);
    param_1[0x10] = iVar1;
    param_1[0x11] = 1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    uVar2 = 0;
  }
  else {
    *param_1 = 0;
    uVar2 = 0xffffb180;
  }
  return uVar2;
}

