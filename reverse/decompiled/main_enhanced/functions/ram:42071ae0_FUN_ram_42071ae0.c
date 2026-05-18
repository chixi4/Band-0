
int FUN_ram_42071ae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [36];
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = -0x4f80;
  }
  else {
    iVar1 = FUN_ram_420685b4(param_4,1);
    if (-1 < iVar1) {
      iVar3 = param_1 + 0x34;
      iVar1 = FUN_ram_42068514(param_4,iVar3);
      if (iVar1 < 0) {
        FUN_ram_42072140(auStack_58);
        FUN_ram_4206806e(auStack_68);
        FUN_ram_4206806e(auStack_60);
        iVar1 = 0xb;
        do {
          iVar4 = 0xb;
          while( true ) {
            iVar2 = FUN_ram_42072cca(param_1,auStack_68,param_7,param_8);
            if (((iVar2 != 0) ||
                (iVar2 = FUN_ram_4207278e(param_1,auStack_58,auStack_68,param_1 + 0x1c,param_9,
                                          param_10,0), iVar2 != 0)) ||
               (iVar2 = FUN_ram_42068da0(param_2,auStack_58,iVar3), iVar2 != 0))
            goto LAB_ram_42071c16;
            iVar2 = FUN_ram_420685b4(param_2,0);
            if (iVar2 != 0) break;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_ram_42071c10;
          }
          iVar2 = FUN_ram_42071a6a(param_1,auStack_60,param_5,param_6);
          if (((((iVar2 != 0) || (iVar2 = FUN_ram_42068852(param_3,param_2,param_4), iVar2 != 0)) ||
               ((iVar2 = FUN_ram_420687ea(auStack_60,auStack_60,param_3), iVar2 != 0 ||
                ((iVar2 = FUN_ram_420690fa(0,param_3,auStack_68,iVar3), iVar2 != 0 ||
                 (iVar2 = FUN_ram_42068852(param_3,param_3,auStack_60), iVar2 != 0)))))) ||
              (iVar2 = FUN_ram_42068da0(param_3,param_3,iVar3), iVar2 != 0)) ||
             (iVar4 = FUN_ram_420685b4(param_3,0), iVar4 != 0)) goto LAB_ram_42071c16;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
LAB_ram_42071c10:
        iVar2 = -0x4d00;
LAB_ram_42071c16:
        FUN_ram_420721e2(auStack_58);
        FUN_ram_42068078(auStack_68);
        FUN_ram_42068078(auStack_60);
        return iVar2;
      }
    }
    iVar1 = -0x4c80;
  }
  return iVar1;
}

