
undefined4 FUN_ram_42065a7a(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_38;
  undefined1 auStack_34 [28];
  undefined4 uStack_18;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x78) == (uint)*(ushort *)(param_1 + 0x1c)) {
      uVar1 = 0;
    }
    else {
      (*(code *)&SUB_ram_40010488)(auStack_34,0,0x24);
      uStack_38 = 3;
      FUN_ram_42065a2a(param_1,0x42055c90,&uStack_38);
      uVar1 = uStack_18;
    }
  }
  return uVar1;
}

