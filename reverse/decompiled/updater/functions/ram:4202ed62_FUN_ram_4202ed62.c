
int FUN_ram_4202ed62(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [36];
  
  FUN_ram_4202f918(auStack_48);
  FUN_ram_4202476a(auStack_68);
  FUN_ram_4202476a(auStack_60);
  FUN_ram_4202476a(auStack_58);
  FUN_ram_4202476a(auStack_50);
  if (*param_1 == 9) {
    return -0x4f80;
  }
  if (param_1[0xd] == 0) {
    return -0x4f80;
  }
  iVar1 = FUN_ram_42024dea(param_5,1);
  if (-1 < iVar1) {
    piVar3 = param_1 + 0xd;
    iVar1 = FUN_ram_42024d4a(param_5,piVar3);
    if (((iVar1 < 0) && (iVar1 = FUN_ram_42024dea(param_6,1), -1 < iVar1)) &&
       (iVar1 = FUN_ram_42024d4a(param_6,piVar3), iVar1 < 0)) {
      iVar1 = FUN_ram_4202eaa0(param_1,auStack_68,param_2,param_3);
      if (((((iVar1 != 0) || (iVar1 = FUN_ram_4202595e(0,auStack_60,param_6,piVar3), iVar1 != 0)) ||
           ((iVar1 = FUN_ram_42025088(auStack_58,auStack_68,auStack_60), iVar1 != 0 ||
            ((iVar1 = FUN_ram_42025604(auStack_58,auStack_58,piVar3), iVar1 != 0 ||
             (iVar1 = FUN_ram_42025088(auStack_50,param_5,auStack_60), iVar1 != 0)))))) ||
          (iVar1 = FUN_ram_42025604(auStack_50,auStack_50,piVar3), iVar1 != 0)) ||
         (iVar1 = FUN_ram_420301f2(param_1,auStack_48,auStack_58,param_1 + 7,auStack_50,param_4,0),
         iVar1 != 0)) goto LAB_ram_4202edec;
      iVar1 = FUN_ram_4202fdc8(auStack_48);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_42025604(auStack_48,auStack_48,piVar3);
        if (iVar1 != 0) goto LAB_ram_4202edec;
        iVar2 = FUN_ram_42024d4a(auStack_48,param_5);
        iVar1 = 0;
        if (iVar2 == 0) goto LAB_ram_4202edec;
      }
    }
  }
  iVar1 = -0x4e00;
LAB_ram_4202edec:
  FUN_ram_4202f9ba(auStack_48);
  FUN_ram_42024774(auStack_68);
  FUN_ram_42024774(auStack_60);
  FUN_ram_42024774(auStack_58);
  FUN_ram_42024774(auStack_50);
  return iVar1;
}

