
int FUN_ram_4204f606(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  iVar2 = FUN_ram_4204beee("eatures.",0,&uStack_3c);
  uVar1 = uStack_3c;
  if (iVar2 == 0x1101) {
    return 0x1101;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_ram_4204c270(uStack_3c,"res.",&uStack_38);
  if (iVar2 != 0) goto LAB_ram_4204f65a;
  uVar3 = FUN_ram_420ac4f2();
  if ((uVar3 & 0xfffeffff) == uStack_38) {
    iStack_34 = 6;
    iVar2 = FUN_ram_4204c2c8(uVar1,&DAT_ram_3c0c2bac,auStack_30,&iStack_34);
    if (iVar2 != 0) goto LAB_ram_4204f65a;
    if (iStack_34 == 6) {
      iVar2 = thunk_FUN_ram_4204b7ce(auStack_28);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      iVar2 = FUN_ram_4039c0e0(auStack_28,auStack_30,6);
      if (iVar2 != 0) goto LAB_ram_4204f658;
      iStack_34 = 0x770;
      iVar2 = FUN_ram_4204c2c8(uVar1,&DAT_ram_3c0c2bb4,param_1,&iStack_34);
      if ((iVar2 != 0) || (iStack_34 == 0x770)) goto LAB_ram_4204f65a;
    }
    iVar2 = 0x104;
  }
  else {
LAB_ram_4204f658:
    iVar2 = -1;
  }
LAB_ram_4204f65a:
  FUN_ram_4204c3d0(uStack_3c);
  return iVar2;
}

