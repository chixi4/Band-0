
undefined4 FUN_ram_4201f3fe(undefined2 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_ram_4201f71a(param_2);
    uStack_2c = 0;
    if (1 < param_3) {
      uStack_2c = 3;
    }
    uStack_34 = (undefined2)((200 - iVar2) / 2);
    uStack_2b = 0xff;
    uStack_24 = 0x200;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_22 = 1;
    uStack_32 = param_1;
    uVar3 = FUN_ram_4201f76a(iVar1,param_2,&uStack_34);
  }
  return uVar3;
}

