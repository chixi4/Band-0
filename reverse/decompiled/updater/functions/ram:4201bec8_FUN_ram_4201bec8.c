
int FUN_ram_4201bec8(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  puVar1 = (undefined4 *)FUN_ram_40390574(1,0x24,0x804);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0x101;
  }
  else {
    if (param_2 != 3) {
LAB_ram_4201bfb4:
      *param_3 = (int)puVar1;
      return 0;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 2;
    iVar2 = FUN_ram_4207a5c4(&uStack_50,puVar1);
    if (iVar2 == 0) {
      uStack_44 = 0;
      uStack_40 = 1;
      uStack_3c = 2;
      iVar2 = FUN_ram_4207a5c4(&uStack_44,puVar1 + 1);
      if (iVar2 == 0) {
        if (param_1 == 1) {
          uVar3 = *puVar1;
          uStack_2c = 2;
          uStack_28 = 0;
          uStack_24 = 0;
          FUN_ram_40399daa(auStack_60,&uStack_2c,0xc);
          FUN_ram_4207a932(uVar3,auStack_60);
          uVar3 = puVar1[1];
          uStack_38 = 2;
          uStack_34 = 0;
          uStack_30 = 0;
          FUN_ram_40399daa(auStack_60,&uStack_38,0xc);
          FUN_ram_4207a932(uVar3,auStack_60);
        }
        uStack_2c = 0x20;
        uStack_28 = CONCAT31(uStack_28._1_3_,1);
        iVar2 = FUN_ram_4207aa9e(*puVar1,&uStack_2c);
        if ((iVar2 == 0) && (iVar2 = FUN_ram_4207aa9e(puVar1[1],&uStack_2c), iVar2 == 0)) {
          FUN_ram_4207ab22(*puVar1,puVar1 + 2,puVar1 + 3);
          FUN_ram_4207ab22(puVar1[1],puVar1 + 4,puVar1 + 5);
          goto LAB_ram_4201bfb4;
        }
      }
    }
  }
  thunk_FUN_ram_40390608(puVar1);
  return iVar2;
}

