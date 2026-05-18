
int FUN_ram_4206157e(uint param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *extraout_a2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (1 < param_1) {
    uVar4 = FUN_ram_42061552();
    param_3 = extraout_a2;
  }
  puVar1 = (undefined4 *)FUN_ram_403905a0(1,0x24,0x804);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0x101;
  }
  else {
    if ((int)((ulonglong)uVar4 >> 0x20) != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 2;
    iVar2 = FUN_ram_420b3fec(&uStack_50,puVar1);
    if (iVar2 == 0) {
      uStack_44 = 0;
      uStack_40 = 1;
      uStack_3c = 2;
      iVar2 = FUN_ram_420b3fec(&uStack_44,puVar1 + 1);
      if (iVar2 == 0) {
        if ((int)uVar4 == 1) {
          uVar3 = *puVar1;
          uStack_2c = 2;
          uStack_28 = 0;
          uStack_24 = 0;
          FUN_ram_4039c11e(auStack_60,&uStack_2c,0xc);
          FUN_ram_420b4362(uVar3,auStack_60);
          uVar3 = puVar1[1];
          uStack_38 = 2;
          uStack_34 = 0;
          uStack_30 = 0;
          FUN_ram_4039c11e(auStack_60,&uStack_38,0xc);
          FUN_ram_420b4362(uVar3,auStack_60);
        }
        uStack_2c = 0x20;
        uStack_28 = CONCAT31(uStack_28._1_3_,1);
        iVar2 = FUN_ram_420b44ce(*puVar1,&uStack_2c);
        if ((iVar2 == 0) && (iVar2 = FUN_ram_420b44ce(puVar1[1],&uStack_2c), iVar2 == 0)) {
          FUN_ram_420b4552(*puVar1,puVar1 + 2,puVar1 + 3);
          FUN_ram_420b4552(puVar1[1],puVar1 + 4,puVar1 + 5);
          *param_3 = (int)puVar1;
          return 0;
        }
      }
    }
  }
  thunk_FUN_ram_40390634(puVar1);
  return iVar2;
}

