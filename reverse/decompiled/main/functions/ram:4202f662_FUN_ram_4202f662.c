
undefined4 FUN_ram_4202f662(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_8c [7];
  undefined1 uStack_85;
  undefined1 auStack_84 [7];
  undefined1 auStack_7d [21];
  undefined1 auStack_68 [10];
  undefined1 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  byte bStack_40;
  uint uStack_18;
  
  iVar2 = FUN_ram_4202b87e();
  if (iVar2 == 0) {
    uVar3 = 0x1e;
  }
  else {
    thunk_FUN_ram_4202b7dc();
    iVar2 = FUN_ram_420365de(param_1);
    if (iVar2 == 0) {
      thunk_FUN_ram_4202b7f6();
      uVar3 = 7;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 0x34);
      FUN_ram_42036658(iVar2,auStack_84);
      uStack_85 = 0;
      FUN_ram_4039c11e(auStack_8c,auStack_7d,7);
      thunk_FUN_ram_4202b7f6();
      if ((bVar1 & 1) == 0) {
        uVar3 = FUN_ram_4202859c(param_1);
      }
      else {
        iVar2 = FUN_ram_4202ce90(auStack_8c,auStack_68);
        if ((iVar2 == 0) && ((bStack_40 & 1) != 0)) {
          uVar3 = FUN_ram_42028f30(param_1,uStack_5e,auStack_50,uStack_5c,uStack_58,uStack_54,
                                   uStack_18 & 1);
        }
        else {
          uVar3 = FUN_ram_42028e04(param_1);
        }
      }
    }
  }
  return uVar3;
}

