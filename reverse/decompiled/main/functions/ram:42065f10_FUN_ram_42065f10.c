
undefined4 FUN_ram_42065f10(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  (*(code *)&SUB_ram_40010488)(auStack_30,0,0x20);
  uStack_38 = 7;
  uStack_34 = 0xffffffff;
  uStack_20 = 0xffffffff;
  uStack_1c = 0xffffffff;
  FUN_ram_42065a2a(param_1,0x42055c90,&uStack_38);
  uVar1 = 0;
  if (iStack_18 != 0) {
    *(undefined1 *)(iStack_18 + 0x30) = 1;
    uVar1 = FUN_ram_42065efa(param_1);
  }
  return uVar1;
}

