
int FUN_ram_42032514(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte abStack_24 [4];
  undefined1 auStack_20 [7];
  byte bStack_19;
  undefined1 auStack_18 [7];
  undefined1 uStack_11;
  
  abStack_24[0] = 0;
  iVar1 = 0x11;
  if (param_2 != 0) {
    iVar1 = (*(code *)&SUB_ram_40011a18)(param_2);
    iVar2 = (*(code *)&SUB_ram_400119f4)(param_2,0,iVar1 != 0,abStack_24);
    iVar1 = 0xe;
    if (-1 < iVar2) {
      abStack_24[0] = abStack_24[0] & 7;
      thunk_FUN_ram_4202b7dc();
      iVar2 = FUN_ram_420365de(param_1);
      if ((iVar2 != 0) &&
         (iVar1 = 0x13, *(byte *)(iVar2 + 0x66) == (*(byte *)(iVar2 + 0x66) & abStack_24[0]))) {
        *(byte *)(iVar2 + 0x66) = abStack_24[0];
        iVar1 = 0;
        if ((*(ushort *)(iVar2 + 0x68) & 4) != 0) {
          uStack_11 = 0;
          FUN_ram_4039c11e(auStack_18,iVar2 + 8,7);
          iVar1 = FUN_ram_4202cf2c(auStack_18);
          if (iVar1 == 0) {
            FUN_ram_4039c11e(auStack_20,iVar2 + 8,7);
            bStack_19 = abStack_24[0];
            iVar1 = FUN_ram_4202cf24(auStack_20);
          }
        }
      }
      thunk_FUN_ram_4202b7f6();
    }
  }
  return iVar1;
}

