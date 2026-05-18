
int FUN_ram_4205d2e2(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  iVar2 = FUN_ram_4201d67a(0x3c0732a8,0,&uStack_3c);
  uVar1 = uStack_3c;
  if (iVar2 == 0x1101) {
    return 0x1101;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_ram_4201d9c2(uStack_3c,0x3c0732ac,&uStack_38);
  if (iVar2 != 0) goto LAB_ram_4205d336;
  uVar3 = FUN_ram_42073e8e();
  if ((uVar3 & 0xfffeffff) == uStack_38) {
    iStack_34 = 6;
    iVar2 = FUN_ram_4201da1a(uVar1,0x3c0732b8,auStack_30,&iStack_34);
    if (iVar2 != 0) goto LAB_ram_4205d336;
    if (iStack_34 == 6) {
      FUN_ram_4204e5f2(auStack_28);
      iVar2 = FUN_ram_40399d6c(auStack_28,auStack_30,6);
      if (iVar2 != 0) goto LAB_ram_4205d334;
      iStack_34 = 0x770;
      iVar2 = FUN_ram_4201da1a(uVar1,0x3c0732c0,param_1,&iStack_34);
      if ((iVar2 != 0) || (iStack_34 == 0x770)) goto LAB_ram_4205d336;
    }
    iVar2 = 0x104;
  }
  else {
LAB_ram_4205d334:
    iVar2 = -1;
  }
LAB_ram_4205d336:
  FUN_ram_4201db22(uStack_3c);
  return iVar2;
}

