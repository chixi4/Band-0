
int FUN_ram_4205d3ae(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  
  iVar2 = FUN_ram_4201d67a(0x3c0732a8,1,&uStack_1c);
  uVar1 = uStack_1c;
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4201d89a(uStack_1c,0x3c0732c0,param_1,0x770);
    if (iVar2 == 0) {
      FUN_ram_4204e5f2(auStack_18);
      iVar2 = FUN_ram_4201d89a(uVar1,0x3c0732b8,auStack_18,6);
      if (iVar2 == 0) {
        uVar3 = FUN_ram_42073e8e();
        iVar2 = FUN_ram_4201d7ca(uVar1,0x3c0732ac,uVar3 & 0xfffeffff);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4201d81a(uVar1);
        }
      }
    }
    FUN_ram_4201db22(uStack_1c);
  }
  return iVar2;
}

