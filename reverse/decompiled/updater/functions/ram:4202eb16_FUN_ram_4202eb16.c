
int FUN_ram_4202eb16(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [36];
  
  if (*param_1 == 9) {
    iVar1 = -0x4f80;
  }
  else {
    iVar1 = -0x4f80;
    if (param_1[0xd] != 0) {
      iVar1 = FUN_ram_42024dea(param_4,1);
      if (-1 < iVar1) {
        piVar3 = param_1 + 0xd;
        iVar1 = FUN_ram_42024d4a(param_4,piVar3);
        if (iVar1 < 0) {
          FUN_ram_4202f918(auStack_58);
          FUN_ram_4202476a(auStack_68);
          FUN_ram_4202476a(auStack_60);
          iVar1 = 0xb;
          do {
            iVar4 = 0xb;
            while( true ) {
              iVar2 = FUN_ram_42030bd2(param_1,auStack_68,param_7,param_8);
              if (((iVar2 != 0) ||
                  (iVar2 = FUN_ram_420301de(param_1,auStack_58,auStack_68,param_1 + 7,param_9,
                                            param_10,0), iVar2 != 0)) ||
                 (iVar2 = FUN_ram_42025604(param_2,auStack_58,piVar3), iVar2 != 0))
              goto LAB_ram_4202ec5a;
              iVar2 = FUN_ram_42024dea(param_2,0);
              if (iVar2 != 0) break;
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) goto LAB_ram_4202ec54;
            }
            iVar2 = FUN_ram_4202eaa0(param_1,auStack_60,param_5,param_6);
            if (((((iVar2 != 0) || (iVar2 = FUN_ram_42025088(param_3,param_2,param_4), iVar2 != 0))
                 || ((iVar2 = FUN_ram_42025020(auStack_60,auStack_60,param_3), iVar2 != 0 ||
                     ((iVar2 = FUN_ram_4202595e(0,param_3,auStack_68,piVar3), iVar2 != 0 ||
                      (iVar2 = FUN_ram_42025088(param_3,param_3,auStack_60), iVar2 != 0)))))) ||
                (iVar2 = FUN_ram_42025604(param_3,param_3,piVar3), iVar2 != 0)) ||
               (iVar4 = FUN_ram_42024dea(param_3,0), iVar4 != 0)) goto LAB_ram_4202ec5a;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
LAB_ram_4202ec54:
          iVar2 = -0x4d00;
LAB_ram_4202ec5a:
          FUN_ram_4202f9ba(auStack_58);
          FUN_ram_42024774(auStack_68);
          FUN_ram_42024774(auStack_60);
          return iVar2;
        }
      }
      iVar1 = -0x4c80;
    }
  }
  return iVar1;
}

