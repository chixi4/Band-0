
undefined4 FUN_ram_4202859c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_28 [5];
  byte bStack_14;
  
  (*(code *)&SUB_ram_40010488)(auStack_28,0,0x18);
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420279b4(param_1,0xff,0xffffffff,0);
  uVar2 = 2;
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4202710e();
    if (iVar1 != 0) {
      *(short *)(iVar1 + 10) = (short)param_1;
      *(undefined1 *)(iVar1 + 0xd) = 8;
      FUN_ram_42026fba();
      bStack_14 = bStack_14 | 1;
      thunk_FUN_ram_4202b7f6();
      FUN_ram_42028608(param_1,auStack_28,1);
      return auStack_28[0];
    }
    uVar2 = 6;
  }
  auStack_28[0] = uVar2;
  thunk_FUN_ram_4202b7f6();
  return auStack_28[0];
}

