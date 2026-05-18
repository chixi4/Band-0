
int FUN_ram_4202d764(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  FUN_ram_4202476a(auStack_18);
  param_3 = param_2 + param_3;
  iStack_1c = param_2;
  iVar1 = FUN_ram_4202b91a(&iStack_1c,param_3,&iStack_20,0x30);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_3 == iStack_1c + iStack_20) {
    iVar1 = FUN_ram_4202ba02(&iStack_1c,param_3,&iStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (iStack_24 == 0) {
      iVar1 = FUN_ram_4202c166(&iStack_1c,param_3,auStack_18);
      if (((((((iVar1 == 0) && (iVar1 = FUN_ram_4202c2d8(param_1,auStack_18,0,0,0,0), iVar1 == 0))
             && (iVar1 = FUN_ram_4202c166(&iStack_1c,param_3,auStack_18), iVar1 == 0)) &&
            (((iVar1 = FUN_ram_420249f4(param_1 + 0x10,auStack_18), iVar1 == 0 ||
              (iVar1 = iVar1 + -0x4080, iVar1 == 0)) &&
             ((iVar1 = FUN_ram_4202c166(&iStack_1c,param_3,auStack_18), iVar1 == 0 &&
              ((iVar1 = FUN_ram_420249f4(param_1 + 0x18,auStack_18), iVar1 == 0 ||
               (iVar1 = iVar1 + -0x4080, iVar1 == 0)))))))) &&
           ((iVar1 = FUN_ram_4202c166(&iStack_1c,param_3,auStack_18), iVar1 == 0 &&
            (((iVar1 = FUN_ram_420249f4(param_1 + 0x20,auStack_18), iVar1 == 0 ||
              (iVar1 = iVar1 + -0x4080, iVar1 == 0)) &&
             (iVar1 = FUN_ram_4202c166(&iStack_1c,param_3,auStack_18), iVar1 == 0)))))) &&
          (((iVar1 = FUN_ram_420249f4(param_1 + 0x28,auStack_18), iVar1 == 0 ||
            (iVar1 = iVar1 + -0x4080, iVar1 == 0)) &&
           (((iVar1 = FUN_ram_4202c166(&iStack_1c,param_3,auStack_18), iVar1 == 0 &&
             ((iVar1 = FUN_ram_420249f4(param_1 + 0x30,auStack_18), iVar1 == 0 &&
              (iVar1 = FUN_ram_4202c166(&iStack_1c,param_3,auStack_18), iVar1 == 0)))) &&
            (iVar1 = FUN_ram_420249f4(param_1 + 0x38,auStack_18), iVar1 == 0)))))) &&
         (((iVar1 = FUN_ram_4202c166(&iStack_1c,param_3,auStack_18), iVar1 == 0 &&
           (iVar1 = FUN_ram_420249f4(param_1 + 0x40,auStack_18), iVar1 == 0)) &&
          (iVar1 = FUN_ram_4202c412(param_1), iVar1 == 0)))) {
        iVar1 = FUN_ram_4202c63a(param_1);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (iStack_1c != param_3) {
            iVar1 = -0x66;
          }
        }
        else {
          iVar1 = -0x4200;
        }
      }
      FUN_ram_42024774(auStack_18);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_ram_4202d75c(param_1);
      return iVar1;
    }
  }
  return -0x4080;
}

