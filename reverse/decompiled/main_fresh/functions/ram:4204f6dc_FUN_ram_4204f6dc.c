
int FUN_ram_4204f6dc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  
  iVar2 = FUN_ram_4204beee("eatures.",1,&uStack_1c);
  uVar1 = uStack_1c;
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4204c148(uStack_1c,&DAT_ram_3c0c2bb4,param_1,0x770);
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_ram_4204b7ce(auStack_18);
      if (iVar2 != 0) {
        FUN_ram_4039bf1e();
      }
      iVar2 = FUN_ram_4204c148(uVar1,&DAT_ram_3c0c2bac,auStack_18,6);
      if (iVar2 == 0) {
        uVar3 = FUN_ram_420ac4f2();
        iVar2 = FUN_ram_4204c078(uVar1,"res.",uVar3 & 0xfffeffff);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4204c0c8(uVar1);
        }
      }
    }
    FUN_ram_4204c3d0(uStack_1c);
  }
  return iVar2;
}

