
int FUN_ram_4202f6f6(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_74;
  undefined1 auStack_73 [6];
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  char acStack_61 [50];
  byte bStack_2f;
  
  iVar2 = FUN_ram_4202b87e();
  iVar1 = 0x1e;
  if (iVar2 != 0) {
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_62 = 0;
    if ((*param_1 == '\0') &&
       (iVar1 = FUN_ram_4039c0e0(param_1 + 1,(int)&uStack_68 + 1,6), iVar1 == 0)) {
      return 3;
    }
    iVar2 = FUN_ram_4202eba2();
    iVar1 = 0xf;
    if (iVar2 == 0) {
      thunk_FUN_ram_4202b7dc();
      iVar1 = FUN_ram_42036716(param_1);
      if (iVar1 != 0) {
        FUN_ram_4202ef08(iVar1,0x13);
      }
      thunk_FUN_ram_4202b7f6();
      uStack_6d = 0;
      uStack_6c = 0;
      uStack_6b = 0;
      uStack_6a = 0;
      uStack_69 = 0;
      FUN_ram_4039c11e(&uStack_74,param_1,7);
      iVar1 = FUN_ram_4202cd92(6,&uStack_74,&uStack_68);
      if (iVar1 == 0) {
        param_1 = acStack_61;
      }
      uStack_6d = 0;
      uStack_6c = 0;
      uStack_6b = 0;
      uStack_6a = 0;
      uStack_69 = 0;
      FUN_ram_4039c11e(&uStack_74,param_1,7);
      iVar1 = FUN_ram_4202cd92(2,&uStack_74,&uStack_68);
      if (iVar1 == 0) {
        if ((bStack_2f & 1) != 0) {
          FUN_ram_42030284(uStack_74,auStack_73);
        }
      }
      else {
        iVar1 = FUN_ram_4202cd92(1,&uStack_74,&uStack_68);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = 0;
      FUN_ram_42026e98(&uStack_74);
    }
  }
  return iVar1;
}

