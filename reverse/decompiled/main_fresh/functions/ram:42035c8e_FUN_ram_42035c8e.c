
undefined4 FUN_ram_42035c8e(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (param_1 != 0) {
    uVar3 = 0;
    if ((param_2 != 0) && (param_3 != 0)) {
      FUN_ram_42037000(&local_30,0x10,param_2);
      FUN_ram_420359de(&local_30,param_3);
      iVar1 = param_3 + 0x10;
      do {
        FUN_ram_42035ab8(&local_30);
        uStack_20 = local_30;
        uStack_1f = uStack_2b;
        uStack_1e = uStack_26;
        uStack_1d = uStack_21;
        uStack_1c = uStack_2c;
        uStack_1b = uStack_27;
        uStack_1a = uStack_22;
        uStack_19 = uStack_2d;
        uStack_18 = uStack_28;
        uStack_17 = uStack_23;
        uStack_16 = uStack_2e;
        uStack_15 = uStack_29;
        uStack_14 = uStack_24;
        uStack_13 = uStack_2f;
        uStack_12 = uStack_2a;
        uStack_11 = uStack_25;
        FUN_ram_42037000(&local_30,0x10,&uStack_20);
        FUN_ram_42035ada(&uStack_20,&local_30);
        FUN_ram_42035ada(&uStack_1c,&uStack_2c);
        FUN_ram_42035ada(&uStack_18,&uStack_28);
        FUN_ram_42035ada(&uStack_14,&uStack_24);
        FUN_ram_42037000(&local_30,0x10,&uStack_20);
        iVar2 = iVar1 + 0x10;
        FUN_ram_420359de(&local_30,iVar1);
        iVar1 = iVar2;
      } while (iVar2 != param_3 + 0xa0);
      FUN_ram_42035ab8(&local_30);
      uStack_20 = local_30;
      uStack_1f = uStack_2b;
      uStack_1e = uStack_26;
      uStack_1d = uStack_21;
      uStack_1c = uStack_2c;
      uStack_1b = uStack_27;
      uStack_1a = uStack_22;
      uStack_19 = uStack_2d;
      uStack_18 = uStack_28;
      uStack_17 = uStack_23;
      uStack_16 = uStack_2e;
      uStack_15 = uStack_29;
      uStack_14 = uStack_24;
      uStack_13 = uStack_2f;
      uStack_12 = uStack_2a;
      uStack_11 = uStack_25;
      FUN_ram_42037000(&local_30,0x10,&uStack_20);
      FUN_ram_420359de(&local_30,iVar2);
      FUN_ram_42037000(param_1,0x10,&local_30);
      thunk_EXT_FUN_ram_40010488(&local_30,0,0x10);
      uVar3 = 1;
    }
    return uVar3;
  }
  return 0;
}

